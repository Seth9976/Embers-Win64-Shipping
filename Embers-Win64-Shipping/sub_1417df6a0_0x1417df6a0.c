// 函数: sub_1417df6a0
// 地址: 0x1417df6a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_142041cb0(arg1, arg2)

if (*(arg1 + 0x30c) != 0)
    void* rbp_1 = arg1[0x50]
    int64_t* var_50
    sub_1424365b0((*(*arg1 + 0x150))(arg1), &var_50)
    int32_t result_1
    result = result_1
    
    while (true)
        int64_t* rdx_2 = var_50
        int64_t rcx_1
        
        if (result s< 0 || result s>= rdx_2[1].d)
            rcx_1.b = 0
        else
            rcx_1.b = 1
        
        if (rcx_1.b == 0)
            break
        
        int64_t* rax_3
        rax_3, rcx_1 = sub_140d3c6e0(*rdx_2 + (sx.q(result) << 3))
        
        if (rax_3 != 0)
            void* rax_4 = sub_1417e5580()
            rcx_1 = rax_3[2]
            int64_t rdx_3 = sx.q(*(rax_4 + 0x38))
            
            if (rdx_3.d s<= *(rcx_1 + 0x38) && *(*(rcx_1 + 0x30) + (rdx_3 << 3)) == rax_4 + 0x30)
                int64_t rax_6 = *rax_3
                int64_t* var_58 = rax_3
                char rax_7
                rax_7, rcx_1 = (*(rax_6 + 0x6a8))(rax_3, rdx_3)
                void arg_18
                
                if (rax_7 == 0 && rax_3[0xae].b != 0)
                    if (*sub_140865c40(&arg1[0x62], &arg_18, rax_3) == 0xffffffff)
                        int64_t arg_20 = 0
                        sub_1408ccf30(&arg1[0x62], &var_58, &arg_20)
                        *(rbp_1 + 0x2a8)
                        sub_1417e76c0(var_58, *(rbp_1 + 0x298))
                    else
                        int32_t arg_8
                        sub_140865c40(&arg1[0x62], &arg_8, rax_3)
                        int64_t rax_9 = sx.q(arg_8)
                        void* const rsi_1
                        
                        if (rax_9.d == 0xffffffff)
                            rsi_1 = nullptr
                        else
                            rsi_1 = arg1[0x62] + rax_9 * 0x18
                        
                        int64_t r15_1 = sx.q(*(rsi_1 + 8))
                        
                        if (r15_1.d s< *(rbp_1 + 0x298))
                            int32_t rax_11 = arg1[0x61].d
                            arg1[0x6d].d = 0
                            int32_t rdx_7 = 0
                            
                            if (rax_11 s> *(arg1 + 0x36c))
                                sub_1405c5510(&arg1[0x6c], rax_11)
                                rdx_7 = arg1[0x6d].d
                            
                            uint32_t count_2 = arg1[0x61].d
                            uint32_t count = *(rbp_1 + 0x298) - r15_1.d
                            
                            if (count_2 s<= count)
                                count = count_2
                            
                            int32_t rax_12 = rdx_7 + count
                            arg1[0x6d].d = rax_12
                            
                            if (rax_12 s> *(arg1 + 0x36c))
                                sub_1405daba0(&arg1[0x6c])
                            
                            memcpy(arg1[0x6c], r15_1 + *(rbp_1 + 0x290), count)
                            sub_1417e77b0(rax_3, r15_1.d, &arg1[0x6c])
                            *(rsi_1 + 8) += count
                        
                        int64_t r15_2 = sx.q(*(rsi_1 + 0xc))
                        
                        if (r15_2.d s< *(rbp_1 + 0x2a8))
                            int32_t rdx_12 = arg1[0x61].d
                            arg1[0x6d].d = 0
                            
                            if (rdx_12 s> *(arg1 + 0x36c))
                                sub_1405c5510(&arg1[0x6c], rdx_12)
                            
                            uint32_t count_3 = arg1[0x61].d
                            uint32_t count_1 = *(rbp_1 + 0x2a8) - r15_2.d
                            
                            if (count_3 s<= count_1)
                                count_1 = count_3
                            
                            int32_t rax_13 = arg1[0x6d].d + count_1
                            arg1[0x6d].d = rax_13
                            
                            if (rax_13 s> *(arg1 + 0x36c))
                                sub_1405daba0(&arg1[0x6c])
                            
                            memcpy(arg1[0x6c], r15_2 + *(rbp_1 + 0x2a0), count_1)
                            sub_1417e7710(rax_3, r15_2.d, &arg1[0x6c])
                            *(rsi_1 + 0xc) += count_1
                            result = result_1 + 1
                            result_1 = result
                            continue
        
        result = result_1 + 1
        result_1 = result

return result
