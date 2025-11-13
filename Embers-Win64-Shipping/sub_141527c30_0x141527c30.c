// 函数: sub_141527c30
// 地址: 0x141527c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_18 = arg3
arg2[1].d = 0

if (*(arg2 + 0xc) != 0)
    sub_1405dadb0(arg2, 0)
    arg3 = arg_18

int32_t i = 1
int32_t i_1 = 1

if (*(arg1 + 0x18) s> 1)
    int32_t* r10_1 = 4
    int64_t* r15_1 = 8
    int32_t* arg_10 = 4
    
    do
        int64_t r9_1 = *(arg1 + 0x28)
        int32_t j = 0
        
        if (*(r10_1 + r9_1) s> 0)
            int32_t* rsi_1 = nullptr
            
            do
                int64_t rdx_1 = *(arg1 + 0x20)
                int64_t rdi_1 = sx.q(*(rsi_1 + *(r15_1 + rdx_1)))
                
                if (rdi_1.d s>= 0)
                    if (arg3 == 0 || *(rsi_1 + *(*(arg1 + 0xa8) + r15_1)) s>= 0)
                        int64_t rbp = sx.q(arg2[1].d)
                        int32_t* r13_1 = *(*(arg1 + 0xa8) + r15_1)
                        int32_t rax_4 = (rbp + 1).d
                        arg2[1].d = rax_4
                        
                        if (rax_4 s> *(arg2 + 0xc))
                            sub_1405a4cf0(arg2)
                            r10_1 = arg_10
                        
                        *(*arg2 + (rbp << 2)) = *(r13_1 + rsi_1)
                        rdx_1 = *(arg1 + 0x20)
                        i = i_1
                    
                    *(rsi_1 + *(r15_1 + rdx_1)) = not.d(rdi_1.d)
                    int64_t r8 = *(arg1 + 0x28)
                    int64_t r11_1 = *(arg1 + 0x20)
                    int32_t r10_2 = 0
                    int32_t rdx_2 = *(*(r15_1 + r11_1) + (sx.q(*(r10_1 + r8) + j) << 2))
                    
                    if (rdx_2 != *(r8 + (rdi_1 << 2)) - 1)
                        r10_2 = rdx_2 + 1
                    
                    do
                        int64_t r8_1 = sx.q(rdi_1.d)
                        int64_t rcx_9 = sx.q(r10_2)
                        int64_t rax_11 = *(r11_1 + (r8_1 << 3))
                        rdi_1 = sx.q(*(rax_11 + (rcx_9 << 2)))
                        *(rax_11 + (rcx_9 << 2)) = not.d(rdi_1.d)
                        r9_1 = *(arg1 + 0x28)
                        r11_1 = *(arg1 + 0x20)
                        int32_t rax_15 = *(r9_1 + (r8_1 << 2)) + r10_2
                        r10_2 = 0
                        int32_t rdx_4 = *(*(r11_1 + (r8_1 << 3)) + (sx.q(rax_15) << 2))
                        
                        if (rdx_4 != *(r9_1 + (rdi_1 << 2)) - 1)
                            r10_2 = rdx_4 + 1
                    while (rdi_1.d != i)
                    
                    r10_1 = arg_10
                
                arg3 = arg_18
                j += 1
                rsi_1 = &rsi_1[1]
            while (j s< *(r10_1 + r9_1))
        
        arg3 = arg_18
        i += 1
        r10_1 = &r10_1[1]
        i_1 = i
        r15_1 = &r15_1[1]
        arg_10 = r10_1
    while (i s< *(arg1 + 0x18))

return sub_1415282a0(arg1) __tailcall
