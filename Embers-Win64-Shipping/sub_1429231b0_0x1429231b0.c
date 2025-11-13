// 函数: sub_1429231b0
// 地址: 0x1429231b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int64_t r15 = sx.q(arg2)
char rbx = 1
char* r14 = nullptr
int32_t rcx
int32_t r8_1

if (sub_142890300(arg1) != 0)
    char* rax_1 = sub_1428a6730(1)
    r14 = rax_1
    
    if (rax_1 != 0)
        *rax_1 = 0
        *arg3 = 1
        return rax_1
    
    rcx = 0x21
    r8_1 = 0x41
else if ((r15 - 1).d u> 6)
    rcx = 0x2b
    r8_1 = 0x44
else
    int32_t rdi_1 = 1 << r15.b
    int32_t rbp_1 = rdi_1 * 2
    
    if (sub_142890280(arg1) != 0)
        rbx = -1
    
    if (*arg1 == 0 || arg1[1].d == 0)
        rcx = 0x37
        r8_1 = 0x44
    else
        int64_t r13_1 = sx.q(sub_142890560(arg1))
        char* rax_6 = sub_1428a6730(r13_1 + 1)
        r14 = rax_6
        
        if (rax_6 != 0)
            int32_t rdx_2 = rbp_1 - 1
            int32_t rbx_2 = **arg1 & rdx_2
            char* rsi_1 = nullptr
            
            while (true)
                void* rcx_5 = &rsi_1[r15]
                
                if (rbx_2 == 0 && rcx_5 + 1 u>= r13_1)
                    if (rsi_1 u<= r13_1 + 1)
                        *arg3 = rsi_1
                        return r14
                    
                    rcx = 0x82
                    break
                
                int32_t rax_9 = 0
                
                if ((rbx_2.b & 1) != 0)
                    rax_9 = rbx_2
                    
                    if ((rdi_1 & rbx_2) != 0)
                        rax_9 -= rbp_1
                        
                        if (rcx_5 + 1 u>= r13_1)
                            rax_9 = rdx_2 s>> 1 & rbx_2
                    
                    if (rax_9 s<= neg.d(rdi_1) || rax_9 s>= rdi_1 || (rax_9.b & 1) == 0)
                        rcx = 0x65
                        break
                    
                    int32_t temp0_1 = rbx_2
                    rbx_2 -= rax_9
                    
                    if (temp0_1 != rax_9 && rbx_2 != rbp_1 && rbx_2 != rdi_1)
                        rcx = 0x71
                        break
                
                *(rsi_1 + r14) = rbx * rax_9.b
                rsi_1 = &rsi_1[1]
                rbx_2 = (rbx_2 s>> 1) + sub_142890240(arg1, (&rsi_1[r15]).d) * rdi_1
                
                if (rbx_2 s> rbp_1)
                    rcx = 0x7c
                    break
                
                rdx_2 = rbp_1 - 1
            
            r8_1 = 0x44
        else
            rcx = (&rax_6[0x42]).d
            r8_1 = (&rax_6[0x41]).d

sub_1428a5670(3, 0x8e, r8_1, "crypto\bn\bn_intern.c", rcx)
sub_1428a6780(r14)
return nullptr
