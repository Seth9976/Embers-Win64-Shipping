// 函数: sub_141edc820
// 地址: 0x141edc820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax_1

if ((*(*arg1 + 0x5c0))().b != 0)
    void* rbp_1 = arg1[0x97]
    
    if (rbp_1 == 0)
        void* rax_3 = (*(arg1[0x28] + 0x28))(&arg1[0x28])
        rbp_1 = rax_3
        arg1[0x97] = rax_3
    
    rax_1 = zx.q(*(rbp_1 + 0xa0))
    
    if ((rax_1.b & 1) != 0)
        int32_t i = 0
        *(rbp_1 + 0xa0) = rax_1.d & 0xfffffffe
        int64_t* rcx_1 = *(arg1[0x29] + 0x130)
        
        if (rcx_1 != 0)
            char arg_8 = 0
            rax_1 = (*(*rcx_1 + 0x3e8))(rcx_1, 0)
        
        if (rcx_1 == 0 || rax_1.b == 0)
            if (*(rbp_1 + 0x20) != 0)
                void* rbx = &arg1[0x9b]
                char r13 = arg1[0xb4].b
                int128_t zmm6 = *(arg1 + 0x28c)
                int128_t zmm7 = *(arg1 + 0x5a4)
                int128_t zmm8 = *(arg1 + 0x5b0)
                int128_t zmm9 = *(arg1 + 0x5c0)
                int128_t zmm10 = *(arg1 + 0x5d0)
                void** var_c8
                sub_141ed2ac0(&var_c8, rbx)
                void* rdx_4 = arg1[0x29]
                int32_t rax_7 = 0
                char rdi = arg1[0x71].b
                char r12 = *(arg1 + 0x1f1)
                int32_t rcx_4 = *(rdx_4 + 0x330)
                
                if (arg1[0x2d].b == 3)
                    rax_7 = 0x10
                
                *(rdx_4 + 0x330) = rax_7 | (rcx_4 & 0xffffffef)
                void* rax_9 = arg1[0x29]
                *(rax_9 + 0x330) |= 8
                *(arg1 + 0x1f1) |= 8
                
                if (*(rbp_1 + 0x20) s> 0)
                    int64_t r13_1 = 0
                    
                    do
                        int64_t* rsi_2 = *(*(rbp_1 + 0x18) + r13_1)
                        (*(*rsi_2 + 0x48))(rsi_2, arg1[0x29])
                        int64_t rdi_2 = *arg1 + 0x998
                        char rax_13 = (*(*rsi_2 + 0x50))(rsi_2)
                        int512_t zmm2
                        zmm2.o = rsi_2[4].d
                        int512_t zmm1
                        zmm1.o = *(rsi_2 + 0x1c)
                        (*rdi_2)(arg1, zmm1, zmm2, zx.q(rax_13), &rsi_2[0x3d])
                        (*(*rsi_2 + 0x30))(rsi_2, arg1[0x29], 1)
                        i += 1
                        r13_1 += 0x10
                    while (i s< *(rbp_1 + 0x20))
                    
                    rbx = &arg1[0x9b]
                
                void* rax_15 = *(rbp_1 + 0x38)
                
                if (rax_15 != 0)
                    *(rax_15 + 0x18) |= 8
                
                *(arg1 + 0x28c) = zmm6.d
                *(arg1 + 0x5a4) = zmm7.d
                arg1[0xb4].b = r13
                *(arg1 + 0x5b0) = zmm8
                *(arg1 + 0x5c0) = zmm9
                *(arg1 + 0x5d0) = zmm10
                sub_141ff71c0(rbx, &var_c8)
                void* rcx_11 = arg1[0x29]
                
                if ((*(rcx_11 + 0x330) & 0x40) != 0)
                    sub_142012a10(rbx, rcx_11 + 0x390, 0)
                    void* rax_16 = arg1[0x29]
                    *(rax_16 + 0x330) &= 0xffffffbf
                    rcx_11 = arg1[0x29]
                
                sub_141ffd2b0(rcx_11 + 0x390)
                void* rax_17 = arg1[0x29]
                *(rax_17 + 0x330) &= 0xffffffdf
                void* rax_18 = arg1[0x29]
                *(rax_18 + 0x330) &= 0xfffffff7
                void* rcx_14 = arg1[0x29]
                *(rcx_14 + 0x330) ^= (zx.d((rcx_4 u>> 2).b) << 2 ^ *(rcx_14 + 0x330)) & 4
                arg1[0x71].b &= 0xef
                *(arg1 + 0x1f1) &= 0xfd
                arg1[0x71].b |= rdi & 0x10
                *(arg1 + 0x1f1) |= (r12 & 2) | 8
                int32_t rbx_2 = *(rbp_1 + 0x20)
                var_c8 = &data_143258940
                void var_b0
                sub_140596d80(&var_b0)
                void var_c0
                sub_140596d80(&var_c0)
                int64_t rax_23
                rax_23.b = rbx_2 s> 0
                return rax_23
            
            rax_1 = arg1[0x29]
            *(rax_1 + 0x330) &= 0xffffffdf
            void* rdx_1 = arg1[0x29]
            
            if ((*(rdx_1 + 0x330) & 0x40) != 0)
                sub_142012a10(&arg1[0x9b], rdx_1 + 0x390, 0)
                rax_1 = arg1[0x29]
                *(rax_1 + 0x330) &= 0xffffffbf

rax_1.b = 0
return rax_1
