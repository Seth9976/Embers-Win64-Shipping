// 函数: sub_140859950
// 地址: 0x140859950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x6b8) &= 0xfffff7ff
int32_t rax = 0
void* rdi = *(arg1 + 0x28)
*(arg1 + 0x3c) = 0
*(arg1 + 0x6c0) = 0
*(arg1 + 0x71c) = 0
*(arg1 + 0x728) = 0

if (rdi != 0)
    void* rdi_1 = *(rdi + 0x408)
    
    if (rdi_1 != 0 && *(arg1 + 0x6e8) != 4)
        rax = sub_140856da0(arg1)
        
        if (rax.b != 0)
            rax = sub_140857090(rdi_1)
            
            if (rax.b != 0)
                int64_t* i = *(arg1 + 0xa0)
                
                for (void* rbp_3 = &i[sx.q(*(arg1 + 0xa8)) * 2]; i != rbp_3; i = &i[2])
                    int64_t* rbx_1 = i[1]
                    
                    if (rbx_1 != 0)
                        rbx_1[1].d += 1
                    
                    rax = sub_140808860(*i, arg2)
                    
                    if (rbx_1 != 0)
                        rax = rbx_1[1].d
                        rbx_1[1].d -= 1
                        
                        if (rax == 1)
                            (**rbx_1)(rbx_1)
                            rax = *(rbx_1 + 0xc)
                            *(rbx_1 + 0xc) -= 1
                            
                            if (rax == 1)
                                rax = (*(*rbx_1 + 8))(rbx_1, 1)
            else if (*(arg1 + 0x6e4) != 4)
                *(arg1 + 0x6e8) = 4
                int64_t rax_1 = sub_14084ae80(arg1)
                *(arg1 + 0x6e4) = 4
                return rax_1

return rax
