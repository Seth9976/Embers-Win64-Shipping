// 函数: sub_14244f2d0
// 地址: 0x14244f2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141dd2730(arg1)
int64_t* result
int512_t zmm1
result, zmm1 = sub_141dcdc50(arg1)

if (result.d != 1)
    result = sub_141dcdfd0(arg1, 0, zmm1)
    
    if (result.b != 0)
        result = (*(*arg1 + 0x150))(arg1)
        int64_t* result_3 = result
        
        if (result[0x1f] == 0)
            void* rcx_3 = data_143f5b298
            
            if (*(rcx_3 + 0x998) s> 1)
                int16_t* rdi_1
                
                if (*(rcx_3 + 0x998) == 0)
                    rdi_1 = &data_142d40450
                else
                    rdi_1 = *(rcx_3 + 0x990)
                
                int32_t var_58_1 = 2
                result = sub_140d2f6f0(sub_140bdf2e0(), 0, rdi_1, 0, 2, 0, 1, 0)
                int64_t* result_4 = result
                
                if (result != 0)
                    void* rax_2 = sub_140bdf2e0()
                    void* rdx_1 = result_4[2]
                    result = sx.q(*(rax_2 + 0x38))
                    
                    if (result.d s<= *(rdx_1 + 0x38))
                        int64_t* result_1 = result
                        result = *(rdx_1 + 0x30)
                        
                        if (result[result_1] == rax_2 + 0x30)
                            result = sub_14254d270()
                            
                            if (result != 0)
                                result = sx.q(result[7].d)
                                
                                if (result.d s<= result_4[7].d)
                                    int64_t* result_2 = result
                                    result = result_4[6]
                                    
                                    if (result[result_2] == &result[6])
                                        void var_38
                                        sub_142427eb0(&var_38)
                                        int64_t* var_28_1 = arg1
                                        int32_t var_c
                                        int32_t var_c_1 = var_c | 0x40
                                        int64_t var_20_1 = Concurrency::details::UMSSchedulerProxy::GetCompletionList(
                                            arg1)
                                        void* rax_4 = sub_14254d270()
                                        int64_t rax_5
                                        
                                        if (rax_4 != 0)
                                            rax_5 = sx.q(*(rax_4 + 0x38))
                                        
                                        if (rax_4 == 0 || rax_5.d s> result_4[7].d
                                                || *(result_4[6] + (rax_5 << 3)) != rax_4 + 0x30)
                                            result_4 = nullptr
                                        
                                        var_58_1.q = &var_38
                                        result = sub_1420efae0(result_3, result_4, nullptr, 
                                            nullptr, var_58_1)
                                        result_3[0x1f] = result

return result
