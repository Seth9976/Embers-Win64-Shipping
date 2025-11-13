// 函数: sub_1413c6860
// 地址: 0x1413c6860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_1413e1900(*arg1 + 0x6238, 0)
int32_t i = 0

if (arg1[2].d s> 0)
    int64_t* r14_1 = nullptr
    
    do
        int128_t* rcx_2 = *(r14_1 + arg1[1])
        uint64_t result_2 = *(rcx_2 + 0x18)
        uint64_t result_1 = result_2
        
        if (result_2 != 0)
            *(result_2 + 8) += 1
        
        int64_t* rcx_4 = *arg1 + 0x6238
        int128_t var_38 = *rcx_2
        sub_1413b8270(rcx_4, &var_38, &result_1)
        result = result_1
        
        if (result != 0)
            int32_t rcx_5 = *(result + 8)
            *(result + 8) -= 1
            
            if (rcx_5 == 1)
                int64_t* result_3 = result_1
                char rax_1
                
                if (result_3[2].b == 0 && data_143f0f1d0 == 0)
                    rax_1 = sub_1405949a0()
                
                if (result_3[2].b != 0 || (data_143f0f1d0 == 0 && rax_1 != 0))
                    result = (**result_3)(result_3, 1)
                else
                    result = 0
                    bool z_1
                    
                    if (0 == *(result_3 + 0xc))
                        *(result_3 + 0xc) = 1
                        z_1 = true
                    else
                        result = zx.q(*(result_3 + 0xc))
                        z_1 = false
                    
                    if (z_1)
                        int32_t rax_2 = sub_140a20af0()
                        uint64_t rdx_2 = zx.q(rax_2)
                        void* const rcx_6
                        
                        if (rax_2 != 0)
                            rcx_6 = *(&data_143cf0bf8 + (rdx_2 u>> 0xe << 3))
                                + (zx.q(rdx_2.d) & 0x3fff) * 0x18
                        else
                            rcx_6 = nullptr
                        
                        *(rcx_6 + 8) = result_1
                        result = sub_1405a42f0(&data_143f02390, rdx_2.d)
        
        i += 1
        r14_1 = &r14_1[1]
    while (i s< arg1[2].d)

return result
