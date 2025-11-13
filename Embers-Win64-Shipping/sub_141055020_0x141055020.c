// 函数: sub_141055020
// 地址: 0x141055020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg3
void*** rax = j_sub_140a82f30(0x200)
void*** rdi = rax

if (rax == 0)
    rdi = nullptr
else
    int128_t var_24_1 = zx.o(0)
    void* r9_1 = **(arg1 + 0x20)
    int32_t temp0_1 = _mm_bsrli_si128(zx.o(0), 0xc)
    int64_t rdx = *(r9_1 + 0x9d8)
    *rdi = &data_142d3ff08
    rdi[1].d = 0
    *(rdi + 0xc) = 0
    rdi[2].w = 0x100
    rdi[3] = 0
    *(rdi + 0x34) = 0
    *(rdi + 0x3c) = 0
    *(rdi + 0x20) = 1.o
    rdi[6].d = temp0_1
    
    if (rbx == 0)
        rbx = &rdi[0xa]
    
    rdi[9] = rbx
    rdi[0xa] = -0x3810000020000000
    rdi[0xb] = 0
    *rdi = &data_142ef2b00
    rdi[0xc] = 0
    sub_14103fda0(&rdi[0xd], rdx)
    rdi[0x2a] = 0
    *rdi = &data_142f00a90
    rdi[0xd] = &data_142f00ae8

*arg2 = rdi

if (rdi != 0)
    rdi[1].d += 1

return arg2
