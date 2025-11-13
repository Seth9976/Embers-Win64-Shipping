// 函数: sub_140ec2490
// 地址: 0x140ec2490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if (*(arg1 + 0x398) != 0)
    int64_t* rdi_1 = *(arg1 + 0x3a0)
    
    if (rdi_1 != 0)
        result = rdi_1[1].d
        
        if (result s> 0)
            void* rbx = nullptr
            
            if (rdi_1 == 0)
                goto label_140ec24dc
            
            if (result == 0)
                rdi_1 = nullptr
            else
                rdi_1[1].d = result + 1
            label_140ec24dc:
                
                if (rdi_1 != 0)
                    rbx = *(arg1 + 0x398)
            
            void* rsi = *(rbx + 0x3a0)
            int64_t* rbx_1 = *(rbx + 0x3a8)
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
                
                if (rbx_1 != 0)
                    rbx_1[1].d += 1
                    
                    if (rbx_1 != 0)
                        rbx_1[1].d -= 1
                        
                        if (rbx_1[1].d == 1)
                            (**rbx_1)(rbx_1)
                            int32_t temp2_1 = *(rbx_1 + 0xc)
                            *(rbx_1 + 0xc) -= 1
                            
                            if (temp2_1 == 1)
                                (*(*rbx_1 + 8))(rbx_1, 1)
            
            int64_t* rax_3 = sub_140d3c6e0(rsi + 0x38)
            char rax_4
            
            if (rax_3 != 0)
                int64_t rdx_1 = *rax_3
                rax_4 = (*(rdx_1 + 0x260))(rax_3, rdx_1)
            
            if (rax_3 == 0 || rax_4 == 0)
                rsi.b = 0
            else
                rsi.b = 1
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp4_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    int64_t r8_1 = *rdi_1
                    (*r8_1)(rdi_1, arg2, r8_1)
                    int32_t temp5_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        int64_t r8_2 = *rdi_1
                        (*(r8_2 + 8))(rdi_1, 1, r8_2)
            
            return zx.q(rsi.b)

result.b = 0
return result
