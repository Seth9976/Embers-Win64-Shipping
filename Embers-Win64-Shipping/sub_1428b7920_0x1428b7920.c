// 函数: sub_1428b7920
// 地址: 0x1428b7920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (*arg1 != 0 || arg2 != 0)
    int64_t rcx = *arg3
    int64_t rax_1 = *arg4
    
    if (rcx u<= rax_1)
        if (arg2 == 0 || rcx != rax_1)
            goto label_1428b7a1e
        
        if (rax_1 u<= 0x7ffffbff)
            *arg4 = rax_1 + 0x400
            int64_t rcx_1 = *arg2
            
            if (rcx_1 != 0)
                int64_t rax_5 = sub_1428a67c0(rcx_1, rax_1 + 0x400, "crypto\bio\b_print.c", 0x342)
                
                if (rax_5 != 0)
                    *arg2 = rax_5
                label_1428b7a1e:
                    char* rcx_5 = *arg3
                    
                    if (rcx_5 u< *arg4)
                        int64_t rax_6 = *arg1
                        
                        if (rax_6 == 0)
                            rax_6 = *arg2
                        
                        rcx_5[rax_6] = arg5
                        *arg3 += 1
                    
                    return 1
            else
                int64_t rax_3 = sub_1428a6730(rax_1 + 0x400)
                *arg2 = rax_3
                
                if (rax_3 != 0)
                    int64_t r8_2 = *arg3
                    
                    if (r8_2 == 0)
                        goto label_1428b79f8
                    
                    int64_t rdx_1 = *arg1
                    
                    if (rdx_1 != 0)
                        memcpy(rax_3, rdx_1, r8_2.d)
                    label_1428b79f8:
                        *arg1 = 0
                        goto label_1428b7a1e
                else
                    sub_1428a5670((rax_3 + 0x20).d, 0x96, (rax_3 + 0x41).d, "crypto\bio\b_print.c", 
                        0x337)

return 0
