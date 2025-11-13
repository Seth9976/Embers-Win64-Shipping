// 函数: sub_141bb22c0
// 地址: 0x141bb22c0
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
        int64_t* rbx_1 = *(rax_2 + 0xf0)
        
        if (rbx_1 == 0)
            sub_140d921c0(arg1)
        else
            int32_t rax_3 = rbx_1[1].d
            
            if (rax_3 != 0)
                rbx_1[1].d = rax_3 + 1
                rax_3.b = 1
            
            if (rax_3.b == 0)
                rbx_1 = nullptr
            
            if (rbx_1 == 0)
                sub_140d921c0(arg1)
            else
                int64_t* rcx_4 = *(rax_2 + 0xe8)
                
                if (rcx_4 == 0)
                    if (rbx_1 != 0)
                        rbx_1[1].d -= 1
                        
                        if (rbx_1[1].d == 1)
                            (**rbx_1)(rbx_1)
                            int32_t temp2_1 = *(rbx_1 + 0xc)
                            *(rbx_1 + 0xc) -= 1
                            
                            if (temp2_1 == 1)
                                (*(*rbx_1 + 8))(rbx_1, 1)
                    
                    sub_140d921c0(arg1)
                else
                    (*(*rcx_4 + 8))(rcx_4, arg1)
                    
                    if (rbx_1 != 0)
                        rbx_1[1].d -= 1
                        
                        if (rbx_1[1].d == 1)
                            (**rbx_1)(rbx_1)
                            int32_t temp3_1 = *(rbx_1 + 0xc)
                            *(rbx_1 + 0xc) -= 1
                            
                            if (temp3_1 == 1)
                                (*(*rbx_1 + 8))(rbx_1, 1)

return arg1
