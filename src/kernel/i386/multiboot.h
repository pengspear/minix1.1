#ifndef __MULTIBOOT_H__
#define __MULTIBOOT_H__

typedef	unsigned char		u8;
typedef	unsigned short		u16;
typedef unsigned int		u32;
typedef unsigned long long	u64;
typedef void				*u_phys;
typedef void				*u_virt;

/* layout of multiboot header */
struct multiboot_header {
	u32		magic;
	u32		architecture;
	u32		header_length;
	u32		checksum;
};

/* general tag */
struct multiboot_general_tag {
	u16		type;
	u16		flags;
	u32		size;
};

#define	MULTIBOOT_MAGIC		(0xe85250d6)
#define	MULTIBOOT_ARCH_I386	(0)

#endif /* __MULTIBOOT_H__ */
