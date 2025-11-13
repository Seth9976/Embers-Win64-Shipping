// 函数: sub_141f59b70
// 地址: 0x141f59b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = arg2
int64_t* r10 = arg5
int64_t rsi = sx.q(arg2)
int64_t* r11 = arg1
int32_t rax = r10[1].d + arg3
r10[1].d = rax

if (rax s> *(r10 + 0xc))
    sub_140adefe0(r10)
    r10 = arg5
    r11 = arg1

uint64_t result = zx.q(rsi.d + arg3)
int64_t r8 = sx.q(result.d)

if (rsi s< r8)
    int64_t i_1 = r8 - rsi
    int64_t r9 = rsi * 0x3c
    int64_t rdx_2 = rsi * 0x24
    int64_t var_48_1 = r9
    int64_t var_50_1 = rdx_2
    int64_t i_2 = i_1
    int64_t i
    
    do
        int16_t* rdi_2 = *r10 + rdx_2
        char* r14_1 = &rdi_2[0xc]
        
        if (rsi.d s>= r11[1].d)
            __builtin_memset(rdi_2, 0, 0x18)
            *r14_1 = 0xff
            r14_1[1] = 0
            *(rdi_2 + 0x1a) = 0
            rdi_2[0x11] = 0
        else
            int64_t j_1 = 0xc
            int32_t* rbp_2 = *r11 + r9
            result = rbp_2 - rdi_2 + 0x18
            uint64_t result_1 = result
            int64_t j
            
            do
                *rdi_2 = 0
                *r14_1 = 0
                char r9_1 = r14_1[result]
                
                if (r9_1 != 0)
                    int64_t rbx_1 = sx.q(*rbp_2)
                    int32_t* rdx_8
                    
                    if (arg4[1].d == *(arg4 + 0x34))
                    label_141f59cb8:
                        rdx_8 = nullptr
                    else
                        void* rcx_2 = arg4[8]
                        void* r8_1 = &arg4[7]
                        
                        if (rcx_2 != 0)
                            r8_1 = rcx_2
                        
                        int32_t rax_4 = *(r8_1 + (((sx.q(arg4[9].d) - 1) & rbx_1) << 2))
                        
                        if (rax_4 == 0xffffffff)
                        label_141f59cb8_1:
                            rdx_8 = nullptr
                        else
                            while (true)
                                rdx_8 = (sx.q(rax_4) << 4) + *arg4
                                
                                if (*rdx_8 == rbx_1.d)
                                    break
                                
                                rax_4 = rdx_8[2]
                                
                                if (rax_4 == 0xffffffff)
                                    goto label_141f59cb8_2
                            
                            if (rax_4 == 0xffffffff)
                            label_141f59cb8_2:
                                rdx_8 = nullptr
                    
                    void* rax_5 = &rdx_8[1]
                    
                    if (rdx_8 == 0)
                        rax_5 = nullptr
                    
                    if (rax_5 == 0)
                        int32_t* rdx_9 = *arg6
                        int64_t r8_3 = sx.q(arg6[1].d)
                        int32_t* rax_7 = rdx_9
                        int32_t* rsi_1 = r8_3 << 2
                        void* rcx_3 = rdx_9 + rsi_1
                        
                        if (rdx_9 != rcx_3)
                            while (*rax_7 != rbx_1.d)
                                rax_7 = &rax_7[1]
                                
                                if (rax_7 == rcx_3)
                                    goto label_141f59d1b
                        
                        if (rdx_9 == rcx_3 || ((rax_7 - rdx_9) s>> 2).d == 0xffffffff)
                        label_141f59d1b:
                            int32_t rax_10 = (r8_3 + 1).d
                            arg6[1].d = rax_10
                            
                            if (rax_10 s> *(arg6 + 0xc))
                                sub_1405a4cf0(arg6)
                            
                            *(rsi_1 + *arg6) = rbx_1.d
                    else
                        *rdi_2 = *rax_5
                        *r14_1 = r9_1
                    
                    result = result_1
                
                rbp_2 = &rbp_2[1]
                rdi_2 = &rdi_2[1]
                r14_1 = &r14_1[1]
                j = j_1
                j_1 -= 1
            while (j != 1)
            rsi = zx.q(arg_10)
            rdx_2 = var_50_1
            i_1 = i_2
            r9 = var_48_1
            r10 = arg5
            r11 = arg1
        
        rsi = zx.q(rsi.d + 1)
        rdx_2 += 0x24
        r9 += 0x3c
        arg_10 = rsi.d
        i = i_1
        i_1 -= 1
        var_50_1 = rdx_2
        i_2 = i_1
        var_48_1 = r9
    while (i != 1)

return result
