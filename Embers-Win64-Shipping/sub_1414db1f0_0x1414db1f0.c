// 函数: sub_1414db1f0
// 地址: 0x1414db1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t i = 0

if (*(arg1 + 0xa8) s> 0)
    int64_t arg_10 = arg5
    int64_t r12_1 = 0
    int32_t rbx_1 = sbb.d(arg5.d, arg5.d, arg4 != 0) & 0xf
    int32_t arg_8 = rbx_1
    
    do
        void* rsi_1 = *(arg1 + 0xa0)
        int128_t var_198
        __builtin_memset(&var_198, 0, 0x120)
        void*** rsi_2 = rsi_1 + r12_1
        sub_1413aab70(&data_143ec4c60, rsi_2[0x2a9].d, rbx_1, &var_198)
        int64_t* rcx_1 = data_143f0f180
        result = (*(*rcx_1 + 0x100))(rcx_1, *(*(arg1 + 8) + 0x68), &var_198)
        
        if ((*(rsi_2 + 0x497c) & 2) == 0)
            if (*(rsi_2 + 0xd7a) != 0)
                result = sub_142391c90(zx.q(rsi_2[0x15a].d))
                
                if (result.b == 0)
                label_1414db386:
                    int32_t rbx_2 = *(arg2 + 0x8c)
                    int32_t rax_3 = rsi_2[0x15b].d
                    
                    if (rbx_2 != rax_3)
                        bool cond:0_1 = *(arg2 + 0x14) u> 0
                        *(arg2 + 0x8c) = rax_3
                        
                        if (cond:0_1)
                            void*** rdx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            void* rax_4 = &rdx_5[3]
                            
                            if (rax_4 u> *(arg2 + 0x38))
                                sub_140b0e3d0(arg2 + 0x30, 0x20)
                                rdx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                rax_4 = &rdx_5[3]
                            
                            *(arg2 + 0x30) = rax_4
                            int64_t* rax_5 = *(arg2 + 8)
                            *(arg2 + 0x14) += 1
                            *rax_5 = rdx_5
                            int32_t rax_6 = *(arg2 + 0x8c)
                            *(arg2 + 8) = &rdx_5[1]
                            rdx_5[1] = 0
                            *rdx_5 = &data_142f11588
                            rdx_5[2].d = rax_6
                        else
                            *(arg2 + 0x90) = rax_3
                    
                    sub_141405870(*(arg1 + 8) + 0x20, rsi_2, 1)
                    int32_t var_1a0_1 = arg4
                    void var_78
                    sub_1414df210(arg2, rsi_2, arg1, &var_78, arg3)
                    void* const rax_9
                    
                    if (arg4 != 0)
                        rax_9 = 0x33f0
                    
                    if (arg4 == 0 || arg4 != 1)
                        rax_9 = 0x3220
                    
                    result = sub_141267530(rax_9 + rsi_2, nullptr, arg2)
                    
                    if (*(arg2 + 0x8c) != rbx_2)
                        bool cond:2_1 = *(arg2 + 0x14) u> 0
                        *(arg2 + 0x8c) = rbx_2
                        
                        if (cond:2_1)
                            void*** rdx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            void* rax_10 = &rdx_12[3]
                            
                            if (rax_10 u> *(arg2 + 0x38))
                                sub_140b0e3d0(arg2 + 0x30, 0x20)
                                rdx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                rax_10 = &rdx_12[3]
                            
                            *(arg2 + 0x30) = rax_10
                            void**** rax_11 = *(arg2 + 8)
                            *(arg2 + 0x14) += 1
                            *rax_11 = rdx_12
                            result = zx.q(*(arg2 + 0x8c))
                            *(arg2 + 8) = &rdx_12[1]
                            rdx_12[1] = 0
                            *rdx_12 = &data_142f11588
                            rdx_12[2].d = result.d
                        else
                            *(arg2 + 0x90) = rbx_2
                    
                    rbx_1 = arg_8
                else if (*(rsi_2 + 0xd7c) != 0)
                    goto label_1414db363
            else
                if (*(rsi_2 + 0xd7c) == 0)
                    goto label_1414db386
                
            label_1414db363:
                result = sub_142391c90(zx.q(rsi_2[0x15a].d))
                
                if (result.b == 0)
                    result = *rsi_2
                    
                    if (result != 0 && result[1].d s> 1)
                        goto label_1414db386
        
        i += 1
        r12_1 += 0x5240
    while (i s< *(arg1 + 0xa8))

return result
