// 函数: sub_142aa6160
// 地址: 0x142aa6160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rdx = arg2 u>> 0x10
void* rcx = *(arg1 + 0x70)

if (rdx u< zx.d(*(rcx + 2)) || zx.d(*(rcx + (sx.q(*(arg1 + 0x78) - 1) << 1))) u<= rdx)
    return 0xffffffff

void* rcx_1 = rcx + 4
int32_t r9 = 1

if (rdx u>= zx.d(*(rcx + 4)))
    uint32_t rax_5
    
    do
        rax_5 = zx.d(*(rcx_1 + 2))
        rcx_1 += 2
        r9 += 1
    while (rdx u>= rax_5)

int32_t r10 = 0
int32_t r8_2 = 0

if (*(arg1 + 0x64) s> 0)
    int64_t i = 0
    int16_t* rcx_2 = *(arg1 + 0x68)
    
    do
        if (zx.d(*rcx_2) == r9)
            return zx.q(r8_2)
        
        r8_2 += 1
        i += 1
        rcx_2 = &rcx_2[1]
    while (i s< sx.q(*(arg1 + 0x64)))

int64_t i_1 = 0
int16_t* r8_3 = *(arg1 + 0x68) + (sx.q(*(arg1 + 0x64)) << 1)

do
    if (zx.d(*r8_3) == r9)
        return zx.q(r10 + 0x1000)
    
    r10 += 1
    i_1 += 1
    r8_3 = &r8_3[1]
while (i_1 s< 8)

return 0xffffffff
