// 函数: sub_140d9f5a0
// 地址: 0x140d9f5a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = arg2

if (arg2 == arg3)
    int64_t rax
    rax.b = 2
    return rax

int32_t r8 = arg1[0xb].d
int64_t rdx = 0
int32_t rax_2 = r11 - r8
int32_t* r9

if (r11 - r8 s< 0 || rax_2 s>= arg1[0xd].d)
    r9 = nullptr
else
    r9 = arg1[0xc] + sx.q(rax_2) * 0x18

int32_t rax_6 = arg3 - r8
uint64_t rax_7 = zx.q(rax_6 - 1)

if (rax_6 - 1 s>= 0 && rax_7.d s< arg1[0xd].d)
    rdx = arg1[0xc] + sx.q(rax_7.d) * 0x18

if (r9 != 0)
    int64_t r10_1 = sx.q(*r9)
    
    if (r10_1.d != 0xffffffff)
        if (rdx == 0 || *rdx == 0xffffffff)
            void* rcx_3 = r10_1 * 0x68 + *arg1
            
            if (zx.d(*(rcx_3 + 0x21)) + *(rcx_3 + 0x14) == arg3)
                rdx = r9
        
        if (rdx != 0)
            int32_t r8_1 = *rdx
            
            if (r8_1 != 0xffffffff)
                int32_t rbp
                
                if (r10_1.d s> r8_1)
                    rbp = r8_1
                    
                    if (r9[4] s<= 0)
                        r8_1 = r10_1.d
                    else
                        r8_1 = *(*(r9 + 8) + (sx.q(r9[4]) << 2) - 4)
                else
                    rbp = r10_1.d
                    
                    if (*(rdx + 0x10) s> 0)
                        r8_1 = *(*(rdx + 8) + (sx.q(*(rdx + 0x10)) << 2) - 4)
                
                int32_t rcx_6 = arg1[0xb].d
                uint64_t rdi
                rdi.b = rcx_6 == r11
                int64_t rsi = sx.q(rbp)
                int64_t r13 = sx.q(r8_1)
                uint64_t rbx
                rbx.b = rcx_6 + *(arg1 + 0x5c) == arg3
                int32_t rax_12
                
                if (rsi s<= r13)
                    int64_t r14_1 = rsi * 0x68
                    
                    do
                        void* rdx_2 = *arg1 + r14_1
                        
                        if (rdi.b == 0 || rbx.b == 0)
                            int32_t rcx_8 = *(rdx_2 + 0x14)
                            
                            if (rdi.b == 0)
                                rdi = zx.q(rdi.b)
                                
                                if (rcx_8 == r11)
                                    rdi = 1
                            
                            if (rbx.b == 0)
                                rbx = zx.q(rbx.b)
                                
                                if (zx.d(*(rdx_2 + 0x21)) + rcx_8 == arg3)
                                    rbx = 1
                        
                        int32_t arg_18 = rbp
                        
                        if ((*arg4)(*(arg4 + 8), rdx_2, &arg_18).b == 0)
                            rax_12.b = 1
                            goto label_140d9f778
                        
                        r11 = arg2
                        rbp += 1
                        rsi += 1
                        r14_1 += 0x68
                    while (rsi s<= r13)
                
                if (rdi.b == 0 || rbx.b == 0)
                    return 0
                
                rax_12.b = 2
            label_140d9f778:
                return rax_12

rax_7.b = 0
return rax_7
