// 函数: sub_142b77300
// 地址: 0x142b77300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int32_t rbx_1 = arg3
int16_t r14_1 = -1
*(arg2 + 4) = arg3

if (arg3 s>= 0x10)
    int16_t rdx = *(arg1 + 0x18)
    rbx_1 = 0xf
    int32_t rax_2
    
    if (rdx s< 0)
        rax_2 = *(arg1 + 0x1c)
    else
        rax_2 = sx.d(rdx) s>> 5
    
    int16_t r8_1
    
    if (arg3 - 0xf u>= rax_2)
        r8_1 = -1
    else
        void* rdx_1 = arg1 + 0x1a
        
        if ((rdx.b & 2) == 0)
            rdx_1 = *(arg1 + 0x28)
        
        r8_1 = *(rdx_1 + (sx.q(arg3 - 0xf) << 1))
    
    if ((zx.d(r8_1) & 0xfffffc00) == 0xdc00)
        rbx_1 = 0xe

sub_142a49120(arg1 + 0x10, arg3 - rbx_1, rbx_1, arg2 + 8, 0)
*(arg2 + (sx.q(rbx_1) << 1) + 8) = 0
int16_t rax_7 = *(arg1 + 0x18)
int32_t rbx_3

if (rax_7 s< 0)
    rbx_3 = *(arg1 + 0x1c)
else
    rbx_3 = sx.d(rax_7) s>> 5

int32_t rbx_4 = rbx_3 - arg3

if (rbx_4 s>= 0x10)
    int16_t rcx_1 = *(arg1 + 0x18)
    rbx_4 = 0xf
    int32_t rax_9
    
    if (rcx_1 s< 0)
        rax_9 = *(arg1 + 0x1c)
    else
        rax_9 = sx.d(rcx_1) s>> 5
    
    if (arg3 + 0xe u< rax_9)
        void* rcx_2 = arg1 + 0x1a
        
        if ((rcx_1.b & 2) == 0)
            rcx_2 = *(arg1 + 0x28)
        
        r14_1 = *(rcx_2 + (sx.q(arg3 + 0xe) << 1))
    
    if ((zx.d(r14_1) & 0xfffffc00) == 0xd800)
        rbx_4 = 0xe

sub_142a49120(arg1 + 0x10, arg3, rbx_4, arg2 + 0x28, 0)
*(arg2 + (sx.q(rbx_4) << 1) + 0x28) = 0
