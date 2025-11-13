// 函数: sub_142b3fd70
// 地址: 0x142b3fd70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi
rdi.b = arg3 u> 0xffff
int32_t rcx
int32_t rcx_1

if (arg2 == 0)
    rcx = *(arg1 + 0x80)
    rcx_1 = rcx - (rdi + 1)

if (arg2 != 0 || rcx - (rdi + 1) s< 0)
    int32_t rcx_2 = *(arg1 + 0x84)
    int32_t rdx
    int32_t r8
    
    if (arg2 == rcx_2)
        if (*arg1 == 0)
            rdx = 0x28
        else
            rdx = *(arg1 + 0x10)
        
        r8 = *(arg1 + 0x80)
    
    if (arg2 != rcx_2 || rcx_2 + r8 + rdi + 1 s>= rdx)
        rcx_1 = sub_142b404c0(arg1, arg2, rdi + 1, arg5)
    else
        int32_t rcx_3 = rcx_2 + rdi + 1
        *(arg1 + 0x84) = rcx_3
        rcx_1 = rcx_3 - (rdi + 1) + r8
else
    *(arg1 + 0x84) += rdi + 1
    *(arg1 + 0x80) = rcx_1

if (*arg5 s<= 0)
    if (rdi != 0)
        void* rdx_3 = &arg1[8]
        void* r8_2
        
        if (*arg1 == 0)
            r8_2 = rdx_3
        else
            r8_2 = *rdx_3
        
        char* r9_1 = sx.q(rcx_1)
        *(r8_2 + (r9_1 << 1)) = (arg3 s>> 0xa).w - 0x2840
        
        if (*arg1 != 0)
            rdx_3 = *rdx_3
        
        char* r8_3 = sx.q(rcx_1 + 1)
        int32_t rsi
        rsi.w = arg3.w & 0x3ff
        rsi.w |= 0xdc00
        void* rax_8 = &arg1[0x58]
        *(rdx_3 + (r8_3 << 1)) = rsi.w
        void* rcx_6
        
        if (*arg1 == 0)
            rcx_6 = rax_8
        else
            rcx_6 = *rax_8
        
        *(r8_3 + rcx_6) = arg4
        
        if (*arg1 != 0)
            rax_8 = *rax_8
        
        *(r9_1 + rax_8) = arg4
    else
        void* rax_4
        
        if (*arg1 == 0)
            rax_4 = &arg1[8]
        else
            rax_4 = *(arg1 + 8)
        
        char* rdx_2 = sx.q(rcx_1)
        *(rax_4 + (rdx_2 << 1)) = arg3.w
        
        if (*arg1 == 0)
            *(rdx_2 + &arg1[0x58]) = arg4
        else
            rdx_2[*(arg1 + 0x58)] = arg4

return zx.q(rdi + 1)
