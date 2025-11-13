// 函数: sub_1417fea00
// 地址: 0x1417fea00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142fe1560
void* rcx = arg1[0xb]

if (rcx != 0)
    int512_t entry_zmm2
    sub_142c521c0(rcx, 0x276f, 0, entry_zmm2)
    sub_142c520c0(arg1[0xb])
    arg1[0xb] = 0

int64_t* rcx_2 = arg1[0xc]

if (rcx_2 != 0)
    sub_142c524d0(rcx_2)
    arg1[0xc] = 0

int32_t i_1 = arg1[0x8a].d
void* rdi = &arg1[0x26]

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_3 = *rdi
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        rdi += 0x10
        i = i_1
        i_1 -= 1
    while (i != 1)

arg1[0x21].d = 0
int64_t rcx_4 = arg1[0x20]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

sub_140681eb0(&arg1[0x18])
int64_t* rcx_6 = arg1[0x16]

if (rcx_6 != 0)
    (**rcx_6)(rcx_6, 1)

int64_t* rdi_1 = arg1[0x15]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t rsi = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (rsi == 1)
            (*(*rdi_1 + 8))(rdi_1, zx.q(rsi))

int64_t rcx_9 = arg1[0xf]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t rcx_10 = arg1[0xd]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

sub_140745b20(&arg1[9])
sub_140745b20(&arg1[7])
sub_140745b20(&arg1[5])
uint64_t result = sub_140745b20(&arg1[3])
int64_t* rcx_15 = arg1[2]

if (rcx_15 != 0)
    int32_t temp2_1 = *(rcx_15 + 0xc)
    *(rcx_15 + 0xc) -= 1
    
    if (temp2_1 == 1)
        return (*(*rcx_15 + 8))(rcx_15, 1)

return result
