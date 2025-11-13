// 函数: sub_1428f2ef0
// 地址: 0x1428f2ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t rbp = sx.q(arg5)
char* rbx = *arg1

if (rbp.d != 0)
    uint32_t rax_1 = zx.d(*rbx)
    int32_t r9 = (rbp - 1).d
    int32_t rsi_2 = rax_1 & 0x20
    int32_t rax_2 = rax_1 & 0x1f
    int32_t i_2 = 0
    void* rbx_1 = &rbx[1]
    bool cond:0_1
    
    if (rax_2 != 0x1f)
        cond:0_1 = r9 == 0
    label_1428f2fb6:
        
        if (not(cond:0_1))
            *arg3 = rax_2
            *arg4 = rax_1 & 0xc0
            
            if (r9 s>= 1)
                char rax_7 = *rbx_1
                void* rbx_2 = rbx_1 + 1
                int32_t rdi_1
                
                if (rax_7 != 0x80)
                    rdi_1 = 0
                    int32_t i = zx.d(rax_7) & 0x7f
                    
                    if (rax_7 s>= 0)
                        i_2 = i
                        goto label_1428f306d
                    
                    if (r9 - 1 s>= i + 1)
                        if (i != 0)
                            while (*rbx_2 == 0)
                                rbx_2 += 1
                                i -= 1
                                
                                if (i s<= 0)
                                    break
                        
                        if (i s<= 4)
                            if (i s<= 0)
                                goto label_1428f306d
                            
                            do
                                uint32_t rax_9 = zx.d(*rbx_2)
                                i -= 1
                                rbx_2 += 1
                                i_2 = i_2 << 8 | rax_9
                            while (i s> 0)
                            
                            if (i_2 u<= 0x7fffffff)
                                goto label_1428f306d
                else
                    rdi_1 = 1
                label_1428f306d:
                    *arg2 = i_2
                    
                    if (rdi_1 == 0 || rsi_2 != 0)
                        if (sx.q(i_2) s> rbp - rbx_2 + *arg1)
                            sub_1428a5670(0xd, 0x72, 0x9b, "crypto\asn1\asn1_lib.c", 0x5b)
                            rsi_2 |= 0x80
                        
                        *arg1 = rbx_2
                        return zx.q(rdi_1) | zx.q(rsi_2)
    else if (r9 != 0)
        char i_1 = *rbx_1
        int32_t rdx = 0
        
        for (; i_1 s< 0; i_1 = *rbx_1)
            rbx_1 += 1
            rdx = (zx.d(i_1) & 0x7f) | rdx << 7
            int32_t temp1_1 = r9
            r9 -= 1
            
            if (temp1_1 == 1)
                goto label_1428f3047
            
            if (rdx s> 0xffffff)
                goto label_1428f3047
        
        rbx_1 += 1
        rax_2 = (zx.d(i_1) & 0x7f) | rdx << 7
        int32_t temp0_1 = r9
        r9 -= 1
        cond:0_1 = temp0_1 == 1
        goto label_1428f2fb6

label_1428f3047:
sub_1428a5670(0xd, 0x72, 0x7b, "crypto\asn1\asn1_lib.c", 0x65)
return 0x80
