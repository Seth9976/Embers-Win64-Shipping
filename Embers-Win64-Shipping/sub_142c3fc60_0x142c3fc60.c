// 函数: sub_142c3fc60
// 地址: 0x142c3fc60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = *(arg1 + 0x60)
uint64_t rsi = 0
int32_t r9 = 0
int64_t rbx = 0x8a
int32_t rcx_2

if (i == 0)
    if (0 != i)
        return 1
    
    do
        int16_t rdx_1 = *((sx.q(rbx.d) << 1) + 0x1436a4a10)
        
        if (rdx_1 s<= 0)
            return 1
        
        rcx_2 = sx.d(rdx_1) - 1
    label_142c3fcd1:
        int64_t rcx_3 = sx.q(rcx_2)
        char rdx_2 = *(rcx_3 + 0x1436a4520)
        rbx = sx.q(*((rcx_3 << 1) + 0x1436a41d0))
        
        if (rdx_2 != 0 && sx.d(rdx_2) - 1 u<= 0x17)
            jump(&__dos_header.e_magic[zx.q(*((sx.q(sx.d(rdx_2) - 1) << 2) + 0x142c40308))])
        
        int32_t rcx_7 = 0
        
        if (*(rbx + 0x1436a46d0) != 9)
            rcx_7 = r9
        
        rsi = zx.q(rsi.d + 1)
        r9 = rcx_7
    while (rsi.d == i)

int64_t rdx_6 = sx.q(rbx.d)
int64_t rbx_1 = sx.q((rbx * 2).d)
int32_t r8_1 = sx.d(*(rdx_6 + 0x1436a1d40))

if (*(rdx_6 + 0x1436a4870) == 0xa)
    r9 = rsi.d

if (r8_1 s> 0)
    char r10_1 = *(rbx_1 + &data_1436a1a10)
    char rcx_10 = *(*(arg1 + 0x70) + rsi * 0x14 + 0x12)
    
    if (r10_1 u<= rcx_10 && rcx_10 u<= *(rbx_1 + 0x1436a1a11))
        r8_1 = zx.d(rcx_10) - zx.d(r10_1)

rcx_2 = sx.d(*(&data_1436a2210 + (sx.q(*((rdx_6 << 1) + 0x1436a1ee0)) << 1) + (sx.q(r8_1) << 1)))
goto label_142c3fcd1
