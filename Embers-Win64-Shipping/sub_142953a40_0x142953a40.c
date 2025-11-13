// 函数: sub_142953a40
// 地址: 0x142953a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (*(arg4 + 0x28) != 0)
    while (true)
        int32_t rax_1 = sub_142890560(arg1[8])
        int32_t var_18_1
        
        if (sub_142919890(*(arg3 + 0x20), rax_1 - 1, 0xffffffff, 0) == 0)
            var_18_1 = 0x2be
        label_142953c23:
            sub_1428a5670(0x10, 0x120, 3, "crypto\ec\ec2_smpl.c", var_18_1)
            break
        
        if (sub_142890300(*(arg3 + 0x20)) == 0)
            int64_t r10_1 = *(*arg1 + 0x120)
            int32_t rax_5
            
            if (r10_1 != 0)
                int64_t rdx_1 = *(arg3 + 0x20)
                rax_5 = r10_1(arg1, rdx_1, rdx_1, arg5)
            
            if (r10_1 == 0 || rax_5 != 0)
                int32_t var_18
                var_18.q = arg5
                
                if ((*(*arg1 + 0x108))(arg1, *(arg3 + 0x10), *(arg4 + 0x10), *(arg3 + 0x20), var_18)
                        != 0)
                    while (true)
                        int32_t rax_8 = sub_142890560(arg1[8])
                        
                        if (sub_142919890(*(arg2 + 0x18), rax_8 - 1, 0xffffffff, 0) == 0)
                            var_18_1 = 0x2cd
                            goto label_142953c23
                        
                        if (sub_142890300(*(arg2 + 0x18)) == 0)
                            int64_t r10_2 = *(*arg1 + 0x120)
                            int32_t rax_12
                            
                            if (r10_2 != 0)
                                int64_t rdx_4 = *(arg2 + 0x18)
                                rax_12 = r10_2(arg1, rdx_4, rdx_4, arg5)
                            
                            if ((r10_2 == 0 || rax_12 != 0) &&
                                    (*(*arg1 + 0x110))(arg1, *(arg2 + 0x20), *(arg4 + 0x10), arg5) != 0 &&
                                    (*(*arg1 + 0x110))(arg1, *(arg2 + 0x10), *(arg2 + 0x20), arg5) != 0)
                                int64_t* rcx_11 = *(arg2 + 0x10)
                                
                                if (sub_142972660(rcx_11, rcx_11, arg1[0xd]) != 0)
                                    int64_t rdx_8 = *(arg2 + 0x20)
                                    var_18.q = arg5
                                    
                                    if ((*(*arg1 + 0x108))(arg1, rdx_8, rdx_8, *(arg2 + 0x18), 
                                            var_18) != 0)
                                        int64_t rdx_9 = *(arg2 + 0x10)
                                        var_18.q = arg5
                                        
                                        if ((*(*arg1 + 0x108))(arg1, rdx_9, rdx_9, *(arg2 + 0x18), 
                                                var_18) != 0)
                                            *(arg3 + 0x28) = 0
                                            *(arg2 + 0x28) = 0
                                            return 1
                            
                            break
            
            break

return 0
