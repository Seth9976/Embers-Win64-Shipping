// 函数: sub_140f127d0
// 地址: 0x140f127d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 - 2 u<= 1)
    char rax_1 = sub_140a4aa30()
    
    if (rax_1 != 0 || ((*(arg1 + 0x48) == rax_1 || *(arg1 + 0xe2) != 2)
            && (*(arg1 + 0x68) == 0 || *(arg1 + 0xe2) != 3)) || data_1439ae51c == data_1439ae51d)
        int64_t* rcx = *(arg1 + 0xe8)
        
        if (rcx != 0)
            (*(*rcx + 0x278))(rcx)
            void var_18
            
            if (arg1 + 0xe8 != &var_18)
                *(arg1 + 0xe8) = 0
                int64_t* rdi_1 = *(arg1 + 0xf0)
                
                if (rdi_1 != 0)
                    *(arg1 + 0xf0) = 0
                    rdi_1[1].d -= 1
                    
                    if (rdi_1[1].d == 1)
                        (**rdi_1)(rdi_1)
                        int32_t temp3_1 = *(rdi_1 + 0xc)
                        *(rdi_1 + 0xc) -= 1
                        
                        if (temp3_1 == 1)
                            (*(*rdi_1 + 8))(rdi_1, 1)

char rax_6
char rcx_3
rax_6, rcx_3 = sub_140a4aa30()
*(arg1 + 8)
*(arg1 + 8) = sbb.b(rcx_3, rcx_3, rax_6 != 0) & 3
return neg.b(rax_6)
