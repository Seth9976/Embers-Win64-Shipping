// 函数: sub_1408c9440
// 地址: 0x1408c9440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = *arg1
void* rcx = *result

if (rcx != 0)
    int64_t* rcx_1 = *(rcx + 0x10)
    
    if (rcx_1 != 0)
        void* rax_1 = (*(*rcx_1 + 8))(rcx_1)
        void* var_50 = rax_1
        
        if (rax_1 != 0)
            *(rax_1 + 8) += 1
            void* rax_2 = *arg1
            void* rbx_1 = var_50
            int32_t i = 4
            int32_t r10_1 = 0
            void* rcx_2 = *(rax_2 + 0x10)
            void* rdi_1 = *(rax_2 + 8)
            char rax_3 = *(rax_2 + 0x19)
            uint64_t r15_1 = zx.q(*(rbx_1 + 0x60))
            int32_t var_5c_1 = r15_1.d
            int32_t r12_3 = r15_1.d * *(rdi_1 + 0x14) + *(rdi_1 + 0x10)
            int64_t r13_1 = *(rcx_2 + zx.q(*(rcx_2 + 0x68)) * 0x10 + 0x48)
            char rax_6 = *(rcx_2 + 0x30)
            int32_t i_3 = *(rbx_1 + 0x64)
            uint32_t rax_7 = zx.d(*(rdi_1 + 0x18))
            
            if (rax_7.b != 0)
                i = 0
            
            char temp0_1 = rax_7.b
            rax_7.b = neg.b(rax_7.b)
            
            if (i u< sbb.d(rax_7, rax_7, temp0_1 != 0) + 5)
                do
                    char rcx_3 = 1
                    
                    if (i u> 1)
                        rcx_3 = i.b
                    
                    for (int32_t j = 8 s>> i.b & 7; j u< *(rdi_1 + 0xc); j += 0x10 u>> rcx_3)
                        int32_t k = 0
                        
                        if (*(rdi_1 + 8) u> 0)
                            do
                                uint32_t rdx_1 = zx.d(*(sx.q(r10_1) + *(rdi_1 + 0x20)))
                                
                                if (rdx_1.w != *(rdi_1 + 0x1a))
                                    *(r13_1 + (zx.q(j * r15_1.d + r12_3 + k) << 2)) =
                                        *(*(rdi_1 + 0x30) + (zx.q(rdx_1) << 2))
                                
                                r10_1 += 1
                                k += 1
                            while (k u< *(rdi_1 + 8))
                    
                    i += 1
                while (i u< sbb.d(rax_7, rax_7, temp0_1 != 0) + 5)
                
                rbx_1 = var_50
            
            int64_t* rcx_7 = data_143f0f180
            int32_t var_68 = 0
            int64_t rbp_2 = r13_1
            int64_t rax_13 =
                (*(*rcx_7 + 0x510))(rcx_7, &data_143f02b98, rbx_1, 0, 1, &var_68, 0, 1, var_68)
            int64_t rsi_4 = rax_13
            
            if (rax_13 != 0)
                uint64_t rax_14 = zx.q(var_68)
                
                if (rax_14 != r15_1 << 2)
                    uint32_t count_1 = (r15_1 << 2).d
                    uint32_t count = count_1
                    
                    if (rax_14.d u<= count_1)
                        count = rax_14.d
                    
                    if (i_3 != 0)
                        uint64_t i_2 = zx.q(i_3)
                        uint64_t i_1
                        
                        do
                            memcpy(rsi_4, rbp_2, count)
                            rbp_2 += zx.q(count_1)
                            rsi_4 += zx.q(var_68)
                            i_1 = i_2
                            i_2 -= 1
                        while (i_1 != 1)
                        r15_1 = zx.q(var_5c_1)
                else
                    memcpy(rsi_4, r13_1, rax_14.d * i_3)
                
                int64_t* rcx_10 = data_143f0f180
                int32_t* var_80_1
                var_80_1.b = 1
                (*(*rcx_10 + 0x518))(rcx_10, &data_143f02b98, rbx_1, 0, 0, var_80_1)
            
            uint32_t rcx_11 = zx.d(*(rdi_1 + 0x19))
            
            if (rcx_11 == 3 && *(*arg1 + 0x18) != 0)
            label_1408c972a:
                int32_t rax_24
                
                if (rax_3 == 0)
                    rax_24 = *(*(rdi_1 + 0x30) + (zx.q(rax_6) << 2))
                else
                    int64_t rax_23 = sx.q(*(rdi_1 + 0x1a))
                    
                    if (rax_23.w == 0xffff)
                        rax_23 = zx.q(rax_6)
                    
                    int64_t* arg_8
                    arg_8.d = *(*(rdi_1 + 0x30) + (rax_23 << 2))
                    arg_8:3.b = 0
                    rax_24 = arg_8.d
                
                int32_t r10_2 = 0
                int32_t i_4 = i_3
                int32_t r9_1 = r15_1.d
                char rdx_8 = *(*arg1 + 0x18)
                
                if (rdx_8 == 0)
                    i_4 = *(rdi_1 + 0xc)
                
                if (rdx_8 == 0)
                    r10_2 = r12_3
                
                if (rdx_8 == 0)
                    r9_1 = *(rdi_1 + 8)
                
                int32_t r11_2 = 0
                
                if (i_4 != 0)
                    do
                        int32_t rcx_19 = 0
                        
                        if (r9_1 != 0)
                            do
                                uint64_t rdx_10 = zx.q(r11_2 * r15_1.d + r10_2 + rcx_19)
                                rcx_19 += 1
                                *(r13_1 + (rdx_10 << 2)) = rax_24
                            while (rcx_19 u< r9_1)
                        
                        r11_2 += 1
                    while (r11_2 u< i_4)
            else if (rcx_11 != 0 && rcx_11 != 1)
                if (rcx_11 == 2)
                    goto label_1408c972a
                
                if (rcx_11 == 3)
                    *(rcx_2 + 0x68) = (*(rcx_2 + 0x68) - 1) & 1
        
        return sub_1405d1550(&var_50)

return result
