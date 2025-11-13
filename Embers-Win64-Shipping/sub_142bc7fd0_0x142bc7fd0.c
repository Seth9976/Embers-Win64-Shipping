// 函数: sub_142bc7fd0
// 地址: 0x142bc7fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x2b8) = 0
int64_t* rcx = *(arg2 + 0x90)
*arg2 = 1
int64_t rax = sub_142b99bf0(rcx, "postscript-cmaps", 1)
void* rcx_1 = *(arg2 + 0x90)
*(arg2 + 0x298) = rax
int64_t* rax_1 = sub_142b92360(*(rcx_1 + 8), "psaux")
*(arg2 + 0x2a0) = rax_1
int32_t rdi

if (rax_1 != 0)
    int32_t rax_2 = sub_142bc9760(arg2, arg5, arg6)
    rdi = rax_2
    
    if (rax_2 == 0 && arg3 s>= 0)
        if (arg3.w == 0)
            arg2[4] = arg2[0x90]
            int32_t rax_5 = arg2[2] | 0x211
            arg2[0xe] = 0
            arg2[2] = rax_5
            arg2[1] = 0
            
            if (arg2[0x41].b != 0)
                arg2[2] = rax_5 | 4
            
            arg2[2] |= 0x800
            char* rcx_4 = *(arg2 + 0xf0)
            *(arg2 + 0x18) = rcx_4
            *(arg2 + 0x20) = "Regular"
            
            if (rcx_4 == 0)
                int64_t rcx_5 = *(arg2 + 0x1d8)
                int64_t rax_8 = *(arg2 + 0x18)
                
                if (rcx_5 != 0)
                    rax_8 = rcx_5
                
                *(arg2 + 0x18) = rax_8
            else
                char* rax_7 = *(arg2 + 0xe8)
                
                if (rax_7 != 0)
                    for (char i = *rax_7; i != 0; i = *rax_7)
                        char r8 = *rcx_4
                        
                        if (i == r8)
                            rcx_4 = &rcx_4[1]
                            rax_7 = &rax_7[1]
                        else if (i == 0x20 || i == 0x2d)
                            rax_7 = &rax_7[1]
                        else
                            if (r8 != 0x20 && r8 != 0x2d)
                                if (*rcx_4 == 0)
                                    *(arg2 + 0x20) = rax_7
                                
                                break
                            
                            rcx_4 = &rcx_4[1]
            
            arg2[0xa] = 0
            *(arg2 + 0x30) = 0
            void* rcx_6 = *(arg2 + 0x90)
            int32_t var_68 = 9
            int64_t var_40_1 = sub_142b922e0(*(rcx_6 + 8), "truetype")
            int64_t var_60_1 = *(arg2 + 0x2a8)
            int32_t var_58_1 = arg2[0xac]
            
            if (arg4 != 0)
                var_68 |= 0x10
                int64_t var_30_1 = arg7
                int32_t var_38_1 = arg4
            
            int32_t rax_13 = sub_142b941f0(*(*(arg2 + 0x90) + 8), &var_68, 0, &arg2[0xae], arg5)
            rdi = rax_13
            
            if (rax_13 == 0)
                sub_142b91b70(*(*(arg2 + 0x2b8) + 0x80))
                *(arg2 + 0x58) = *(*(arg2 + 0x2b8) + 0x58)
                arg2[0x1a].w = *(*(arg2 + 0x2b8) + 0x68)
                *(arg2 + 0x6a) = *(*(arg2 + 0x2b8) + 0x6a)
                arg2[0x1b].w = *(*(arg2 + 0x2b8) + 0x6c)
                *(arg2 + 0x6e) = *(*(arg2 + 0x2b8) + 0x6e)
                arg2[0x1c].w = *(*(arg2 + 0x2b8) + 0x70)
                *(arg2 + 0x72) = *(*(arg2 + 0x2b8) + 0x72)
                arg2[0x1d].w = *(arg2 + 0x106)
                *(arg2 + 0x76) = arg2[0x42].w
                int32_t rax_23 = 0
                arg2[3] = 0
                
                if (arg2[0x40] != 0)
                    rax_23 = 1
                
                arg2[3] = rax_23
                
                if ((*(*(arg2 + 0x2b8) + 0xc) & 2) != 0)
                    arg2[3] |= 2
                
                if ((*(*(arg2 + 0x2b8) + 8) & 0x20) != 0)
                    arg2[2] |= 0x20
                
                if (rax != 0)
                    int32_t** rsi_1 = rax_1[8]
                    int32_t* var_78 = arg2
                    int32_t var_6c_1 = 0x10003
                    int32_t var_70
                    __builtin_strncpy(&var_70, "cinu", 4)
                    int32_t rax_26 = sub_142b91640(rsi_1[3], 0, &var_78, nullptr)
                    rdi = rax_26
                    uint32_t rax_27
                    
                    if (rax_26 != 0)
                        rax_27 = zx.d(rax_26.b)
                    
                    if (rax_26 == 0 || rax_27 == 0xa3 || rax_27 == 7)
                        int32_t rcx_19 = arg2[0x78]
                        rdi = 0
                        var_6c_1.w = 7
                        int32_t* rcx_23
                        
                        if (rcx_19 == 1)
                            int32_t var_70_4
                            __builtin_strncpy(&var_70_4, "CBDA", 4)
                            var_6c_1:2.w = 2
                            rcx_23 = rsi_1[2]
                        label_142bc830e:
                            
                            if (rcx_23 != 0)
                                rdi = sub_142b91640(rcx_23, 0, &var_78, nullptr)
                        else
                            if (rcx_19 == 2)
                                int32_t var_70_3
                                __builtin_strncpy(&var_70_3, "BODA", 4)
                                var_6c_1:2.w = 0
                                rcx_23 = *rsi_1
                                goto label_142bc830e
                            
                            if (rcx_19 == 3)
                                int32_t var_70_2
                                __builtin_strncpy(&var_70_2, "1tal", 4)
                                var_6c_1:2.w = 3
                                rcx_23 = rsi_1[3]
                                goto label_142bc830e
                            
                            if (rcx_19 == 4)
                                int32_t var_70_1
                                __builtin_strncpy(&var_70_1, "EBDA", 4)
                                var_6c_1:2.w = 1
                                rcx_23 = rsi_1[1]
                                goto label_142bc830e
        else
            rdi = rax_2 + 6
else
    rdi = (rax_1 + 0xb).d

return zx.q(rdi)
