// 函数: sub_1422aefc0
// 地址: 0x1422aefc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
int64_t arg_10 = 0
int64_t* result = (*(*arg1 + 0x6a8))(arg1, 0, 0)
int64_t* result_4 = arg1[0x15]
int64_t* result_3 = result

if (result_4 == 0)
    result = sub_141ee69e0(arg1)
    result_4 = result

if (result_3 != 0 && result_3[0x14] != 0 && result_4 != 0 && result_4[0x3f] != 0)
    int32_t rax_1 = *(arg1 + 0xc)
    
    if (rax_1 s>= data_143e1d9b4)
        result = nullptr
    else
        int16_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(rax_1)
        uint32_t rdx_2 = zx.d(temp1_1)
        int32_t rax_3 = temp2_1 + rdx_2
        result =
            *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_2) * 0x18
    
    if ((result[1].d & 0x30000000) == 0 && data_143de5444 == 0)
        int64_t rdx_4 = arg1[0x19]
        int64_t arg_8 = 0
        result = sub_1422a15b0(arg1, rdx_4, &arg_8, 0)
        int64_t* result_2 = result
        
        if (result != 0)
            int64_t r9_1 = *result
            result = (*(r9_1 + 0x6a8))(result, arg_8, 0, r9_1)
            int64_t* result_5 = result
            
            if (result != 0)
                int32_t rax_8 = *(result_2 + 0xc)
                void* const rax_15
                
                if (rax_8 s>= data_143e1d9b4)
                    rax_15 = nullptr
                else
                    int16_t temp3_1
                    int32_t temp4_1
                    temp3_1:temp4_1 = sx.q(rax_8)
                    uint32_t rdx_7 = zx.d(temp3_1)
                    int32_t rax_10 = temp4_1 + rdx_7
                    rax_15 = *(data_143e1d9a0 + (sx.q(rax_10 s>> 0x10) << 3))
                        + sx.q(zx.d(rax_10.w) - rdx_7) * 0x18
                
                int32_t r15_1 = *(rax_15 + 8)
                int64_t r13_1 = result_3[0x14]
                sub_142226210(result_5, result_3)
                result_3[0x14]
                result_3[0x14] = 0
                int64_t rdx_10 = *arg1
                result.b = (*(rdx_10 + 0x690))(arg1, rdx_10) != 0
                int32_t r15_2 = r15_1 & 0x30000000
                void* var_78
                char* var_70
                
                if (r15_2 == 0 && result.b != 0)
                    result = sub_14221b2f0(result_3)
                    
                    if (result.b == 0)
                        char rsi_1 = *(result_3 + 0xc)
                        *(result_3 + 0xc) = rsi_1 & 0x7f
                        void* rdi = result_4[0x3f]
                        int64_t rax_19 = (*(*arg1 + 0x690))(arg1)
                        void var_48
                        var_70 = sub_14220af60(&var_48, arg1)
                        var_78 = rdi
                        arg2 = sub_142219250(result_3, rax_19, &arg1[0x38], arg1, var_78, var_70)
                        result.b = rsi_1 ^ *(result_3 + 0xc)
                        result.b &= 0x7f
                        result.b ^= rsi_1
                        *(result_3 + 0xc) = result.b
                        rsi = 0
                
                if (r13_1 != 0)
                    int64_t rax_21 = *arg1
                    int64_t* result_1
                    __builtin_memset(&result_1, 0, 0x20)
                    int64_t var_60
                    int64_t var_58
                    int64_t var_50
                    result = (*(rax_21 + 0x6f8))(arg1, &result_1, &var_58, 0, var_78, var_70, 
                        result_1, var_60, var_58, var_50)
                    int32_t rcx_18 = var_60.d
                    
                    if (rcx_18 s> 0)
                        int64_t* rdi_1 = nullptr
                        
                        do
                            result = result_1
                            void* rbx_2 = *(rdi_1 + result)
                            
                            if (rbx_2 != result_3)
                                if (r15_2 == 0)
                                    sub_142226210(result_5, rbx_2)
                                
                                int64_t* result_6 = *(rbx_2 + 0xa0)
                                *(rbx_2 + 0xa0) = 0
                                result = result_6
                                rcx_18 = var_60.d
                            
                            rsi += 1
                            rdi_1 = &rdi_1[1]
                        while (rsi s< rcx_18)
                    
                    if (r15_2 == 0)
                        result = sub_142222800(result_3, arg2)
                        
                        if (result.b != 0)
                            result = sub_14221b2f0(result_3)
                            
                            if (result.b != 0)
                                result = sub_1422115a0(result_3)
                    
                    int64_t rcx_23 = var_58
                    
                    if (rcx_23 != 0)
                        result = sub_140a74f90(rcx_23)
                    
                    int64_t* result_7 = result_1
                    
                    if (result_7 != 0)
                        return sub_140a74f90(result_7)

return result
