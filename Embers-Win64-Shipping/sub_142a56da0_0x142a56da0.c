// 函数: sub_142a56da0
// 地址: 0x142a56da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0 || *arg3 s> 0)
    return 

if (arg1 == 0)
    *arg3 = 1
    return 

int32_t rax = *(arg1 + 0xc) * 2

if (arg1[3].d != 0)
    rax |= 1

if (arg2 == rax)
    return 

uint32_t rcx_1 = arg2 u>> 1
int32_t rdx = arg2 & 1

if (rdx != 0)
    rax.b = rcx_1 s< 4
else
    rax.b = rcx_1 s< 0

if (rax == 0 && *(arg1 + 0x14) s>= rcx_1)
    uint32_t rax_2 = -1
    *(arg1 + 0xc) = rcx_1
    
    if (rcx_1 s<= 1)
        rax_2 = rcx_1
    
    arg1[2].d = rax_2
    
    if (rdx == 0)
        arg1[3].d = rdx
        return 
    
    int64_t r10 = *arg1
    int32_t arg_18 = rcx_1 - 1
    uint32_t rax_4 = zx.d(*(sx.q(rcx_1 - 1) + r10))
    
    if (rax_4.b s< 0)
        rax_4 = sub_142a9be90(r10, 0, &arg_18, rax_4, 0xfd)
    
    if (rax_4 s> 0xffff)
        arg1[3].d = rax_4
        return 
    
    *arg3 = 8
    return 

*arg3 = 8
