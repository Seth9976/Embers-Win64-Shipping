// 函数: sub_140e90ee0
// 地址: 0x140e90ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
int64_t arg_18 = rbp
int64_t* r12 = *arg1
int32_t r14 = 0
int64_t* rdi = r12
void* r15_2 = &r12[sx.q(arg1[1].d) * 4]

if (r12 != r15_2)
    int64_t* rsi_1 = 0.q
    
    do
        if (rdi[2] == 0)
            rbp.b = 0
        else
            void* rax_1 = rdi[3]
            
            if (rax_1 == 0 || *(rax_1 + 8) s<= 0 || *rdi == 0)
                rbp.b = 0
            else
                int64_t* rax_2 = rdi[1]
                
                if (rax_2 == 0)
                    rbp.b = 0
                else
                    int32_t rcx = rax_2[1].d
                    
                    if (rcx s<= 0)
                        rbp.b = 0
                    else
                        r14 |= 1
                        rsi_1 = rax_2
                        
                        if (rcx == 0)
                            rsi_1 = nullptr
                            rbp.b = 0
                        else
                            rsi_1[1].d = rcx + 1
                            int64_t rax_4 = *rdi
                            
                            if (rax_4 == 0 || rax_4 != *arg2)
                                rbp.b = 0
                            else
                                rbp.b = 1
        
        if ((r14.b & 1) != 0)
            r14 &= 0xfffffffe
            
            if (rsi_1 != 0)
                rsi_1[1].d -= 1
                
                if (rsi_1[1].d == 1)
                    (**rsi_1)(rsi_1)
                    int32_t temp1_1 = *(rsi_1 + 0xc)
                    *(rsi_1 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*rsi_1 + 8))(rsi_1, 1)
        
        if (rbp.b != 0)
            return zx.q(((rdi - r12) s>> 5).d)
        
        rdi = &rdi[4]
    while (rdi != r15_2)

return 0xffffffff
