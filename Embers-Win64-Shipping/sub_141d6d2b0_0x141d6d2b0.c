// 函数: sub_141d6d2b0
// 地址: 0x141d6d2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 0x68)

for (void* r14_2 = &i[sx.q(*(arg1 + 0x70)) * 2]; i != r14_2; i = &i[2])
    int64_t* rdi_1 = i[1]
    int64_t* rsi_1 = *i
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    void* rbp_1 = *(arg2 + 0x68)
    
    if (rbp_1 != 0)
        void* rax_2 = (**rsi_1)(rsi_1)
        void* rcx_1 = *(rbp_1 + 0x10)
        int64_t rax_3 = sx.q(*(rax_2 + 0x38))
        
        if (rax_3.d s<= *(rcx_1 + 0x38) && *(*(rcx_1 + 0x30) + (rax_3 << 3)) == rax_2 + 0x30)
            int64_t result = (*(*rsi_1 + 8))(rsi_1, arg2, arg3, arg4)
            
            if (result != 0)
                if (rdi_1 != 0)
                    rdi_1[1].d -= 1
                    
                    if (rdi_1[1].d == 1)
                        (**rdi_1)(rdi_1)
                        int32_t temp3_1 = *(rdi_1 + 0xc)
                        *(rdi_1 + 0xc) -= 1
                        
                        if (temp3_1 == 1)
                            (*(*rdi_1 + 8))(rdi_1, 1)
                
                return result
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp1_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

return 0
