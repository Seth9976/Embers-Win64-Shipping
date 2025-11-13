// 函数: sub_142a54c80
// 地址: 0x142a54c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx_1 = sub_142a54250(arg1, 0) & 0xc000ff

if (rdx_1 u< 0x400000)
    int32_t rax
    rax.b = arg2 == rdx_1
    return rax

void* rax_1 = &data_143635440 + (zx.q(rdx_1.b) << 1)

if (rdx_1 u>= 0xc00000)
    rax_1 = &data_143635440 + (zx.q(*(rax_1 + 2)) << 1)

if (arg2 s>= 0xbd)
    rax_1.b = 0
    return rax_1

if (arg2 s> zx.d(*rax_1))
    uint32_t rcx_3
    
    do
        rcx_3 = zx.d(*(rax_1 + 2))
        rax_1 += 2
    while (arg2 s> rcx_3)

rax_1.b = arg2 == (zx.d(*rax_1) & 0x7fff)
return rax_1
