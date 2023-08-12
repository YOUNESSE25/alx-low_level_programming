#include<stdio.h>
#include<stdlib.h>
#include"main.h"

void print_Data(unsigned char *point_cont);
void print_Version(unsigned char *point_cont);
void elf_file(unsigned char *point_cont);
void print_OSABI(unsigned char *point_cont);
void print_Magic(unsigned char *point_cont);
void print_Class(unsigned char *point_cont);
void print_ABIvers(unsigned char *point_cont);
void print_Type(unsigned char *point_cont, unsigned int t);
void print_Entry(unsigned char *point_cont, unsigned long int add);
void close_elf(int elf);


/**
 * elf_file - check elf file
 * @point_cont: pointer array magic number
 */
void elf_file(unsigned char *point_cont)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (point_cont[i] != 127 && point_cont[i] != 'E'
				&& point_cont[i] != 'L' && point_cont[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}
/**
 * print_Magic - print magic numb
 * @point_cont: pointer array magic number
 */
void print_Magic(unsigned char *point_cont)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", point_cont[i]);
		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}
/**
 * print_Class - print class
 * @point_cont: pointer array magic number
 */
void print_Class(unsigned char *point_cont)
{
	printf("  Class:                             ");
	switch (point_cont[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", point_cont[EI_CLASS]);
	}
}
/**
 * print_Data - print data
 * @point_cont: pointer array magic number
 */
void print_Data(unsigned char *point_cont)
{
	printf("  Data:                              ");
	switch (point_cont[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", point_cont[EI_CLASS]);
	}
}
/**
 * print_Version - print elf header version
 * @point_cont: pointer array magic number
 */
void print_Version(unsigned char *point_cont)
{
	printf("  Version:                           %d", point_cont[EI_VERSION]);
	switch (point_cont[EI_VERSION])
	{
		case EV_CURRENT:
			printf("(current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}
/**
 * print_OSABI - print OS/ABI
 * @point_cont: pointer array magic number
 */
void print_OSABI(unsigned char *point_cont)
{
	printf("  OS/ABI:                            ");
	switch (point_cont[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown:%x>\n", point_cont[EI_OSABI]);
	}
}
/**
 * print_ABIvers - print abi version
 * @point_cont: pointer array magic number
 */
void print_ABIvers(unsigned char *point_cont)
{
	printf("  ABI Version:                       %d\n", point_cont[EI_ABIVERSION]);
}
/**
 * print_Type - print type
 * @point_cont: pointer array magic number
 * @t: elf type
 */
void print_Type(unsigned char *point_cont, unsigned int t)
{
	if (point_cont[EI_DATA] == ELFDATA2MSB)
		t >>= 8;
	printf("  Type:                              ");
	switch (t)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", t);
	}
}
/**
 * print_Entry - print entry point
 * @point_cont: pointer array magic number
 * @add: adressof elf entry point
 */
void print_Entry(unsigned char *point_cont, unsigned long int add)
{
	printf("  Entry point address:               ");
	if (point_cont[EI_DATA] == ELFDATA2MSB)
	{
		add = ((add << 8) & 0xFF00FF00) | ((add >> 8) & 0xFF00FF);
		add = (add << 16) | (add >> 16);
	}
	if (point_cont[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)add);
	else
		printf("%#lx\n", add);
}
/**
 * close_elf - closs
 * @elf: descriptor
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", elf);
		exit(98);
	}
}
/**
 * main - displays the information contained in the ELF header
 * @argc: the number of arguments
 * @argv: array of pointers
 * Return: 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int oopen, rread;

	oopen = open(argv[1], O_RDONLY);
	if (oopen == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(oopen);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	rread = read(oopen, header, sizeof(Elf64_Ehdr));
	if (rread == -1)
	{
		free(header);
		close_elf(oopen);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}
	elf_file(header->e_ident);
	printf("ELF Header:\n");
	print_Magic(header->e_ident);
	print_Class(header->e_ident);
	print_Data(header->e_ident);
	print_Version(header->e_ident);
	print_OSABI(header->e_ident);
	print_ABIvers(header->e_ident);
	print_Type(header->e_ident, header->e_type);
	print_Entry(header->e_ident, header->e_entry);
	free(header);
	close_elf(oopen);
	return (0);
}
