// 函数: sub_142ba70a0
// 地址: 0x142ba70a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax_1 = sub_142b92360(*(*(arg2 + 0x90) + 8), "sfnt")
int32_t rdi

if (rax_1 != 0)
    int32_t rax_2 = sub_142b97060(arg1, 0, arg5)
    rdi = rax_2
    
    if (rax_2 == 0)
        int32_t rax_3 = rax_1[1](arg1, arg2, zx.q(arg3), zx.q(arg4), arg6)
        int64_t* rbp_1 = *(arg2 + 0xa0)
        rdi = rax_3
        
        if (rax_3 == 0)
            int32_t rax_4 = *(arg2 + 0xf0)
            
            if (rax_4 == 0x10000 || rax_4 == 0x20000 || rax_4 == 0x74727565 || rax_4 == 0xa56b6264
                    || rax_4 == 0xa56c7374)
                *(arg2 + 8) |= 0x800
                
                if (arg3 s< 0)
                    return 0
                
                int32_t rax_6 = rax_1[2](rbp_1, arg2, zx.q(arg3), zx.q(arg4), arg6)
                rdi = rax_6
                
                if (rax_6 == 0)
                    if (sub_142bb35b0(arg2) != 0)
                        *(arg2 + 8) |= 0x2000
                    
                    int32_t rax_8
                    int512_t zmm0_1
                    rax_8, zmm0_1 = sub_142bb3be0(arg2, rbp_1)
                    rdi = rax_8
                    
                    if (rax_8 == 0)
                        if ((*(arg2 + 8) & 1) == 0)
                        label_142ba72e2:
                            uint32_t rsi_1 = arg3 u>> 0x10
                            
                            if ((*(arg2 + 8) & 0x100) == 0 || rsi_1 == 0)
                                goto label_142ba7311
                            
                            int32_t rax_18
                            int512_t zmm0_2
                            rax_18, zmm0_2 = sub_142ba8170(arg2, rsi_1, arg5)
                            rdi = rax_18
                            
                            if (rax_18 == 0)
                                sub_142ba8290(arg2, zmm0_2)
                            label_142ba7311:
                                *(arg2 + 0x2a8) = sub_142bacd40
                                *(arg2 + 0x2b8) = sub_142badc10
                                *(arg2 + 0x2c0) = sub_142badcb0
                                *(arg2 + 0x2c8) = sub_142bad150
                                *(arg2 + 0x2b0) = sub_142bace30
                        else if (*(*(arg2 + 0xd0) + 0x50) != 0)
                        label_142ba71fb:
                            int32_t rax_11 = sub_142bb3ab0(arg2, rbp_1)
                            rdi = rax_11
                            int32_t arg_10
                            
                            if (rax_11 == 0 || rax_11.b == 0x8e)
                                if ((*(arg2 + 0x2a0))(arg2, 0x6670676d, rbp_1, &arg_10) == 0)
                                    int32_t rdx_5 = arg_10
                                    *(arg2 + 0x3b0) = rdx_5
                                    int32_t rax_13 = sub_142b96670(rbp_1, rdx_5, arg2 + 0x3b8)
                                    rdi = rax_13
                                    
                                    if (rax_13 == 0 || rax_13.b == 0x8e)
                                        goto label_142ba7272
                                else
                                    *(arg2 + 0x3b8) = 0
                                    *(arg2 + 0x3b0) = 0
                                label_142ba7272:
                                    
                                    if ((*(arg2 + 0x2a0))(arg2, 0x70726570, rbp_1, &arg_10) != 0)
                                        *(arg2 + 0x3c8) = 0
                                        rdi = 0
                                        *(arg2 + 0x3c0) = 0
                                    label_142ba72bd:
                                        
                                        if (*(*(arg2 + 0xd0) + 0x50) != 0)
                                            goto label_142ba72e2
                                        
                                        if (*(arg2 + 0x28) != 0 && *(arg2 + 0x438) != 0
                                                && sub_142bb33c0(arg2) != 0)
                                            *(arg2 + 8) &= 0xfffffffe
                                        
                                        goto label_142ba72e2
                                    
                                    int32_t rdx_6 = arg_10
                                    *(arg2 + 0x3c0) = rdx_6
                                    int32_t rax_15 = sub_142b96670(rbp_1, rdx_6, arg2 + 0x3c8)
                                    rdi = rax_15
                                    
                                    if (rax_15 == 0 || rax_15.b == 0x8e)
                                        goto label_142ba72bd
                        else
                            int32_t rax_10 = sub_142bb3da0(arg2, rbp_1, zmm0_1)
                            rdi = rax_10
                            
                            if ((*(arg2 + 0x400) == 0 || rax_10.b != 0x8e) && rax_10 == 0)
                                goto label_142ba71fb
            else
                rdi = 2
else
    rdi = (rax_1 + 0xb).d

return zx.q(rdi)
