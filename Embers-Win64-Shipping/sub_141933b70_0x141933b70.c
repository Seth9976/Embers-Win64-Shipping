// 函数: sub_141933b70
// 地址: 0x141933b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_20 = arg4
int64_t r10 = sx.q(arg3)
int64_t* rbp = arg4
int64_t r9 = arg1
int64_t* r13_1 = r10 * 0xb8 + arg2
char r8 = *(r13_1 + 0x9b)
uint64_t arg_10

if (*(r13_1 + 0x9d) == 0)
    void* r14_4 = r10 * 0x30 + arg2
    void* var_60_1 = r14_4
    int32_t j_3 = 0
    int32_t j_2 = 0
    int32_t i = 0
    
    if (r8 != 0)
        int64_t* r12_2 = arg5
        int64_t r8_5 = 0
        int64_t var_58_2 = 0
        uint64_t r11_1 = 0
        arg_10 = 0
        int32_t* r10_1 = nullptr
        int32_t* var_68_1 = nullptr
        
        do
            void* rbp_3 = *rbp
            int64_t rax_11 = *(r14_4 + 0x4e8)
            int32_t rcx_6 = *(rbp_3 + 0x38)
            
            if (*(r10_1 + rax_11) != rcx_6)
                *(r10_1 + rax_11) = rcx_6
                int32_t j = j_3
                int64_t rsi_2 = r8_5
                
                if (j_3 s< r12_2[1].d)
                    int64_t rbx_4 = r8_5 * 0xa
                    
                    do
                        int16_t* r8_7 = *r12_2 + rbx_4
                        uint32_t rax_12 = zx.d(r8_7[1].b)
                        
                        if (rax_12 == i)
                            memcpy(*(r9 + (zx.q(*(r8_7 + 5)) << 3) + 0x50) + (zx.q(r8_7[3]) << 2), 
                                *(*(rbp_3 + 0x50) + 0x10) + (zx.q(*r8_7) << 2), zx.d(r8_7[4]) << 2)
                            r9 = arg1
                        else if (rax_12 s> i)
                            j_2 = j
                            var_58_2 = rsi_2
                            break
                        
                        j += 1
                        rsi_2 += 1
                        rbx_4 += 0xa
                    while (j s< r12_2[1].d)
                    
                    r10_1 = var_68_1
                    r11_1 = arg_10
                
                int32_t j_1 = 0
                int64_t* r14_6 = *(r14_4 + 0x4d8) + r11_1
                
                if (r14_6[1].d s> 0)
                    int64_t rsi_3 = 0
                    int32_t* rbx_5 = nullptr
                    
                    do
                        int64_t rax_17 = *r14_6
                        int32_t r10_2 = *(rbx_5 + rax_17)
                        
                        if (r10_2 s>= 0)
                            uint64_t r9_3 = zx.q(*(rbx_5 + rax_17 + 5))
                            int64_t r8_10 = *(arg1 + (r9_3 << 3) + 0x50)
                            uint32_t rdx_7 = zx.d(*(*(*r13_1 + r11_1) + rsi_3)) u>> 4
                            
                            if (r9_3.b u<= 2)
                                if (data_143eff5c6 == 0)
                                    data_143effec0(zx.q(r10_2))
                                else
                                    data_143f004a0(zx.q(r13_1[0x16].d), zx.q(r10_2), zx.q(rdx_7), 
                                        r8_10, var_68_1, var_60_1, var_58_2)
                                
                                r11_1 = arg_10
                            else if (r9_3.b == 3)
                                if (data_143eff5c6 == 0)
                                    data_143effee0(zx.q(r10_2))
                                else
                                    data_143f00498(zx.q(r13_1[0x16].d), zx.q(r10_2), zx.q(rdx_7), 
                                        r8_10, var_68_1, var_60_1, var_58_2)
                                
                                r11_1 = arg_10
                            else if (r9_3.b == 4)
                                if (data_143eff5c6 == 0)
                                    data_143efff00(zx.q(r10_2))
                                else
                                    data_143f004a8(zx.q(r13_1[0x16].d), zx.q(r10_2), zx.q(rdx_7), 
                                        r8_10, var_68_1, var_60_1, var_58_2)
                                
                                r11_1 = arg_10
                        
                        j_1 += 1
                        rbx_5 = &rbx_5[2]
                        rsi_3 += 4
                    while (j_1 s< r14_6[1].d)
                    
                    r12_2 = arg5
                    r10_1 = var_68_1
                
                r14_4 = var_60_1
            
            r10_1 = &r10_1[1]
            rbp = &arg_20[1]
            r8_5 = var_58_2
            r11_1 += 0x10
            r9 = arg1
            i += 1
            j_3 = j_2
            arg_20 = rbp
            var_68_1 = r10_1
            arg_10 = r11_1
        while (i s< zx.d(*(r13_1 + 0x9b)))
else
    uint64_t r9_1 = 0
    arg_10 = 0
    int32_t i_1 = 0
    
    if (r8 != 0)
        int64_t r12_1 = 0
        
        do
            int32_t rsi_1 = r9_1.d
            int64_t rbp_1 = r12_1
            int64_t rdx = *(*(*rbp + 0x50) + 0x10)
            int64_t var_58_1 = rdx
            
            if (r9_1.d s< arg5[1].d)
                int64_t rbx_2 = r12_1 * 0xa
                
                while (true)
                    int16_t* rdi_2 = *arg5 + rbx_2
                    
                    if (zx.d(rdi_2[1].b) != i_1)
                        r9_1 = zx.q(rsi_1)
                        r12_1 = rbp_1
                        arg_10 = r9_1
                        break
                    
                    memcpy(*(arg1 + (zx.q(*(rdi_2 + 5)) << 3)) + (zx.q(rdi_2[3]) << 2), 
                        rdx + (zx.q(*rdi_2) << 2), zx.d(rdi_2[4]) << 2)
                    uint32_t rax_8 = (zx.d(rdi_2[4]) + 3) u>> 2
                    void* r9_2 = arg1 + (zx.q(*(rdi_2 + 5)) << 3)
                    uint32_t r8_4 = zx.d(rdi_2[3]) u>> 2
                    int32_t rdx_3 = *(r9_2 + 0x2c)
                    
                    if (rdx_3 != 0)
                        uint32_t rcx_5 = *(r9_2 + 0x28)
                        uint32_t rax_9 = rax_8 + r8_4
                        uint32_t rdx_4 = rdx_3 + rcx_5
                        
                        if (rcx_5 u<= r8_4)
                            r8_4 = rcx_5
                        
                        if (rdx_4 u>= rax_9)
                            rax_9 = rdx_4
                        
                        rax_8 = rax_9 - r8_4 + 1
                    
                    rdx = var_58_1
                    rsi_1 += 1
                    rbp_1 += 1
                    *(r9_2 + 0x28) = r8_4
                    rbx_2 += 0xa
                    *(r9_2 + 0x2c) = rax_8
                    
                    if (rsi_1 s>= arg5[1].d)
                        r9_1 = arg_10
                        break
            
            i_1 += 1
            rbp = &arg_20[1]
            arg_20 = rbp
        while (i_1 s< zx.d(*(r13_1 + 0x9b)))
