// 函数: sub_14176be70
// 地址: 0x14176be70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result = arg2
float (* r10)[0x4] = arg1
*arg2 = 0

if (*(arg4 + 0x22) != 0)
    int64_t r8
    
    if (*(arg5 + 0x68) != 0)
        if (*(arg5 + 0x10) == 2)
            r8.b = 0
        else
            r8.b = 1
    else if (*(arg5 + 0x6b) == 0 || *(arg5 + 0x10) == 2)
        r8.b = 0
    else
        r8.b = 1
    
    if (*(arg5 + 0x69) != 0)
        if (*(arg5 + 0x14) == 2)
            arg2.b = 0
        else
            arg2.b = 1
    else if (*(arg5 + 0x6c) == 0 || *(arg5 + 0x14) == 2)
        arg2.b = 0
    else
        arg2.b = 1
    
    if (*(arg5 + 0x6a) != 0)
        if (*(arg5 + 0x18) == 2)
            arg1.b = 0
        else
            arg1.b = 1
    else if (*(arg5 + 0x6d) == 0 || *(arg5 + 0x18) == 2)
        arg1.b = 0
    else
        arg1.b = 1
    
    void arg_10
    
    if (r8.b == 0)
    label_14176bf0c:
        
        if (arg2.b != 0 && arg1.b != 0)
            int32_t* rax_5 = sub_141766930(r10, &arg_10, r8, 0, arg4, arg5)
            int32_t rax_6 = rax_5[1]
            *result += *rax_5
            result[1] += rax_6
            return result
    else if (arg2.b != 0)
        if (arg1.b == 0)
            goto label_14176bf0c
        
        int64_t* rax_2 = sub_14176f6a0(r10, &arg_10, arg3, arg4, arg5)
        int32_t rax_3 = *(rax_2 + 4)
        *result += *rax_2
        result[1] += rax_3
        return result
    
    void* var_18_3
    void* var_10_2
    float (* rcx_4)[0x4]
    int32_t* rdx_3
    int32_t r9
    
    if (r8.b != 0)
        var_10_2 = arg5
        var_18_3 = arg4
        rcx_4 = r10
        
        if (arg1.b != 0)
            int32_t* rax_8 = sub_141766930(rcx_4, &arg_10, r8, 1, var_18_3, var_10_2)
            int32_t rax_9 = rax_8[1]
            *result += *rax_8
            result[1] += rax_9
            return result
        
        rdx_3 = &arg_10
        
        if (arg2.b == 0)
            r9 = 0
            goto label_14176bfd8
        
        int32_t* rax_11 = sub_141766930(rcx_4, rdx_3, r8, 2, var_18_3, var_10_2)
        int32_t rax_12 = rax_11[1]
        *result += *rax_11
        result[1] += rax_12
        return result
    
    if (arg2.b != 0)
        var_10_2 = arg5
        var_18_3 = arg4
        r9 = 1
    label_14176bfd0:
        rcx_4 = r10
        rdx_3 = &arg_10
    label_14176bfd8:
        int32_t* rax_14 = sub_141766650(rcx_4, rdx_3, r8, r9, var_18_3, var_10_2)
        *result += *rax_14
        result[1] += rax_14[1]
    else if (arg1.b != 0)
        var_10_2 = arg5
        var_18_3 = arg4
        r9 = 2
        goto label_14176bfd0

return result
