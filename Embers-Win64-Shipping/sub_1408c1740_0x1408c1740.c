// 函数: sub_1408c1740
// 地址: 0x1408c1740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x120) |= 1
int64_t* result = *(arg1 + 0x128)
*(arg1 + 0x121) = 1

if (result != 0)
    void* r14_1 = *(arg1 + 0x108)
    
    if (r14_1 != 0)
        int64_t* rcx = result[0x56]
        result[0x55].b = 0
        
        if (rcx == 0)
            int64_t* rax = j_sub_140a82f30(0x18)
            int64_t* rdi_1 = rax
            
            if (rax == 0)
                rdi_1 = nullptr
            else
                *rax = 0
                rax[1] = 0
            
            void*** rax_1 = j_sub_140a82f30(0x18)
            void*** rbx_1 = rax_1
            
            if (rax_1 == 0)
                rbx_1 = nullptr
            else
                rax_1[1].d = 1
                *(rax_1 + 0xc) = 1
                *rbx_1 = &data_142e051c0
                rbx_1[2] = rdi_1
            
            int64_t* var_28 = rdi_1
            void*** var_20 = rbx_1
            
            if (&result[0x56] != &var_28)
                result[0x56] = rdi_1
                var_28 = nullptr
                sub_1405aeff0(&result[0x57], &var_20)
                rbx_1 = var_20
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t rax_4 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (rax_4 == 1)
                        (*rbx_1)[1](rbx_1, 1)
            
            rcx = result[0x56]
        
        sub_1408bf8e0(rcx, r14_1)
        void* rbp_1 = *(arg1 + 0x128)
        result = *(rbp_1 + 0x2b0)
        
        if (result != 0)
            result[2].b = 1
            r14_1.b = 0
            int64_t* rdi_2 = *result
            void* rsi_3 = &rdi_2[sx.q(result[1].d) * 2]
            
            if (rdi_2 != rsi_3)
                do
                    int64_t* rbx_2 = rdi_2[1]
                    void* rcx_4 = *rdi_2
                    
                    if (rbx_2 != 0)
                        rbx_2[1].d += 1
                    
                    if (rcx_4 != 0)
                        result = sub_1408c29c0(rcx_4)
                        r14_1.b = 1
                    
                    if (rbx_2 != 0)
                        result = zx.q(rbx_2[1].d)
                        rbx_2[1].d -= 1
                        
                        if (result.d == 1)
                            (**rbx_2)(rbx_2)
                            result = zx.q(*(rbx_2 + 0xc))
                            *(rbx_2 + 0xc) -= 1
                            
                            if (result.d == 1)
                                result = (*(*rbx_2 + 8))(rbx_2, 1)
                    
                    rdi_2 = &rdi_2[2]
                while (rdi_2 != rsi_3)
                
                if (r14_1.b != 0)
                    *(rbp_1 + 0x2e) |= 4
                    result = sub_140db3510(rbp_1 + 0x18)
                    
                    if (result.b != 0)
                        result = sub_140dc03a0(rbp_1 + 0x18, *(rbp_1 + 0x2e))
                    
                    *(rbp_1 + 0x2a8) = 1

return result
