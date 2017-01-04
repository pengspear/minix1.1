SECTIONS
{
	. = 0x100000;
	.multiboot :{
		*(.multiboot_header);
	}
	.text :{
		*(.text);
	}
	.data :{
		*(.data)
	}
	.bss :{
		*(.bss);
	}
	end = .;
}
