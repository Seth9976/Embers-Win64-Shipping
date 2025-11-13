// 函数: sub_142394e00
// 地址: 0x142394e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_ca8
uint64_t result = __security_cookie ^ &var_ca8
uint64_t result_1 = result

if (*arg2 != 0)
    int64_t* r14_1 = *(arg2 + 8)
    
    if (r14_1 != 0)
        int64_t rbx_1 = sx.q(*(arg1 + 0x100))
        int32_t var_48_1 = 0
        
        if (rbx_1.d s< *(arg1 + 8))
            int64_t rdi_1 = rbx_1 << 3
            void var_c88
            
            do
                void* rsi_1 = *(rdi_1 + *r14_1)
                result, arg3, arg4 = sub_14237ccb0(rsi_1, &var_c88, arg3, arg4)
                
                if (data_143f0f21f != 0)
                    uint64_t rdx_1 = zx.q(data_143f0f1a0)
                    result = zx.q(*(&data_143f025fc + sx.q(rdx_1.d) * 0x14) u>> 0x13)
                    
                    if ((result.b & 1) != 0)
                        result = data_143f13cd8
                        
                        if (test_bit(result, rdx_1))
                            result = (*(*(rsi_1 + 0x200) + 0x30))(rsi_1 + 0x200)
                
                rbx_1 = zx.q(rbx_1.d + 1)
                rdi_1 += 8
            while (rbx_1.d s< *(arg1 + 8))
            
            if (var_48_1 != 0)
                result = sub_14198a900(&data_143f02b98, &var_c88, var_48_1, 1, arg3, arg4)

__security_check_cookie(result_1 ^ &var_ca8)
return result
