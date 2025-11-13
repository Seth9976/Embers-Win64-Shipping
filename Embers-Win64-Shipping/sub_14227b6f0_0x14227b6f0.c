// 函数: sub_14227b6f0
// 地址: 0x14227b6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = nullptr

if (arg1[0xa9] == 0 && (*(*arg1 + 0x6a8))() != 0)
    void* rax_4 = (*(*arg1 + 0x150))(arg1)
    void* rsi_1 = *(rax_4 + 0x130)
    
    if (rsi_1 != 0 && *(rsi_1 + 0x230) != 0)
        void* rax_5 = sub_1425a0fd0()
        
        if (rax_5 != 0)
            int64_t* rsi_2 = *(rsi_1 + 0x230)
            int64_t rax_6 = sx.q(*(rax_5 + 0x38))
            
            if (rax_6.d s<= rsi_2[7].d && *(rsi_2[6] + (rax_6 << 3)) == rax_5 + 0x30 && rsi_2 != 0)
                void var_40
                sub_142427eb0(&var_40)
                int32_t var_14
                int32_t var_14_1 = var_14 | 0x40
                int32_t var_50_1 = arg1[0xac].d
                int64_t rax_9 = *arg1
                int64_t* var_30_1 = arg1
                char var_18_1 = 1
                int64_t var_58 = arg1[0xab]
                void var_4c
                void* result_1 =
                    sub_1420efae0(rax_4, rsi_2, &var_58, (*(rax_9 + 0x660))(arg1, &var_4c), &var_40)
                result = result_1
                
                if (result_1 != 0)
                    sub_141dd8f90(result_1, 0)
                    int64_t r8_2 = *result
                    (*(r8_2 + 0x6a8))(result, arg1, r8_2)
                    int64_t rdx_5 = *result
                    (*(rdx_5 + 0x6e8))(result, rdx_5)
                    
                    if ((*(result + 0x32) & 4) != 0)
                        sub_141dd7200(result, 1)

return result
