// 函数: sub_142b0dd40
// 地址: 0x142b0dd40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rbx = arg3
char* rax = arg2

if (arg3 == 0)
    rbx = zx.d(*arg2)
    rax = &rax[1]

int32_t i = rbx + 1

while (i s> 5)
    if (arg4 s>= zx.d(*rax))
        i -= i s>> 1
        uint32_t rcx_4 = zx.d(rax[1])
        rax = &rax[2]
        
        if (rcx_4 u>= 0xc0)
            if (rcx_4 u< 0xf0)
                rax = &rax[1]
            else if (rcx_4 u>= 0xfe)
                rax = &rax[zx.q((rcx_4 & 1) + 3)]
            else
                rax = &rax[2]
    else
        i s>>= 1
        rax = sub_142b0df30(&rax[1])

void* rax_1
uint32_t rcx_8

while (true)
    rax_1 = &rax[1]
    rcx_8 = zx.d(*rax_1)
    
    if (arg4 == zx.d(*rax))
        break
    
    i -= 1
    rax = rax_1 + 1
    
    if (rcx_8 u>= 0xa2)
        if (rcx_8 u< 0xd8)
            rax = &rax[1]
        else if (rcx_8 u>= 0xfc)
            rax = &rax[zx.q((rcx_8 u>> 1 & 1) + 3)]
        else
            rax = &rax[2]
    
    if (i s<= 1)
        if (arg4 != zx.d(*rax))
            *(arg1 + 0x10) = 0
            return 0
        
        *(arg1 + 0x10) = &rax[1]
        uint32_t rax_3 = zx.d(rax[1])
        
        if (rax_3 u< 0x20)
            return 1
        
        return zx.q(3 - (rax_3 & 1))

int32_t rcx_14

if ((rcx_8.b & 1) == 0)
    void* rax_8 = rax_1 + 1
    uint32_t rcx_15 = rcx_8 u>> 1
    int32_t rdx
    
    if (rcx_15 u< 0x51)
        rdx = rcx_15 - 0x10
    else if (rcx_15 u>= 0x6c)
        uint32_t rdx_3 = zx.d(*rax_8)
        
        if (rcx_15 u>= 0x7e)
            uint32_t rcx_20 = zx.d(*(rax_8 + 1))
            
            if (rcx_15 != 0x7e)
                rdx = ((rdx_3 << 8 | rcx_20) << 8 | zx.d(*(rax_8 + 2))) << 8 | zx.d(*(rax_8 + 3))
                rax_8 += 4
            else
                rdx = (rdx_3 << 8 | rcx_20) << 8 | zx.d(*(rax_8 + 2))
                rax_8 += 3
        else
            rdx = rdx_3 << 8 | (rcx_15 - 0x6c) << 0x10 | zx.d(*(rax_8 + 1))
            rax_8 += 2
    else
        rdx = (rcx_15 - 0x51) << 8 | zx.d(*rax_8)
        rax_8 += 1
    
    rax_1 = rax_8 + sx.q(rdx)
    uint32_t rdx_14 = zx.d(*rax_1)
    
    if (rdx_14 u< 0x20)
        rcx_14 = 1
    else
        rcx_14 = 3 - (rdx_14 & 1)
else
    rcx_14 = 2

*(arg1 + 0x10) = rax_1
return zx.q(rcx_14)
