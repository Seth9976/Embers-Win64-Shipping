// 函数: sub_1428a1b60
// 地址: 0x1428a1b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
uint64_t result = *(arg1 + 0x20)

if ((*(result + 0x14) & 0x2000) != 0)
    result = *(arg1 + 0xb8)
    
    if (test_bit(*(result + 0xd0) | *(arg4 + 0x7c), 0xc))
        void* r15_1 = nullptr
        int32_t rbp_1 = 0
        result = sub_142898c70(arg5)
        
        if (result.d s<= 0)
        label_1428a1c8f:
            *arg2 = 0
        else
            while (true)
                void* rax = sub_142898ea0(arg5, rbp_1)
                
                if (*(rax + 0xa0) != 0 && *(arg4 + 0x98) != 0)
                    void* rax_1 = sub_142891590(rax)
                    int32_t rax_3 = sub_1428a32a0(sub_142891590(arg4), rax_1)
                    
                    if (rax_3 == 0 && sub_1428a12c0(rax, arg4, rax_3 + 0x5a) != 0
                            && sub_1428a12c0(rax, arg4, 0x302) != 0
                            && sub_1428e47f0(*(rax + 0xa0), *(arg4 + 0x98)) s<= 0
                            && sub_1428e47f0(*(rax + 0x98), *(arg4 + 0x98)) s> 0)
                        void* rax_8 = *(arg1 + 0x20)
                        int32_t rcx_10 = *(rax_8 + 0x14)
                        
                        if ((rcx_10.b & 2) == 0)
                            if (not(test_bit(rcx_10, 0x15)))
                                goto label_1428a1cdc
                            
                            *arg3 |= 2
                        else
                            r15_1 = rax_8 + 8
                        label_1428a1cdc:
                            
                            if (sub_14289e600(sub_1427ec4a0(rax), r15_1) s<= 0xffffffff)
                                if (sub_142896660(rax) == 0)
                                    *arg3 |= 2
                                else
                                    int32_t rax_13 = sub_14289e600(sub_142896660(rax), r15_1)
                                    
                                    if (rax_13 != 0 && (rax_13 s>= 0 || (*(arg1 + 0xd0) & 2) != 0))
                                        *arg3 |= 2
                        
                        result = sub_1428e46f0(rax)
                        *arg2 = rax
                        break
                
                rbp_1 += 1
                result = sub_142898c70(arg5)
                
                if (rbp_1 s>= result.d)
                    goto label_1428a1c8f

return result
