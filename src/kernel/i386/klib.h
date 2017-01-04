void phys_copy(phys_bytes, phys_bytes, phys_bytes);
void cp_mess(int, phys_clicks, message*, phys_clicks, message*);
void port_out(short, short);
void portw_out(short, short);
void port_in(short, int *);
void portw_in(short, int *);
void lock(void);
void unlock(void);
void restore(void);
void build_sig(int*, struct proc *, int);
void csv(void);
void cret(void);
int get_chrome(void);
void vid_copy(int *, unsigned, int, int);
char get_byte(short, short);
void reboot(void);
void wreboot(void);

