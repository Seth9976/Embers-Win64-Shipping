// 函数: sub_142719fb0
// 地址: 0x142719fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = arg1[1].d
char r8 = 0
int32_t rbp_1 = rbp - 1

if (rbp - 1 s>= 0)
    int64_t rsi_2 = sx.q(rbp_1) * 0x28
    int64_t r12_1 = rsi_2
    int32_t temp1_1
    
    do
        int64_t r15_1 = *arg1
        
        if (*(rsi_2 + r15_1 + 4) == *arg2[2])
            if ((*(rsi_2 + r15_1 + 0x20) & 1) != 0)
                int64_t* r9_1 = arg2[1]
                int32_t* rdi_2
                
                if (r9_1[1].d == *(r9_1 + 0x34))
                label_14271a07e:
                    rdi_2 = nullptr
                else
                    void* rdx = r9_1[8]
                    void* r8_1 = &r9_1[7]
                    int64_t r10_1 = sx.q(*(rsi_2 + r15_1))
                    
                    if (rdx != 0)
                        r8_1 = rdx
                    
                    int32_t rax_4 = *(r8_1 + (((sx.q(r9_1[9].d) - 1) & r10_1) << 2))
                    
                    if (rax_4 == 0xffffffff)
                    label_14271a07e_1:
                        rdi_2 = nullptr
                    else
                        while (true)
                            rdi_2 = sx.q(rax_4) * 0x3c + *r9_1
                            
                            if (*rdi_2 == r10_1.d)
                                break
                            
                            rax_4 = rdi_2[0xd]
                            
                            if (rax_4 == 0xffffffff)
                                goto label_14271a07e_2
                        
                        if (rax_4 == 0xffffffff)
                        label_14271a07e_2:
                            rdi_2 = nullptr
                
                sub_140d3e110(&rdi_2[1])
                void* rbx_1 = *arg2
                int32_t var_54_1 = *(rsi_2 + r15_1 + 0x18)
                int32_t var_48_1 = rdi_2[6]
                int64_t var_5c_1 = *(rsi_2 + r15_1 + 0x10)
                int64_t zmm0 = *(rdi_2 + 0x10)
                int64_t var_44_1 = 0
                int32_t var_68 = 0
                int32_t var_64_1 = 0x7f7fffff
                int32_t var_60_1 = 0xbf800000
                int64_t var_50_1 = zmm0
                char var_3c_1 = 0xff
                int64_t var_38
                sub_140b58260(&var_38, u"Invalid", 1)
                int32_t rdx_1
                rdx_1.b = *(rbx_1 + 0x2c) == 1
                int32_t var_30 = rdx_1 | (var_30 & 0xfffffff8)
                char rdx_3 = *(rbx_1 + 0x44)
                var_38 = *(rbx_1 + 0x48)
                char var_3c_2 = rdx_3
                int64_t rbx_2 = *arg2[3]
                rdi_2[0xb] |= 1
                sub_14270a6d0(sub_140d3c6e0(&rdi_2[1]), rbx_2, &var_68)
            
            int32_t rdx_7 = arg1[1].d
            int32_t rcx_11 = rdx_7 - rbp_1 - 1
            
            if (rcx_11 s>= 1)
                rcx_11 = 1
            
            if (rcx_11 != 0)
                int64_t r9_2 = *arg1
                memcpy(r12_1 + r9_2, r9_2 + sx.q(rdx_7 - rcx_11) * 0x28, rcx_11 * 0x28)
                rdx_7 = arg1[1].d
            
            r8 = 1
            arg1[1].d = rdx_7 - 1
        
        r12_1 -= 0x28
        rsi_2 -= 0x28
        temp1_1 = rbp_1
        rbp_1 -= 1
    while (temp1_1 - 1 s>= 0)

return zx.q(r8)
