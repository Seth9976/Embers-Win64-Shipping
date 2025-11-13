// 函数: sub_141a53150
// 地址: 0x141a53150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_c = 0
int32_t i_4 = -1
int32_t arg_8 = 0xffffffff

if (arg3 != 0)
    int64_t arg_18
    sub_140d3a3a0(&arg_18, arg3)
    arg_8.q = arg_18

int32_t* var_60 = &arg_8
int32_t i_2 = 0xffffffff
int32_t var_54 = 0xffffffff
sub_141a40900(arg1 + 8, *(arg1 + 0x10) - *(arg1 + 0x3c), 0)

if (*(arg1 + 0x50) != 0)
    void* r8 = arg1 + 0x40
    int32_t r14_1 = arg_8
    void* rdx_3 = *(r8 + 8)
    int32_t r10_3 = (r14_1 - arg_c) ^ arg_c u>> 0xd
    int32_t r9_3 = (0x9e3779b9 - arg_c - r10_3) ^ r10_3 << 8
    int32_t rcx_5 = (arg_c - r9_3 - r10_3) ^ r9_3 u>> 0xd
    int32_t r10_6 = (r10_3 - r9_3 - rcx_5) ^ rcx_5 u>> 0xc
    int32_t r9_6 = (r9_3 - r10_6 - rcx_5) ^ r10_6 << 0x10
    int32_t rcx_8 = (rcx_5 - r9_6 - r10_6) ^ r9_6 u>> 5
    int32_t r10_9 = (r10_6 - r9_6 - rcx_8) ^ rcx_8 u>> 3
    int32_t r9_9 = (r9_6 - r10_9 - rcx_8) ^ r10_9 << 0xa
    
    if (rdx_3 != 0)
        r8 = rdx_3
    
    i_4 = *(r8
        + (((sx.q(rcx_8 - r9_9 - r10_9) ^ zx.q(r9_9) u>> 0xf) & (sx.q(*(arg1 + 0x50)) - 1)) << 2))
    int32_t i_6 = i_4
    i_2 = i_4
    
    if (i_4 != 0xffffffff)
        int64_t rdx_4 = *(arg1 + 8)
        i_2 = i_4
        int32_t i
        
        do
            int64_t rcx_15 = sx.q(i_4) * 0x60
            i = *(rcx_15 + rdx_4 + 0x50)
            int32_t i_3 = i
            
            if (*(rcx_15 + rdx_4) == r14_1 && *(rcx_15 + rdx_4 + 4) == arg_c)
                break
            
            i_2 = i
            i_4 = i
        while (i != 0xffffffff)

uint64_t var_40 = i_2.q
uint128_t zmm0 = (arg1 + 8).o

if (i_4 == 0xffffffff)
label_141a53361:
    sub_141f3cf60(arg3, arg2)
else
    int32_t* r14_2 = zmm0:8.q
    int64_t* r15_1 = zmm0.q
    int32_t i_1 = var_40:4.d
    int32_t i_5 = var_40.d
    
    while (true)
        int64_t rax_24 = *r15_1
        int64_t rcx_17 = sx.q(i_5) * 0x60
        int32_t rcx_18
        rcx_18.b = *(rcx_17 + rax_24 + 0x44) == 0
        
        if ((rcx_18.b & sub_140b5b8a0(*(rcx_17 + rax_24 + 0x40), 0)) != 0)
            int64_t rax_30 = *r15_1
            int64_t rcx_23 = sx.q(i_5) * 0x60
            *arg2 = *(rcx_23 + rax_30 + 0x10)
            arg2[1] = *(rcx_23 + rax_30 + 0x20)
            arg2[2] = *(rcx_23 + rax_30 + 0x30)
            break
        
        i_5 = i_1
        
        if (i_1 == 0xffffffff)
            goto label_141a53361
        
        int64_t rdx_5 = *r15_1
        
        do
            int64_t rcx_20 = sx.q(i_5) * 0x60
            i_1 = *(rcx_20 + rdx_5 + 0x50)
            
            if (*(rcx_20 + rdx_5) == *r14_2 && *(rcx_20 + rdx_5 + 4) == r14_2[1])
                break
            
            i_5 = i_1
        while (i_1 != 0xffffffff)
        
        if (i_5 == 0xffffffff)
            goto label_141a53361

return arg2
