// 函数: sub_140d9faf0
// 地址: 0x140d9faf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r13 = *arg1
void* rsi = r13
void* r15_2 = (sx.q(arg1[1].d) << 4) + r13

if (r13 != r15_2)
    do
        int64_t* rbx_1 = *(rsi + 8)
        int64_t r14_1 = 0
        
        if (rbx_1 != 0)
            int32_t rax_1 = rbx_1[1].d
            
            if (rax_1 == 0)
                rbx_1 = nullptr
            else
                rbx_1[1].d = rax_1 + 1
                r14_1 = *rsi
        
        int64_t* rdi_1 = arg2[1]
        int64_t rbp_1 = 0
        
        if (rdi_1 != 0)
            int32_t rax_3 = rdi_1[1].d
            
            if (rax_3 != 0)
                rdi_1[1].d = rax_3 + 1
                
                if (rdi_1 != 0)
                    rbp_1 = *arg2
                    rdi_1[1].d -= 1
                    
                    if (rdi_1[1].d == 1)
                        (**rdi_1)(rdi_1)
                        int32_t temp3_1 = *(rdi_1 + 0xc)
                        *(rdi_1 + 0xc) -= 1
                        
                        if (temp3_1 == 1)
                            (*(*rdi_1 + 8))(rdi_1, 1)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        if (r14_1 == rbp_1)
            return zx.q(((rsi - r13) s>> 4).d)
        
        rsi += 0x10
    while (rsi != r15_2)

return 0xffffffff
