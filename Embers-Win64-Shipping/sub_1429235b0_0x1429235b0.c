// 函数: sub_1429235b0
// 地址: 0x1429235b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)
char* r10 = arg3

if (arg5 s>= 0xb)
    if (arg5 != arg4)
        goto label_142923612
    
    char rax_1 = *r10
    r10 = &r10[1]
    
    if (rax_1 == 0)
        arg4 -= 1
    label_142923612:
        
        if (arg5 == arg4 + 1)
            void* r10_1 = &r10[1]
            
            if (*r10 == 1)
                int32_t rcx = 0
                
                if (arg4 - 1 s<= 0)
                    goto label_142923647
                
                char rax_5
                
                while (true)
                    rax_5 = *r10_1
                    
                    if (rax_5 != 0xff)
                        break
                    
                    r10_1 += 1
                    rcx += 1
                    
                    if (rcx s>= arg4 - 1)
                        goto label_142923647
                
                int32_t var_18
                int32_t r8_1
                
                if (rax_5 != 0)
                    var_18 = 0x58
                    r8_1 = 0x66
                else
                    r10_1 += 1
                label_142923647:
                    
                    if (rcx == arg4 - 1)
                        var_18 = 0x61
                        r8_1 = 0x71
                    else if (rcx s>= 8)
                        uint32_t count = arg4 - 1 + 0xffffffff - rcx
                        
                        if (count s<= arg2)
                            memcpy(arg1, r10_1, count)
                            return zx.q(count)
                        
                        var_18 = 0x6d
                        r8_1 = 0x6d
                    else
                        var_18 = 0x67
                        r8_1 = 0x67
                
                sub_1428a5670(4, 0x70, r8_1, "crypto\rsa\rsa_pk1.c", var_18)
                return 0xffffffff
        
        sub_1428a5670(4, 0x70, 0x6a, "crypto\rsa\rsa_pk1.c", 0x4b)
        return 0xffffffff
    
    sub_1428a5670(4, 0x70, 0x8a, "crypto\rsa\rsa_pk1.c", 0x43)

return 0xffffffff
