// 函数: sub_14066e7b0
// 地址: 0x14066e7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x28)
int32_t arg_8
sub_14062d6e0(rbx, &arg_8, arg2)
int64_t rax = sx.q(arg_8)

if (rax.d != 0xffffffff)
    void* rcx_1 = *rbx + rax * 0x28
    int64_t* rax_2 = rcx_1 + 0x10
    
    if (rcx_1 == 0)
        rax_2 = nullptr
    
    if (rax_2 != 0)
        void* rax_3 = *rax_2
        
        if (rax_3 != 0 && *(rax_3 + 8) == 6)
            int64_t* rax_4 = sub_140b752e0(*(arg1 + 0x28), arg2, arg3)
            int64_t* rbx_1 = rax_4[1]
            int64_t rdi_1 = *rax_4
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            void* result = sub_140666d50(sub_140cde0b0())
            
            if (rdi_1 == 0)
                sub_140679620(result)
            else
                if (rbx_1 != 0)
                    rbx_1[1].d += 1
                
                *(result + 0x28) = rdi_1
                int64_t* rdi_2 = *(result + 0x30)
                *(result + 0x30) = rbx_1
                
                if (rdi_2 != 0)
                    rdi_2[1].d -= 1
                    
                    if (rdi_2[1].d == 1)
                        (**rdi_2)(rdi_2)
                        int32_t temp3_1 = *(rdi_2 + 0xc)
                        *(rdi_2 + 0xc) -= 1
                        
                        if (temp3_1 == 1)
                            (*(*rdi_2 + 8))(rdi_2, 1)
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp2_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            return result

return 0
