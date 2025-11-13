// 函数: sub_1429d47a0
// 地址: 0x1429d47a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx
int64_t var_8 = rbx
int32_t* rax = *(arg1 + 8)

if (*(arg1 + 0x24) == 0)
    int32_t i = 0
    
    if (*rax s> 0)
        char* r12_1 = nullptr
        int64_t r13
        int64_t arg_18 = r13
        
        do
            int64_t rax_16 = *(arg1 + 0x58)
            int32_t rbp_1 = *(rax_16 + (r12_1 << 3))
            int32_t* r11_2 = *(arg1 + 0x78) + (sx.q(*(rax_16 + (r12_1 << 3) + 4)) << 2)
            char r15_1 = not.b(r12_1[*(arg1 + 0x198)]) & 1
            bool cond:1_1
            
            if (r15_1 != 0)
                cond:1_1 = rbp_1 s> 4
            label_1429d4994:
                r13.b = cond:1_1
                int32_t rbx_2 = 0
                
                if (rbp_1 s> 0)
                    do
                        int64_t rdx_14 = sx.q(*r11_2)
                        
                        if (rdx_14.d != 0xffffffff)
                            int32_t rax_26 = rbx_2
                            
                            if (r13.b != 0)
                                rax_26 = 0
                            
                            *(rdx_14 + *(arg1 + 0x150)) = arg2[sx.q(rax_26) + (zx.q(r15_1) << 2)]
                            *(*(arg1 + 0x108) + (sx.q(*r11_2) << 2)) = i
                        
                        rbx_2 += 1
                        r11_2 = &r11_2[1]
                    while (rbx_2 s< rbp_1)
            else
                cond:1_1 = rbp_1 s> 4
                
                if (rbp_1 != 4)
                    goto label_1429d4994
                
                *(sx.q(*r11_2) + *(arg1 + 0x150)) = *arg2
                *(sx.q(r11_2[1]) + *(arg1 + 0x150)) = arg2[1]
                *(sx.q(r11_2[2]) + *(arg1 + 0x150)) = arg2[2]
                *(sx.q(r11_2[3]) + *(arg1 + 0x150)) = arg2[3]
                *(*(arg1 + 0x108) + (sx.q(*r11_2) << 2)) = i
                *(*(arg1 + 0x108) + (sx.q(r11_2[1]) << 2)) = i
                *(*(arg1 + 0x108) + (sx.q(r11_2[2]) << 2)) = i
                *(*(arg1 + 0x108) + (sx.q(r11_2[3]) << 2)) = i
            rax = *(arg1 + 8)
            i += 1
            r12_1 = &r12_1[1]
        while (i s< *rax)
else
    int32_t i_1 = 0
    
    if (*rax s> 0)
        int64_t r8_1 = sx.q(*(arg1 + 0x40))
        int32_t* r14_1 = nullptr
        int32_t* rax_14
        
        do
            int32_t r11_1 = *(r14_1 + *(arg1 + 0x58))
            
            if (r11_1 != 4)
                rbx.b = r11_1 s> 4
                int32_t r9_1 = 0
                
                if (r11_1 s> 0)
                    do
                        int32_t rax_10 = r9_1
                        
                        if (rbx.b != 0)
                            rax_10 = 0
                        
                        r9_1 += 1
                        *(r8_1 + *(arg1 + 0x150)) = *(sx.q(rax_10) + arg2)
                        *(*(arg1 + 0x108) + (r8_1 << 2)) = i_1
                        r8_1 += 1
                    while (r9_1 s< r11_1)
            else
                *(r8_1 + *(arg1 + 0x150)) = *arg2
                *(r8_1 + *(arg1 + 0x150) + 1) = arg2[1]
                *(r8_1 + *(arg1 + 0x150) + 2) = arg2[2]
                *(r8_1 + *(arg1 + 0x150) + 3) = arg2[3]
                *(*(arg1 + 0x108) + (r8_1 << 2)) = i_1
                *(*(arg1 + 0x108) + (r8_1 << 2) + 4) = i_1
                *(*(arg1 + 0x108) + (r8_1 << 2) + 8) = i_1
                *(*(arg1 + 0x108) + (r8_1 << 2) + 0xc) = i_1
                r8_1 += 4
            
            rax_14 = *(arg1 + 8)
            i_1 += 1
            r14_1 = &r14_1[2]
        while (i_1 s< *rax_14)
        
        return rax_14

return rax
