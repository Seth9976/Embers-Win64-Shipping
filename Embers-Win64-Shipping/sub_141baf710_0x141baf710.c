// 函数: sub_141baf710
// 地址: 0x141baf710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_1423de540(data_143f5b298, arg2, 1)

if (rax == 0)
    sub_140d921c0(arg1)
else if (sub_14243ade0(rax) == 0)
    sub_140d921c0(arg1)
else
    void* rax_2 = sub_142436920(rax)
    
    if (rax_2 == 0)
        sub_140d921c0(arg1)
    else
        int64_t* rdi_1 = *(rax_2 + 0xf0)
        
        if (rdi_1 == 0)
            sub_140d921c0(arg1)
        else
            int32_t rax_3 = rdi_1[1].d
            
            if (rax_3 != 0)
                rdi_1[1].d = rax_3 + 1
                rax_3.b = 1
            
            if (rax_3.b == 0)
                rdi_1 = nullptr
            
            if (rdi_1 == 0)
                sub_140d921c0(arg1)
            else
                int64_t* r14_1 = *(rax_2 + 0xe8)
                
                if (r14_1 == 0)
                    if (rdi_1 != 0)
                        rdi_1[1].d -= 1
                        
                        if (rdi_1[1].d == 1)
                            (**rdi_1)(rdi_1)
                            int32_t temp2_1 = *(rdi_1 + 0xc)
                            *(rdi_1 + 0xc) -= 1
                            
                            if (temp2_1 == 1)
                                (*(*rdi_1 + 8))(rdi_1, 1)
                    
                    sub_140d921c0(arg1)
                else
                    (*(*r14_1 + 0x10))(r14_1, arg1, sub_14226dd50(arg2))
                    
                    if (rdi_1 != 0)
                        rdi_1[1].d -= 1
                        
                        if (rdi_1[1].d == 1)
                            (**rdi_1)(rdi_1)
                            int32_t temp3_1 = *(rdi_1 + 0xc)
                            *(rdi_1 + 0xc) -= 1
                            
                            if (temp3_1 == 1)
                                (*(*rdi_1 + 8))(rdi_1, 1)

return arg1
