// 函数: sub_141e6c4f0
// 地址: 0x141e6c4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *arg2
int32_t r14 = 0

for (void* r15_2 = &i[sx.q(arg2[1].d) * 2]; i != r15_2; i = &i[2])
    void* rax_1 = sub_141e5fc50(arg1, i, 1)
    
    if (rax_1 != 0)
        int64_t* rcx_1 = *(rax_1 + 0x30)
        
        if (rcx_1 == 0 || *(rcx_1 + 0x12) != 0 || *(rcx_1 + 0x11) != 0)
            void* rax_2 = *(rax_1 + 0x50)
            
            if (rax_2 != 0 && *(rax_2 + 0x12) == 0 && *(rax_2 + 0x11) == 0)
                goto label_141e6c584
        else
        label_141e6c584:
            r14 += 1
            void var_38
            
            if (rcx_1 != 0)
                if (*(rcx_1 + 0x12) == 0 && *(rcx_1 + 0x11) == 0)
                    arg3 = sub_142386180(rcx_1, arg3)
                
                if (rax_1 + 0x30 != &var_38)
                    *(rax_1 + 0x30) = 0
                    int64_t* rbx_1 = *(rax_1 + 0x38)
                    
                    if (rbx_1 != 0)
                        *(rax_1 + 0x38) = 0
                        rbx_1[1].d -= 1
                        
                        if (rbx_1[1].d == 1)
                            (**rbx_1)(rbx_1)
                            int32_t temp1_1 = *(rbx_1 + 0xc)
                            *(rbx_1 + 0xc) -= 1
                            
                            if (temp1_1 == 1)
                                (*(*rbx_1 + 8))(rbx_1, 1)
            
            *(rax_1 + 0x48) = 0
            
            if (*(rax_1 + 0x4c) s<= 0xffffffff)
                sub_140638c50(rax_1 + 0x40, 0)
            
            int64_t* rcx_5 = *(rax_1 + 0x50)
            
            if (rcx_5 != 0)
                if (*(rcx_5 + 0x12) == 0 && *(rcx_5 + 0x11) == 0)
                    arg3 = sub_142386180(rcx_5, arg3)
                
                if (rax_1 + 0x50 != &var_38)
                    *(rax_1 + 0x50) = 0
                    int64_t* rbx_2 = *(rax_1 + 0x58)
                    
                    if (rbx_2 != 0)
                        *(rax_1 + 0x58) = 0
                        rbx_2[1].d -= 1
                        
                        if (rbx_2[1].d == 1)
                            (**rbx_2)(rbx_2)
                            int32_t temp3_1 = *(rbx_2 + 0xc)
                            *(rbx_2 + 0xc) -= 1
                            
                            if (temp3_1 == 1)
                                (*(*rbx_2 + 8))(rbx_2, 1)
            
            int32_t rax_7 = *(rax_1 + 0x6c)
            *(rax_1 + 0x68) = 0
            
            if (rax_7 s< 0 && rax_7 != 0)
                sub_140638c50(rax_1 + 0x60, 0)

return zx.q(r14)
