// 函数: sub_142b27220
// 地址: 0x142b27220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_2 = *(arg1 + 0x18)
int32_t r8_1 = rax_2 << 8

if ((rax_2.b & 0xc) != 0)
    r8_1 ^= *(arg1 + 0x1c)

int32_t r9 = *(arg1 + 0x48)
int32_t r8_2 = r8_1 ^ r9
int32_t rcx = 0

if (r9 s> 0)
    int32_t* rax = *(arg1 + 0x40)
    
    do
        int32_t rdx_1 = *rax
        rax = &rax[1]
        int32_t rdx_2 = rdx_1 << rcx.b
        rcx += 1
        r8_2 ^= rdx_2
    while (rcx s< r9)

return zx.q(r8_2)
