// 函数: sub_141e32290
// 地址: 0x141e32290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = *arg1
int32_t r13 = *(result + 0x198)

if (r13 s> 0)
    int32_t rbx_1 = arg1[0x24].d
    int32_t rbx_2 = rbx_1 - 1
    int128_t zmm6
    int128_t var_38_1 = zmm6
    int64_t var_68
    
    if (rbx_1 - 1 s>= 0)
        void*** r14_1 = sx.q(rbx_2) * 0xb8
        void*** rsi_1 = r14_1
        void* r15_1 = sx.q(rbx_2 + 1) * 0xb8
        int32_t temp1_1
        
        do
            void* rbp_1 = r14_1 + arg1[0x23]
            sub_141e43460(rbp_1)
            int32_t zmm0_2
            int32_t zmm7_1
            zmm0_2, zmm6, zmm7_1 = sub_141e40fb0(rbp_1)
            
            if (zmm7_1 f<= zmm6.d || zmm7_1 f> zmm0_2)
                result.b = 0
            else
                result.b = 1
            
            if (result.b == 0)
                int64_t rcx_4 = *(sub_140d3c6e0(&arg1[0x21]) + 0x20)
                int64_t rax_3 = *arg1
                var_68 = rcx_4
                int64_t* rcx_5 = *(rbp_1 + 0x50)
                int64_t var_60_1 = rax_3
                void* var_58_1 = rbp_1
                int32_t var_50_1 = arg1[0x22].d
                (*(*rcx_5 + 0x290))(rcx_5, &var_68)
                int64_t rax_6 = arg1[0x23]
                *(rsi_1 + rax_6 + 0x60) = &data_142e0b890
                *(rsi_1 + rax_6) = &data_142e0b890
                int32_t rax_7 = arg1[0x24].d
                int32_t rdx_3 = rax_7 - rbx_2
                
                if (rdx_3 != 1)
                    void* rcx_6 = arg1[0x23]
                    memmove(rcx_6 + rsi_1, r15_1 + rcx_6, (rdx_3 - 1) * 0xb8)
                    rax_7 = arg1[0x24].d
                
                arg1[0x24].d = rax_7 - 1
                result = sub_140aff040(&arg1[0x23])
            
            r15_1 -= 0xb8
            rsi_1 -= 0xb8
            r14_1 -= 0xb8
            temp1_1 = rbx_2
            rbx_2 -= 1
        while (temp1_1 - 1 s>= 0)
    
    if (r13 s> 0)
        int64_t rbp_2 = 0
        
        while (true)
            void* rdx_6 = *arg1
            result = *(rdx_6 + 0x190)
            void* rbx_4 = sx.q(*(result + (rbp_2 << 2))) * 0xb8 + *(rdx_6 + 0x80)
            sub_141e43460(rbx_4)
            int32_t zmm0_4
            int32_t zmm7_2
            zmm0_4, zmm6, zmm7_2 = sub_141e40fb0(rbx_4)
            
            if (not(zmm7_2 f<= zmm6.d) && not(zmm7_2 f> zmm0_4))
                void* rcx_12 = arg1[0x23]
                void* r8_3 = sx.q(arg1[0x24].d) * 0xb8 + rcx_12
                
                if (rcx_12 == r8_3)
                label_141e324ba:
                    result.b = 0
                else
                    while (true)
                        result = *(rcx_12 + 0x48)
                        
                        if (result == 0 || result != *(rbx_4 + 0x48))
                            int64_t rdx_7 = *(rcx_12 + 0x50)
                            
                            if ((rdx_7 == 0 || rdx_7 != *(rbx_4 + 0x50)) && (result != 0
                                    || rdx_7 != 0 || *(rcx_12 + 0x40) != *(rbx_4 + 0x40)))
                                rcx_12 += 0xb8
                                
                                if (rcx_12 == r8_3)
                                    goto label_141e324ba
                                
                                continue
                        
                        result.b = 1
                        break
                
                if (result.b == 0)
                    int64_t rcx_14 = *(sub_140d3c6e0(&arg1[0x21]) + 0x20)
                    int64_t rax_11 = *arg1
                    var_68 = rcx_14
                    int64_t* rcx_15 = *(rbx_4 + 0x50)
                    int64_t var_60_2 = rax_11
                    void* var_58_2 = rbx_4
                    int32_t var_50_2 = arg1[0x22].d
                    (*(*rcx_15 + 0x280))(rcx_15, &var_68)
                    int64_t rsi_2 = sx.q(arg1[0x24].d)
                    int32_t rax_14 = (rsi_2 + 1).d
                    arg1[0x24].d = rax_14
                    
                    if (rax_14 s> *(arg1 + 0x124))
                        sub_14092f900(&arg1[0x23])
                    
                    result = sub_141df22d0(rsi_2 * 0xb8 + arg1[0x23], rbx_4)
            
            rbp_2 += 1
            
            if (rbp_2 s>= sx.q(r13))
                break

return result
