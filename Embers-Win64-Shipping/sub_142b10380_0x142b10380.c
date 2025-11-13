// 函数: sub_142b10380
// 地址: 0x142b10380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    arg3 = zx.d(*arg2)
    arg2 = &arg2[1]

int32_t i = arg3 + 1

while (i s> 5)
    uint32_t rax_1 = zx.d(*arg2)
    uint32_t rcx = zx.d(arg2[1])
    arg2 = &arg2[2]
    
    if (arg4 s>= rax_1)
        i -= i s>> 1
        
        if (rcx u>= 0xfc00)
            arg2 = &arg2[1]
            
            if (rcx == 0xffff)
                arg2 = &arg2[2]
    else
        i s>>= 1
        
        if (rcx u< 0xfc00)
            arg2 = &arg2[sx.q(rcx)]
        else if (rcx != 0xffff)
            arg2 = &arg2[1 + sx.q((rcx + 0x400) << 0x10 | zx.d(*arg2))]
        else
            arg2 = &arg2[2 + sx.q(zx.d(*arg2) << 0x10 | zx.d(arg2[1]))]

uint32_t rcx_6

while (true)
    rcx_6 = zx.d(arg2[1])
    
    if (arg4 == zx.d(*arg2))
        break
    
    i -= 1
    int32_t rcx_7 = rcx_6 & 0x7fff
    arg2 = &arg2[2]
    
    if (rcx_7 u>= 0x4000)
        arg2 = &arg2[2]
        
        if (rcx_7 u< 0x7fff)
            arg2 = &arg2[1]
    
    if (i s<= 1)
        if (arg4 != zx.d(*arg2))
            *(arg1 + 0x10) = 0
            return 0
        
        *(arg1 + 0x10) = &arg2[1]
        uint32_t rcx_8 = zx.d(arg2[1])
        
        if (rcx_8 u< 0x40)
            return 1
        
        return zx.q(3 - (rcx_8 u>> 0xf))

if (test_bit(rcx_6, 0xf))
    *(arg1 + 0x10) = &arg2[1]
    return 2

void* rdx_3 = &arg2[2]

if (rcx_6 u>= 0x4000)
    if (rcx_6 u>= 0x7fff)
        rcx_6 = zx.d(*rdx_3) << 0x10 | zx.d(*(rdx_3 + 2))
        rdx_3 += 4
    else
        rcx_6 = (rcx_6 - 0x4000) << 0x10 | zx.d(*rdx_3)
        rdx_3 += 2

int64_t rax_18 = sx.q(rcx_6)
uint32_t rcx_14 = zx.d(*(rdx_3 + (rax_18 << 1)))
void* rdx_4 = rdx_3 + (rax_18 << 1)

if (rcx_14 u< 0x40)
    *(arg1 + 0x10) = rdx_4
    return 1

*(arg1 + 0x10) = rdx_4
return zx.q(3 - (rcx_14 u>> 0xf))
