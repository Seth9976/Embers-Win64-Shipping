// 函数: sub_1417fd490
// 地址: 0x1417fd490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x45) == 0)
    void*** rax_6 = j_sub_140a82f30(0x458)
    void*** rdi_1
    
    if (rax_6 == 0)
        rdi_1 = nullptr
    else
        rdi_1 = sub_1417fdf60(rax_6)
    
    *arg2 = rdi_1
    void*** rax_8 = j_sub_140a82f30(0x18)
    
    if (rax_8 == 0)
        rax_8 = nullptr
    else
        rax_8[1].d = 1
        *rax_8 = &data_142fe2318
        *(rax_8 + 0xc) = 1
        rax_8[2] = rdi_1
    
    arg2[1] = rax_8
    sub_140918950(arg2, rdi_1)
    return arg2

void*** rax = j_sub_140a82f30(0xe8)
void*** rdi = rax

if (rax == 0)
    rdi = nullptr
else
    __builtin_memset(&rax[1], 0, 0x1c)
    void* rcx = &rdi[0x14]
    rax[5] = 0
    rax[6].d = 0
    rax[7] = 0
    rax[8].d = 0
    rax[9] = 0
    rax[0xa].d = 0
    *rdi = &data_142fe1cc0
    __builtin_memset(&rdi[0xb], 0, 0x34)
    rdi[0x12] = 0
    rdi[0x13] = 0
    *(rcx + 0x1c) = 0x80
    void* rax_1 = *(rcx + 0x10)
    
    if (rax_1 != 0)
        rcx = rax_1
    
    __builtin_memset(rcx, 0, 0x1c)
    rdi[0x18].d = 0xffffffff
    *(rdi + 0xc4) = 0
    rdi[0x1a] = 0
    rdi[0x1b].d = 0
    rdi[0x1c].d = 0

*arg2 = rdi
void*** rax_2 = j_sub_140a82f30(0x18)

if (rax_2 == 0)
    arg2[1] = 0
    sub_140918950(arg2, rdi)
    return arg2

rax_2[1].d = 1
*rax_2 = &data_142fe2318
*(rax_2 + 0xc) = 1
rax_2[2] = rdi
arg2[1] = rax_2
sub_140918950(arg2, rdi)
return arg2
