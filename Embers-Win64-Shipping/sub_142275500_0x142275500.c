// 函数: sub_142275500
// 地址: 0x142275500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t arg_10
sub_140d3a3a0(&arg_10, arg2)
sub_142276470(arg1 + 0x4c0, &arg_10)
int32_t rdi_2 = *(arg1 + 0x4c8)
int32_t rdi_3 = rdi_2 - 1

if (rdi_2 - 1 s< 0)
label_1422755bd:
    sub_140d3a3a0(&arg_10, arg2)
    int64_t rdi_4 = sx.q(*(arg1 + 0x4c8))
    int32_t rax_9 = (rdi_4 + 1).d
    *(arg1 + 0x4c8) = rax_9
    
    if (rax_9 s> *(arg1 + 0x4cc))
        sub_1405a4d70(arg1 + 0x4c0)
    
    int64_t rdx_4 = *(arg1 + 0x4c0)
    memmove(rdx_4 + 8, rdx_4, (rdi_4 << 3).d)
    **(arg1 + 0x4c0) = arg_10
    return 

int32_t rsi_1 = rdi_3 + 1

while (true)
    int64_t r14_1 = sx.q(rdi_3)
    void* rax_2 = sub_140d3c6e0(*(arg1 + 0x4c0) + (r14_1 << 3))
    
    if (rax_2 == 0)
        int32_t rcx_4 = *(arg1 + 0x4c8)
        int32_t rax_4 = rcx_4 - rdi_3
        
        if (rax_4 != 1)
            int64_t rcx_5 = *(arg1 + 0x4c0)
            memmove(rcx_5 + (r14_1 << 3), rcx_5 + (sx.q(rsi_1) << 3), (rax_4 - 1) << 3)
            rcx_4 = *(arg1 + 0x4c8)
        
        *(arg1 + 0x4c8) = rcx_4 - 1
        sub_1405c53d0(arg1 + 0x4c0)
    else if (*(rax_2 + 0x130) s<= *(arg2 + 0x130))
        sub_140d3a3a0(&arg_10, arg2)
        int32_t rdi_5 = *(arg1 + 0x4c8)
        *(arg1 + 0x4c8) = rdi_5 + 1
        
        if (rdi_5 + 1 s> *(arg1 + 0x4cc))
            sub_1405a4d70(arg1 + 0x4c0)
        
        int64_t rdx_9 = *(arg1 + 0x4c0) + 8 + (r14_1 << 3)
        memmove(rdx_9 + 8, rdx_9, (rdi_5 - (rdi_3 + 1)) << 3)
        *(*(arg1 + 0x4c0) + (r14_1 << 3) + 8) = arg_10
        break
    
    rsi_1 -= 1
    int32_t temp2_1 = rdi_3
    rdi_3 -= 1
    
    if (temp2_1 - 1 s< 0)
        goto label_1422755bd
