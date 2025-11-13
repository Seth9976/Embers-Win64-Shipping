// 函数: sub_142bd2fc0
// 地址: 0x142bd2fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *arg4
int32_t r8 = arg4[1]
int32_t* r12 = arg5
int32_t rbx_3 = (arg3[1] - arg2[1] + 0x10) s>> 5
int32_t rdx_3 = (rdx - *arg2 + 0x10) s>> 5
int32_t r8_3 = (r8 - arg2[1] + 0x10) s>> 5
int32_t r13_3 = (r12[1] - r8 + 0x10) s>> 5
int32_t rdi_3 = (*r12 - rdx + 0x10) s>> 5
arg5.d = sub_142b93e80((*arg3 - *arg2 + 0x10) s>> 5, r13_3)
int32_t result = sub_142b93e80(rbx_3, rdi_3)
int32_t temp0 = arg5.d
arg5.d -= result

if (temp0 == result)
    result.b = 0
else
    uint32_t rax_3 = sub_142b91790(sub_142b93e80(rdx_3, r13_3) - sub_142b93e80(r8_3, rdi_3), arg5.d)
    *arg6 = sub_142b93e80(rax_3, *arg3 - *arg2) + *arg2
    arg6[1] = sub_142b93e80(rax_3, arg3[1] - arg2[1]) + arg2[1]
    int32_t rcx_10 = *arg2
    
    if (rcx_10 == *arg3)
        int32_t rdx_13 = *arg6
        int32_t rax_9 = rdx_13 - rcx_10
        
        if (rdx_13 - rcx_10 s< 0)
            rax_9 = rcx_10 - rdx_13
        
        if (rax_9 s< *(arg1 + 0x4914))
            *arg6 = rcx_10
    
    int32_t rdx_14 = arg2[1]
    
    if (rdx_14 == arg3[1])
        int32_t rax_11 = arg6[1]
        int32_t rcx_12 = rax_11 - rdx_14
        
        if (rax_11 - rdx_14 s< 0)
            rcx_12 = rdx_14 - rax_11
        
        if (rcx_12 s< *(arg1 + 0x4914))
            rax_11 = rdx_14
        
        arg6[1] = rax_11
    
    int32_t rcx_14 = *arg4
    
    if (rcx_14 == *r12)
        int32_t rdx_15 = *arg6
        int32_t rax_13 = rdx_15 - rcx_14
        
        if (rdx_15 - rcx_14 s< 0)
            rax_13 = rcx_14 - rdx_15
        
        if (rax_13 s< *(arg1 + 0x4914))
            *arg6 = rcx_14
    
    int32_t rdx_16 = arg4[1]
    
    if (rdx_16 == r12[1])
        int32_t rax_15 = arg6[1]
        int32_t rcx_16 = rax_15 - rdx_16
        
        if (rax_15 - rdx_16 s< 0)
            rcx_16 = rdx_16 - rax_15
        
        if (rcx_16 s< *(arg1 + 0x4914))
            rax_15 = rdx_16
        
        arg6[1] = rax_15
    
    int32_t temp4_1
    int32_t temp5_1
    temp4_1:temp5_1 = sx.q(*arg3 + *arg4)
    int32_t rdx_18 = *arg6
    int32_t rax_20 = (temp5_1 - temp4_1) s>> 1
    
    if (rdx_18 - rax_20 s>= 0)
        result = rdx_18 - rax_20
    else
        result = rax_20 - rdx_18
    
    int32_t r8_4 = *(arg1 + 0x4910)
    
    if (result s> r8_4)
        result.b = 0
    else
        int32_t temp8_1
        int32_t temp9_1
        temp8_1:temp9_1 = sx.q(arg4[1] + arg3[1])
        int32_t rdx_20 = arg6[1]
        int32_t rax_25 = (temp9_1 - temp8_1) s>> 1
        
        if (rdx_20 - rax_25 s>= 0)
            result = rdx_20 - rax_25
        else
            result = rax_25 - rdx_20
        
        if (result s> r8_4)
            result.b = 0
        else
            result.b = 1

return result
