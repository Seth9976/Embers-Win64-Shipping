// 函数: sub_142178070
// 地址: 0x142178070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg2[5].b)
void** r14 = arg4
int64_t var_28
int32_t result_1

if ((result.b & 2) != 0)
    int64_t* r8 = *arg4
    int32_t var_38
    
    if (r8 != 0)
        int32_t rax = *(r8 + 0xc)
        void* const rax_7
        
        if (rax s>= data_143e1d9b4)
            rax_7 = nullptr
        else
            int16_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rax)
            uint32_t rdx_1 = zx.d(temp0_1)
            int32_t rax_2 = temp1_1 + rdx_1
            rax_7 =
                *(data_143e1d9a0 + (sx.q(rax_2 s>> 0x10) << 3)) + sx.q(zx.d(rax_2.w) - rdx_1) * 0x18
        
        if (((*(rax_7 + 8) u>> 0x1d).b & 1) != 0)
            int64_t r10_1 = *arg1
            var_28 = 0
            var_38.q = arg6
            return (*(r10_1 + 0x268))(arg1, arg2, arg3, &var_28, var_38)
    
    sub_1421693f0(arg1[0x62], &result_1, r8, nullptr)
    int32_t result_4 = result_1
    
    if (arg6 != 0)
        *arg6 = result_4
    
    void* r9_1 = *r14
    var_38.q = &var_28
    var_28 = 0
    int64_t var_20_1 = 0
    int512_t zmm1 = sub_14216b1e0(arg1, arg2, result_4, r9_1, var_38, nullptr)
    result = zx.q(result_1)
    
    if (result.d != 1)
        void* r9_2 = *r14
        
        if (arg1[0x26] != 0)
            void* rcx_7 = arg1[0x60]
            
            if (rcx_7 != 0)
                for (int32_t* i = *(rcx_7 + 0xf8); i != &i[sx.q(*(rcx_7 + 0x100))]; i = &i[1])
                    if (*i == result.d)
                        goto label_1421781fc_2
            
            if (result.d != 0 && (*(*r9_2 + 0x1b8))(r9_2).b != 0)
                int32_t result_2 = result_1
                
                if (result_2 == 1)
                    goto label_1421781dd
                
                result, zmm1 = sub_14216e470(arg1, result_2)
                
                if (result.b == 0)
                    result_2 = result_1
                label_1421781dd:
                    void* r8_3 = *r14
                    var_28 = 0
                    int64_t var_20_2 = 0
                    sub_142166630(arg1, result_2, r8_3, &var_28, zmm1, nullptr)
    
label_1421781fc:
    result.b = 1
else if ((result.b & 1) == 0)
label_1421781fc_1:
    result.b = 1
else
    int32_t var_38_1 = 0
    int32_t result_3 = *sub_14216a980(arg1, &result_1, arg2, arg4, arg5)
    result = arg6
    result_1 = result_3
    
    if (result != 0)
        *result = result_3
    
    void* rbp_1 = *r14
    void* rbp_2
    
    if (rbp_1 == 0)
    label_14217829f:
        rbp_2 = *r14
        
        if (rbp_2 != 0)
            result = *(rbp_2 + 0x10)
            int64_t rcx_15 = sx.q(*(arg3 + 0x38))
            
            if (rcx_15.d s> *(result + 0x38) || *(*(result + 0x30) + (rcx_15 << 3)) != arg3 + 0x30)
                rbp_2 = nullptr
                *r14 = nullptr
    else
        result = arg1[0x26]
        
        if (result == 0)
            goto label_14217829f
        
        void* rdx_7 = *(result + 0x58)
        
        if (rdx_7 == 0 || *(rdx_7 + 0x140) == 0)
            goto label_14217829f
        
        result = sub_140d226f0(rbp_1, sub_142527690())
        
        if (result == 0 || result == *(*(*(arg1[0x26] + 0x58) + 0x140) + 0x30)
                || (*(result + 0x1f4) & 0x20) != 0)
            goto label_14217829f
        
        rbp_2 = nullptr
        *r14 = nullptr
    
    if (result_3 != 0 && *(arg1 + 0x29) != 0 && sub_14216b800(arg1[0x62], &result_1, 0).b == 0)
        if (rbp_2 != 0)
            result.b = not.b(result_3.b)
            
            if ((result.b & 1) != 0)
                sub_141f77ab0(&arg1[0x10], &var_28, &result_1, nullptr)
        else
            sub_141f77ab0(&arg1[6], &var_28, &result_1, nullptr)
    
    if (*r14 != 0 || result_3 == 0)
    label_1421781fc_2:
        result.b = 1
    else
        result.b = 0
return result
