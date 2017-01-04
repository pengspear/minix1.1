#include "multiboot.h"

#define	MULTIBOOT_HEADER_FLAGS	(MULTIBOOT_PAGE_ALIGN | MULTIBOOT_MEMORY_INFO)

struct multiboot2_header {
	struct multiboot_header			header;
	struct multiboot_general_tag	tag;
};

struct multiboot2_header multiboot2header __attribute__ ((section (".multiboot_header"))) = {
	{
		MULTIBOOT_MAGIC,
		MULTIBOOT_ARCH_I386,
		sizeof(struct multiboot2_header),
		-(MULTIBOOT_MAGIC + MULTIBOOT_ARCH_I386 + sizeof(struct multiboot2_header))
	},
	{
		0,
		0,
		0
	}
};
