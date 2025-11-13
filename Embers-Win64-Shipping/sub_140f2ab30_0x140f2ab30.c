// 函数: sub_140f2ab30
// 地址: 0x140f2ab30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = sx.q(arg2)
void*** result_1 = j_sub_140a82f30(0x50)
void*** result = result_1

if (result_1 == 0)
    result = nullptr
else
    sub_140ddb700(result_1)
    __builtin_memset(&result[4], 0, 0x19)
    result[8] = 0
    result[9].d = 0
    *result = &data_142d8b0a8

if (r15.d s< 0 || r15.d s>= *(arg1 + 0x2d8))
    sub_140de6520(arg1 + 0x2c0, result)
else
    if (*(arg1 + 0x2e0) == 0)
        int32_t r13_1 = *(arg1 + 0x2d8)
        *(arg1 + 0x2d8) = r13_1 + 1
        
        if (r13_1 + 1 s> *(arg1 + 0x2dc))
            sub_140638870(arg1 + 0x2d0)
        
        int64_t rdx_1 = *(arg1 + 0x2d0) + (r15 << 3)
        memmove(rdx_1 + 8, rdx_1, (r13_1 - r15.d) << 3)
        *(*(arg1 + 0x2d0) + (r15 << 3)) = result
        int64_t rax_3 = *(arg1 + 0x2c8)
        
        if (rax_3 != 0 && result[1] != rax_3)
            result[1] = rax_3
            sub_140de7bf0(result)
    
    if (*(arg1 + 0x2b8) == 0)
    label_140f2ac50:
        
        if (*sub_140ebd5a0(arg1 + 0x2a8) s>= r15.d)
            int32_t* rax_6 = sub_140ebd5a0(arg1 + 0x2a8)
            char var_34 = 1
            int64_t var_30 = 0
            int32_t var_28 = 0
            int32_t rcx_8 = *rax_6 + 1
            *(arg1 + 0x2ac) = 1
            int32_t var_38 = rcx_8
            *(arg1 + 0x2a8) = rcx_8
            sub_1407473e0(arg1 + 0x2b0, &var_30)
            sub_140745b20(&var_30)
    else
        int64_t* rcx_4 = *(arg1 + 0x2b0)
        
        if (rcx_4 == 0)
            goto label_140f2ac50
        
        int64_t rdx_2 = *rcx_4
        
        if ((*(rdx_2 + 0x28))(rcx_4, rdx_2) == 0)
            goto label_140f2ac50

return result
