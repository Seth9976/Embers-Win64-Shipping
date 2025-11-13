// 函数: sub_141eba860
// 地址: 0x141eba860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t i = 0

if (*(arg1 + 0x30) s> 0)
    int64_t rsi_1 = 0
    
    do
        int64_t* rdi_2 = *(arg1 + 0x28) + rsi_1
        result = sub_141b71960(*(arg2 + 0x10), *rdi_2)
        
        if (result != 0)
            void* const r8_1 = *result
            result = (*(r8_1 + 0x140))(result, sx.q(*(result + 0x4c)) + arg2, r8_1)
            void* const* result_2 = result
            
            if (result != 0)
                result = sub_141eb0bb0(result[2], rdi_2[1])
                void* const* result_1 = result
                
                if (result != 0)
                    result = sub_140bdc2b0(*(arg2 + 0x10), rdi_2[2], 1)
                    
                    if (result != 0)
                        int128_t var_48
                        sub_140d3a3a0(&var_48, nullptr)
                        int64_t var_40_1 = 0
                        sub_140d3a3a0(&var_48, arg2)
                        int64_t var_40_2 = rdi_2[2]
                        void* const rax_1 = *result_1
                        int128_t var_38 = var_48
                        result = (*(rax_1 + 0x140))(result_1, &var_38, result_2, 0)
        
        i += 1
        rsi_1 += 0x18
    while (i s< *(arg1 + 0x30))

return result
