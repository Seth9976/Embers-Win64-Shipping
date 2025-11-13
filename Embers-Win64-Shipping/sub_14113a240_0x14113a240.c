// 函数: sub_14113a240
// 地址: 0x14113a240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(*(arg1 + 8) + 0x1c20) s> 0 && sub_1410a09e0(*(arg1 + 0x3b4)).b == 0)
    sub_141394ae0(&data_143ec4c60, arg2, 0, 0x21, 1)
    int32_t zmm6 = 0x3f800000
    int64_t var_68 = arg3
    int32_t i = 0
    int64_t var_60
    __builtin_memset(&var_60, 0, 0x18)
    int32_t var_48 = 0x3f800000
    
    if (*(arg1 + 0xa8) s> 0)
        void* r15_1 = nullptr
        
        do
            void* rsi_1 = r15_1 + *(arg1 + 0xa0)
            
            if (not(zmm6 f<= *(rsi_1 + 0x2bc)))
                int32_t rbx_1 = *(arg2 + 0x8c)
                int32_t rax_2 = *(rsi_1 + 0xad8)
                
                if (rbx_1 != rax_2)
                    bool cond:0_1 = *(arg2 + 0x14) u> 0
                    *(arg2 + 0x8c) = rax_2
                    
                    if (cond:0_1)
                        void*** rdx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_3 = &rdx_3[3]
                        
                        if (rax_3 u> *(arg2 + 0x38))
                            sub_140b0e3d0(arg2 + 0x30, 0x20)
                            rdx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_3 = &rdx_3[3]
                        
                        *(arg2 + 0x30) = rax_3
                        int64_t* rax_4 = *(arg2 + 8)
                        *(arg2 + 0x14) += 1
                        *rax_4 = rdx_3
                        int32_t rax_5 = *(arg2 + 0x8c)
                        *(arg2 + 8) = &rdx_3[1]
                        rdx_3[1] = 0
                        *rdx_3 = &data_142f11588
                        rdx_3[2].d = rax_5
                    else
                        *(arg2 + 0x90) = rax_2
                
                int128_t var_58_1
                var_58_1.d = *(rsi_1 + 0x1598)
                var_58_1:4.d = *(rsi_1 + 0x159c)
                var_58_1:8.d = *(rsi_1 + 0x15a0)
                var_58_1:0xc.d = *(rsi_1 + 0x15a4)
                zmm6 = sub_14113b300(arg1, arg2, rsi_1, &var_68)
                
                if (*(arg2 + 0x8c) != rbx_1)
                    bool cond:1_1 = *(arg2 + 0x14) u> 0
                    *(arg2 + 0x8c) = rbx_1
                    
                    if (cond:1_1)
                        void*** rdx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_10 = &rdx_9[3]
                        
                        if (rax_10 u> *(arg2 + 0x38))
                            zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x20)
                            rdx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_10 = &rdx_9[3]
                        
                        *(arg2 + 0x30) = rax_10
                        int64_t* rax_11 = *(arg2 + 8)
                        *(arg2 + 0x14) += 1
                        *rax_11 = rdx_9
                        int32_t rax_12 = *(arg2 + 0x8c)
                        *(arg2 + 8) = &rdx_9[1]
                        rdx_9[1] = 0
                        *rdx_9 = &data_142f11588
                        rdx_9[2].d = rax_12
                    else
                        *(arg2 + 0x90) = rbx_1
            
            i += 1
            r15_1 += 0x5240
        while (i s< *(arg1 + 0xa8))
    
    sub_14139bc50(&data_143ec4c60, arg2)
    sub_1405d1550(&var_60)
    int64_t rax_13
    rax_13.b = 1
    return rax_13

uint64_t rax
rax.b = 0
return rax
