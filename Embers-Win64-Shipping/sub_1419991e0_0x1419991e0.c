// 函数: sub_1419991e0
// 地址: 0x1419991e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = arg1

for (int64_t i = 0; i s< 2; )
    int64_t* rsi_1 = *(r12 + (i << 3))
    int32_t rdi_1 = 0
    int32_t rbp_1 = rsi_1[1].d
    
    if (rbp_1 s> 0)
        int64_t* r14_1 = nullptr
        
        do
            int64_t* rbx_2 = *(r14_1 + *rsi_1)
            
            if (rbx_2[3] != 0)
                int64_t* rcx = data_143f0f180
                (*(*rcx + 0x118))(rcx, &data_143f02b98, rbx_2[2])
                rbx_2[3] = 0
                *(rbx_2 + 0x24) = 0
                *(rbx_2 + 0x2c) = 0
            else if (data_1439c85b0 != 0 && *(rbx_2 + 0x24) == 0)
                *(rbx_2 + 0x2c) += 1
                
                if (*(rbx_2 + 0x2c) s>= data_1439c85b0)
                    (*(*rbx_2 + 0x30))(rbx_2)
                    int64_t rbx_3 = sx.q(rdi_1) << 3
                    int64_t* rcx_2 = *(rbx_3 + *rsi_1)
                    
                    if (rcx_2 != 0)
                        (**rcx_2)(rcx_2, 1)
                    
                    int32_t rdx_3 = rsi_1[1].d
                    int32_t rax_8 = rdx_3 - rdi_1 - 1
                    
                    if (rax_8 s>= 1)
                        rax_8 = 1
                    
                    if (rax_8 != 0)
                        int64_t rcx_3 = *rsi_1
                        memcpy(rcx_3 + rbx_3, rcx_3 + (sx.q(rdx_3 - rax_8) << 3), rax_8 << 3)
                        rdx_3 = rsi_1[1].d
                    
                    rsi_1[1].d = rdx_3 - 1
                    sub_1405c53d0(rsi_1)
                    rdi_1 -= 1
                    r14_1 -= 8
                    rbp_1 -= 1
            
            rdi_1 += 1
            r14_1 = &r14_1[1]
        while (rdi_1 s< rbp_1)
        
        r12 = arg1
    
    i += 1
    rsi_1[2] = 0
