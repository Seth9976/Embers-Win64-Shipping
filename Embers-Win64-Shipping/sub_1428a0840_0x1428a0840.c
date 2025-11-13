// 函数: sub_1428a0840
// 地址: 0x1428a0840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xb8)
char rcx = (*(*(arg1 + 0x20) + 0x14)).b

if ((rcx & 4) != 0)
    int32_t r12_1 = 0
    int32_t rcx_2
    
    if ((rcx & 8) != 0)
        rcx_2 = sub_142898c70(*(arg1 + 0x98)) - 1
    label_1428a089e:
        int32_t rax_2 = 0
        int32_t var_a8_1 = 0
        
        if (rcx_2 s>= 0)
            while (true)
                int32_t* rcx_3 = *(arg1 + 0x98)
                *(arg1 + 0xac) = rax_2
                void* const var_b8 = nullptr
                void* rax_3 = sub_142898ea0(rcx_3, rax_2)
                *(arg1 + 0xb8) = rax_3
                void* r14_1 = rax_3
                *(arg1 + 0xc0) = 0
                *(arg1 + 0xd0) = 0
                
                if ((*(rax_3 + 0xd0) & 0x400) == 0)
                    int32_t r15_1 = 0
                    int32_t var_ac_1 = 0
                    int64_t rsi_1
                    int32_t rdi_4
                    
                    while (true)
                        int64_t r9_1 = *(arg1 + 0x58)
                        int32_t rax_25
                        void* const r13_1
                        
                        if (r9_1 == 0)
                            int32_t arg_8 = 0
                            r13_1 = nullptr
                            void* var_60_1 = nullptr
                            void* var_90
                            __builtin_memset(&var_90, 0, 0x18)
                            int64_t rax_5 = sub_1428a38f0(r14_1)
                            int32_t* rdi_1 = *(arg1 + 0x18)
                            void* r14_2 = nullptr
                            int32_t rsi_2 = *(arg1 + 0xd4)
                            void* rax_6 = *(arg1 + 0xb8)
                            int32_t var_b0_1 = rsi_2
                            int32_t arg_10 = rsi_2
                            int32_t* var_a0_1 = rdi_1
                            int32_t arg_20 = 0
                            int64_t var_78 = 0
                            int64_t var_70_1 = 0
                            int64_t var_88
                            int64_t var_80
                            
                            if (sub_142898c70(rdi_1) s> 0)
                                int32_t r15_2 = 0
                                int32_t rax_16
                                
                                do
                                    void* rax_8 = sub_142898ea0(rdi_1, r12_1)
                                    int32_t arg_18 = rsi_2
                                    int32_t rax_10 =
                                        sub_1428a17e0(arg1, &var_78, &arg_18, rax_8, rax_6)
                                    
                                    if (rax_10 s>= r15_2 && rax_10 != 0)
                                        if (rax_10 != r15_2 || r14_2 == 0)
                                        label_1428a0a10:
                                            r14_2 = rax_8
                                            var_70_1 = var_78
                                            r15_2 = rax_10
                                            arg_20 = arg_18
                                        else
                                            int32_t* rax_11 = sub_1427ec4a0(rax_8)
                                            rdi_1 = var_a0_1
                                            int32_t var_98
                                            int32_t var_94
                                            
                                            if (sub_1428e5760(&var_98, &var_94, 
                                                    sub_1427ec4a0(r14_2), rax_11) != 0
                                                    && (var_98 s> 0 || var_94 s> 0))
                                                goto label_1428a0a10
                                    
                                    r12_1 += 1
                                    rax_16 = sub_142898c70(rdi_1)
                                    rsi_2 = var_b0_1
                                while (r12_1 s< rax_16)
                                
                                if (r14_2 == 0)
                                    r13_1 = var_60_1
                                    rsi_2 = var_b0_1
                                else
                                    sub_1428e4430(0)
                                    r13_1 = r14_2
                                    var_88 = var_70_1
                                    rsi_2 = arg_20
                                    arg_10 = arg_20
                                    var_90 = r14_2
                                    arg_8 = r15_2
                                    sub_1428e46f0(r14_2)
                                    sub_1428e4430(0)
                                    sub_1428a1b60(arg1, &var_80, &arg_8, r14_2, rdi_1)
                                
                                if (r15_2 s>= 0x1c0)
                                    goto label_1428a0af2
                                
                                goto label_1428a0a9e
                            
                        label_1428a0a9e:
                            int32_t* rax_17 = (*(arg1 + 0x80))(arg1, rax_5)
                            
                            if (rax_17 == 0 && r13_1 != 0)
                            label_1428a0aff:
                                r12_1 = 0
                                r14_1 = rax_3
                                r15_1 = var_ac_1
                                *(arg1 + 0xc0) = var_88
                                int32_t rax_19 = arg_8
                                *(arg1 + 0xd4) = rsi_2
                                rsi_1 = var_80
                                *(arg1 + 0xd0) = rax_19
                                var_b8 = r13_1
                                goto label_1428a0b2b
                            
                            sub_1428a1980(arg1, &var_90, &var_80, &var_88, &arg_8, &arg_10, rax_17)
                            sub_142898cb0(rax_17, sub_1428e4430)
                            r13_1 = var_90
                            rsi_2 = arg_10
                        label_1428a0af2:
                            
                            if (r13_1 != 0)
                                goto label_1428a0aff
                            
                            r12_1 = 0
                        label_1428a0bd4:
                            *(arg1 + 0xb0) = 3
                            rax_25 = (*(arg1 + 0x38))(0, arg1)
                            rsi_1 = 0
                        else
                            rsi_1 = 0
                            
                            if (r9_1(arg1, &var_b8, r14_1) == 0)
                                goto label_1428a0bd4
                            
                            r13_1 = var_b8
                        label_1428a0b2b:
                            *(arg1 + 0xc8) = r13_1
                            int32_t rax_20 = (*(arg1 + 0x60))(arg1, r13_1)
                            rdi_4 = rax_20
                            
                            if (rax_20 == 0)
                                break
                            
                            if (rsi_1 == 0)
                            label_1428a0b7b:
                                int32_t rax_23 = (*(arg1 + 0x68))(arg1, var_b8, r14_1)
                                rdi_4 = rax_23
                                
                                if (rax_23 == 0)
                                    break
                            else
                                int32_t rax_21 = (*(arg1 + 0x60))(arg1, rsi_1)
                                rdi_4 = rax_21
                                
                                if (rax_21 == 0)
                                    break
                                
                                int32_t rax_22 = (*(arg1 + 0x68))(arg1, rsi_1, r14_1)
                                rdi_4 = rax_22
                                
                                if (rax_22 == 0)
                                    break
                                
                                if (rax_22 != 2)
                                    goto label_1428a0b7b
                            
                            sub_1428e4430(var_b8)
                            sub_1428e4430(rsi_1)
                            int32_t rax_24 = *(arg1 + 0xd4)
                            rsi_1 = 0
                            var_b8 = nullptr
                            
                            if (r15_1 == rax_24)
                                *(arg1 + 0xb0) = 3
                                rax_25 = (*(arg1 + 0x38))(0, arg1)
                            else
                                var_ac_1 = rax_24
                                r15_1 = rax_24
                                
                                if (rax_24 == 0x807f)
                                    break
                                
                                continue
                        rdi_4 = rax_25
                        break
                    
                    sub_1428e4430(var_b8)
                    sub_1428e4430(rsi_1)
                    *(arg1 + 0xc8) = 0
                    
                    if (rdi_4 == 0)
                        return 0
                
                rax_2 = var_a8_1 + 1
                var_a8_1 = rax_2
                
                if (rax_2 s> rcx_2)
                    break
    else if (*(arg1 + 0xd8) == 0)
        rcx_2 = 0
        goto label_1428a089e

return 1
