// 函数: sub_142bf5c70
// 地址: 0x142bf5c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = *(arg1 + 0x70)
int32_t r10 = -1

if (arg2 u< arg3)
    uint64_t i_3 = zx.q(arg3 - arg2)
    int32_t* rcx_2 = rdi + ((zx.q(arg2) * 5 + 2) << 2)
    uint64_t i
    
    do
        if (r10 u>= *rcx_2)
            r10 = *rcx_2
        
        rcx_2 = &rcx_2[5]
        i = i_3
        i_3 -= 1
    while (i != 1)

if (arg2 u>= arg3)
    return 

uint64_t rax = rdi + ((zx.q(arg2) * 5 + 1) << 2)
uint64_t i_2 = zx.q(arg3 - arg2)
uint64_t i_1

do
    if (r10 != *(rax + 4))
        *(arg1 + 0x28) |= 0x10
        *rax |= 1
    
    rax += 0x14
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
