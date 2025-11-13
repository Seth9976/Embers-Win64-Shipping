// 函数: sub_140ea3860
// 地址: 0x140ea3860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg3

for (int32_t i = 0; i s>= 0; i += 1)
    if (i s>= *(arg1 + 8))
        break
    
    int64_t* r14_3 = (sx.q(i) << 4) + *arg1
    int64_t* rcx = *r14_3
    
    if ((*(*rcx + 8))(rcx).d == 1)
        void* rbp_1 = *r14_3
        
        if (*(rbp_1 + 8) == arg2 && *(rbp_1 + 0x10) == rdi)
            int64_t* rsi_1 = r14_3[1]
            void* rdi_1 = rbp_1
            
            if (rsi_1 != 0)
                rsi_1[1].d += 1
                rdi_1 = *r14_3
            
            int64_t rax_2 = *(rdi_1 + 0x18)
            
            if (rax_2 != 0)
                int64_t* rdi_2 = *(rdi_1 + 0x20)
                
                if (rdi_2 != 0)
                    rdi_2[1].d += 1
                
                int64_t var_38 = rax_2
                int64_t* var_30_1 = rdi_2
                
                if (rdi_2 != 0)
                    rdi_2[1].d += 1
                
                sub_140ed3880(arg4, &var_38)
                
                if (rdi_2 != 0)
                    rdi_2[1].d -= 1
                    
                    if (rdi_2[1].d == 1)
                        (**rdi_2)(rdi_2)
                        int32_t temp3_1 = *(rdi_2 + 0xc)
                        *(rdi_2 + 0xc) -= 1
                        
                        if (temp3_1 == 1)
                            (*(*rdi_2 + 8))(rdi_2, 1)
            
            if (*(rbp_1 + 0x30) != 0)
                int64_t* rcx_4 = *(rbp_1 + 0x28)
                
                if (rcx_4 != 0 && (*(*rcx_4 + 0x28))(rcx_4) != 0)
                    int64_t* rcx_5
                    
                    if (*(rbp_1 + 0x30) == 0)
                        rcx_5 = nullptr
                    else
                        rcx_5 = *(rbp_1 + 0x28)
                    
                    (*(*rcx_5 + 0x50))(rcx_5, arg4)
            
            if (*(*r14_3 + 0x18) != 0)
                sub_140ed22b0(arg4)
            
            if (rsi_1 != 0)
                rsi_1[1].d -= 1
                
                if (rsi_1[1].d == 1)
                    (**rsi_1)(rsi_1)
                    int32_t temp2_1 = *(rsi_1 + 0xc)
                    *(rsi_1 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        (*(*rsi_1 + 8))(rsi_1, 1)
            
            rdi = arg3
