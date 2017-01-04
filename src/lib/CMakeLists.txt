cmake_minimum_required(VERSION 3.5)
project( c C ASM )
set(CMAKE_VERBOSE_MAKEFILE TRUE)
#set(EXECUTABLE_OUTPUT_PATH ../build)

add_library(${PROJECT_NAME}
    abort.c
    abs.c
    access.c
    alarm.c
    atoi.c
    atol.c
    bcopy.c
    brk.c
    brk2.c
    call.c
    chdir.c
    chmod.c
    chown.c
    chroot.c
    cleanup.c
    close.c
    creat.c
    crypt.c
    ctype.c
    doprintf.c
    dup.c
    dup2.c
    exec.c
    exit.c
    fclose.c
    fflush.c
    fgets.c
    fopen.c
    fork.c
    fprintf.c
    fputs.c
    fread.c
    freopen.c
    fseek.c
    fstat.c
    ftell.c
    fwrite.c
    getc.c
    getegid.c
    getenv.c
    geteuid.c
    getgid.c
    getgrent.c
    getpass.c
    getpid.c
    getpwent.c
    gets.c
    getuid.c
    index.c
    ioctl.c
    isatty.c
    itoa.c
    kill.c
    link.c
    lseek.c
    malloc.c
    message.c
    mknod.c
    mktemp.c
    mount.c
    open.c
    pause.c
    perror.c
    pipe.c
    printdat.c
    printk.c
    prints.c
    putc.c
    rand.c
    read.c
    regexp.c
    regsub.c
    rindex.c
    scanf.c
    setbuf.c
    setgid.c
    setuid.c
    signal.c
    sleep.c
    sprintf.c
    stat.c
    stb.c
    stderr.c
    stime.c
    strcat.c
    strcmp.c
    strcpy.c
    strlen.c
    strncat.c
    strncmp.c
    strncpy.c
    sync.c
    syslib.c
    time.c
    times.c
    umask.c
    umount.c
    ungetc.c
    unlink.c
    utime.c
    wait.c
    write.c
    sendrec.s
    getutil.s
    end.s
#    brksize.s
#    catchsig.s
#    crtso.s
#    csv.s
#    head.s
#    setjmp.s
)

target_compile_options(${PROJECT_NAME} PRIVATE -Di8088 -m32 -fno-builtin -nostdlib -nostdinc -fno-stack-protector)
target_include_directories(${PROJECT_NAME} PRIVATE ../h)
target_include_directories(${PROJECT_NAME} PRIVATE ../include)

