// 函数: sub_141953a70
// 地址: 0x141953a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&data_143f00520)
int32_t r8 = data_14399fa54
int32_t rbp = 0xa

for (void* i = &data_143f00570; i s< &data_143f00590; i += 0x10)
    int32_t j = 0
    
    if (data_143f00518 s> 0)
        void* i_2 = i
        
        do
            int32_t rbx_1 = *(i_2 + 8)
            int32_t rbx_2 = rbx_1 - 1
            
            if (rbx_1 - 1 s>= 0)
                int64_t r14_2 = sx.q(rbx_2) * 0x18
                int32_t temp3_1
                
                do
                    int32_t* rcx_1 = *i_2
                    
                    if (r8 - *(rcx_1 + r14_2 + 0xc) u> 0x1e)
                        int32_t rsi_1 = *(rcx_1 + r14_2)
                        
                        if (data_143efed00 == 0)
                            void* const var_68 = &data_141953f60
                            int64_t var_58_1 = 0
                            int32_t var_40_1 = rsi_1
                            void** const var_48_1 = &data_142ffb030
                            int128_t entry_zmm2
                            int128_t entry_zmm3
                            entry_zmm2, entry_zmm3 =
                                sub_14195af10(&var_68, 0, entry_zmm2, entry_zmm3)
                        else
                            EnterCriticalSection(&data_143f00548)
                            sub_14195aa70(&data_1439c78f0, rsi_1)
                            LeaveCriticalSection(&data_143f00548)
                        
                        int32_t rdx_4 = *(i_2 + 8)
                        int32_t rax_6 = rdx_4 - rbx_2 - 1
                        
                        if (rax_6 s>= 1)
                            rax_6 = 1
                        
                        if (rax_6 != 0)
                            int64_t r10_1 = *i_2
                            memcpy(r10_1 + sx.q(rbx_2) * 0x18, r10_1 + sx.q(rdx_4 - rax_6) * 0x18, 
                                rax_6 * 0x18)
                            rdx_4 = *(i_2 + 8)
                        
                        *(i_2 + 8) = rdx_4 - 1
                        sub_1405fde90(i_2)
                        r8 = data_14399fa54
                        int32_t temp4_1 = rbp
                        rbp -= 1
                        
                        if (temp4_1 == 1)
                            goto label_141953c17
                    
                    r14_2 -= 0x18
                    temp3_1 = rbx_2
                    rbx_2 -= 1
                while (temp3_1 - 1 s>= 0)
            
            if (rbp == 0)
                goto label_141953c17
            
            j += 1
            i_2 += 0x20
        while (j s< data_143f00518)
    
    if (rbp == 0)
        break

label_141953c17:
int64_t r13 = sx.q(r8 u% 3)

for (int64_t i_1 = 0; i_1 s< 2; i_1 += 1)
    int32_t j_1 = 0
    
    if (data_143f00518 s> 0)
        int64_t rcx_7 = r13 * -0x5a0
        void* rbx_6 = ((r13 * 0x5a + i_1) << 4) + &data_143f00b18
        
        do
            int64_t rdi_1 = sx.q(*rbx_6)
            
            if (rdi_1.d != 0)
                int32_t rcx_9 = *(rcx_7 - 0x5a8 + rbx_6 + 8)
                int32_t rdx_7 = rcx_9 + rdi_1.d
                
                if (rdx_7 s> *(rcx_7 - 0x5a8 + rbx_6 + 0xc))
                    sub_1405a5130(rcx_7 - 0x5a8 + rbx_6, rdx_7)
                    rcx_9 = *(rcx_7 - 0x5a8 + rbx_6 + 8)
                
                memcpy(*(rcx_7 - 0x5a8 + rbx_6) + sx.q(rcx_9) * 0x18, *(rbx_6 - 8), 
                    (rdi_1 * 0x18).d)
                *(rcx_7 - 0x5a8 + rbx_6 + 8) += rdi_1.d
            
            *rbx_6 = 0
            
            if (*(rbx_6 + 4) s<= 0xffffffff)
                sub_1405a5130(rbx_6 - 8, 0)
            
            j_1 += 1
            rbx_6 += 0x20
        while (j_1 s< data_143f00518)

return LeaveCriticalSection(&data_143f00520) __tailcall
