// 函数: sub_14194d9e0
// 地址: 0x14194d9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
void* r8 = arg1

if (data_143eff5d4 != 0)
    int64_t r14_1 = data_143f00398
    
    if (r14_1 != 0)
        int32_t i = 0
        
        if (arg3[1].d s> 0)
            int64_t r12_1 = 0
            
            do
                int32_t* rax_1 = *arg3 + r12_1
                uint64_t rdx = zx.q(*rax_1)
                int32_t rsi_1 = *(*(r8 + 0x150) + rdx * 0x28 + 0x14)
                result = *(r8 + 0x158)
                void* rcx_1 = result[rdx]
                int32_t rbp_1
                int32_t rdi_1
                
                if (rcx_1 == 0)
                    rdi_1 = 0
                    rbp_1 = 0
                else
                    rdi_1 = *(rcx_1 + 0x18)
                    rbp_1 = rdi_1
                
                int32_t var_4c_1 = rdi_1
                
                if (rsi_1 != 0)
                    int64_t rbx_1 = rsi_1.q
                    void var_58
                    int64_t rsi_2
                    
                    if (*sub_14193a790(&data_1439c7840, &var_58, rbx_1) == 0xffffffff)
                        uint64_t rcx_2 = zx.q(rsi_1)
                        int64_t rax_6
                        
                        if (rbp_1 == 0)
                            rax_6 = data_143f00390(rcx_2)
                        else
                            rax_6 = r14_1(rcx_2, zx.q(rdi_1))
                        
                        rsi_2 = rax_6
                        data_143f003a0(rax_6)
                        int32_t rdx_5 = data_1439c7874
                        int64_t rdi_2
                        
                        if (rdx_5 == 0)
                            rdi_2 = zx.q(data_1439c7848)
                            int32_t rax_8 = (rdi_2 + 1).d
                            bool cond:1_1 = rax_8 s<= data_1439c784c
                            data_1439c7848 = rax_8
                            
                            if (not(cond:1_1))
                                sub_1405a4df0(&data_1439c7840)
                            
                            sub_1405b2ba0(&data_1439c7850, 0)
                        else
                            rdi_2 = sx.q(data_1439c7870)
                            int64_t r8_3 = data_1439c7840
                            int64_t rax_7 = sx.q(*(r8_3 + rdi_2 * 0x18 + 4))
                            data_1439c7870 = rax_7.d
                            data_1439c7874 = rdx_5 - 1
                            
                            if (rdx_5 != 1)
                                *(r8_3 + rax_7 * 0x18) = 0xffffffff
                        
                        void* rax_9 = data_1439c7860
                        void* rcx_6 = &data_1439c7850
                        
                        if (rax_9 != 0)
                            rcx_6 = rax_9
                        
                        int32_t rax_10 = rdi_2.d
                        
                        if (rdi_2.d s< 0)
                            rax_10 = (rdi_2 + 0x1f).d
                        
                        void* r8_4 = rcx_6 + (sx.q(rax_10 s>> 5) << 2)
                        *r8_4 |= 1 << (rdi_2.b & 0x1f)
                        int64_t rcx_9 = sx.q(rdi_2.d) * 3
                        int64_t rax_14 = data_1439c7840
                        *(rax_14 + (rcx_9 << 3)) = rbx_1
                        *(rax_14 + (rcx_9 << 3) + 8) = rsi_2
                        int64_t* r9_1 = rax_14 + (rcx_9 << 3)
                        r9_1[2].d = 0xffffffff
                        void var_54
                        sub_141937810(&data_1439c7840, &var_54, 
                            (rbx_1 u>> 0x20).d << 0x12 ^ rbx_1.d, r9_1, rdi_2.d, nullptr)
                    else
                        int32_t arg_20
                        sub_14193a790(&data_1439c7840, &arg_20, rbx_1)
                        int64_t rax_4 = sx.q(arg_20)
                        
                        if (rax_4.d == 0xffffffff)
                            rsi_2 = *8
                        else
                            rsi_2 = *(data_1439c7840 + rax_4 * 0x18 + 8)
                    
                    result = data_143f003a8(zx.q(rax_1[1]), rsi_2)
                    r8 = arg1
                    r14_1 = data_143f00398
                
                i += 1
                r12_1 += 8
            while (i s< arg3[1].d)

return result
