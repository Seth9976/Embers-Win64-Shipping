// 函数: sub_142b3c5d0
// 地址: 0x142b3c5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::number::impl::Modifier::icu_64::number::impl::SimpleModifier::VTable** arg_8 = arg1
int64_t var_18 = -2
*arg1 = &icu_64::number::impl::SimpleModifier::`vftable'{for `icu_64::number::impl::Modifier'}
sub_142a479b0(&arg1[1], arg2)
arg1[9].b = arg3
*(arg1 + 0x49) = arg4
*(arg1 + 0x4c) = 0
arg1[0xa].d = 0xffffffff
*(arg1 + 0x54) = 0
*(arg1 + 0x58) = *arg5
int16_t rax_1 = arg1[2].w
int32_t rax_3

if (rax_1 s< 0)
    rax_3 = *(arg1 + 0x14)
else
    rax_3 = sx.d(rax_1) s>> 5

char rcx_1 = (arg1[2].w).b
int16_t* rcx_2

if ((rcx_1 & 0x11) == 0)
    rcx_2 = arg1 + 0x12
    
    if ((rcx_1 & 2) == 0)
        rcx_2 = arg1[4]
else
    rcx_2 = nullptr

if (rax_3 == 0 || zx.d(*rcx_2) == 0)
    int16_t rcx_4 = arg1[2].w
    int32_t rax_22
    
    if (rcx_4 s< 0)
        rax_22 = *(arg1 + 0x14)
    else
        rax_22 = sx.d(rcx_4) s>> 5
    
    int16_t rcx_5
    
    if (rax_22 u<= 1)
        rcx_5 = -1
    else
        void* rsi_2
        
        if ((rcx_4.b & 2) == 0)
            rsi_2 = arg1[4]
        else
            rsi_2 = arg1 + 0x12
        
        rcx_5 = *(rsi_2 + 2)
    
    *(arg1 + 0x4c) = zx.d(rcx_5) - 0x100
    arg1[0xa].d = 0xffffffff
    *(arg1 + 0x54) = 0
else
    int16_t rdx = arg1[2].w
    int32_t rax_6
    
    if (rdx s< 0)
        rax_6 = *(arg1 + 0x14)
    else
        rax_6 = sx.d(rdx) s>> 5
    
    int16_t rcx_3 = -1
    void* rax_7
    
    if (rax_6 u> 1)
        rax_7 = arg1 + 0x12
        
        if ((rdx.b & 2) == 0)
            rax_7 = arg1[4]
    
    if (rax_6 u<= 1 || *(rax_7 + 2) != 0)
        int16_t rdx_1 = arg1[2].w
        int32_t rax_9
        
        if (rdx_1 s< 0)
            rax_9 = *(arg1 + 0x14)
        else
            rax_9 = sx.d(rdx_1) s>> 5
        
        int16_t rdx_2
        
        if (rax_9 u<= 1)
            rdx_2 = -1
        else
            void* rax_10 = arg1 + 0x12
            
            if ((rdx_1.b & 2) == 0)
                rax_10 = arg1[4]
            
            rdx_2 = *(rax_10 + 2)
        
        *(arg1 + 0x4c) = zx.d(rdx_2) - 0x100
        arg1[0xa].d = zx.d(rdx_2) - 0xfd
    else
        *(arg1 + 0x4c) = 0
        arg1[0xa].d = 2
    
    int16_t rax_14 = arg1[2].w
    int32_t rdx_4
    
    if (rax_14 s< 0)
        rdx_4 = *(arg1 + 0x14)
    else
        rdx_4 = sx.d(rax_14) s>> 5
    
    if (*(arg1 + 0x4c) + 3 s>= rdx_4)
        *(arg1 + 0x54) = 0
    else
        int64_t r8 = sx.q(arg1[0xa].d)
        int16_t rdx_5 = arg1[2].w
        int32_t rax_18
        
        if (rdx_5 s< 0)
            rax_18 = *(arg1 + 0x14)
        else
            rax_18 = sx.d(rdx_5) s>> 5
        
        if (r8.d u< rax_18)
            void* rsi_1
            
            if ((rdx_5.b & 2) == 0)
                rsi_1 = arg1[4]
            else
                rsi_1 = arg1 + 0x12
            
            rcx_3 = *(rsi_1 + (r8 << 1))
        
        *(arg1 + 0x54) = zx.d(rcx_3) - 0x100

return arg1
