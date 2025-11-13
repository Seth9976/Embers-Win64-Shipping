// 函数: sub_140ebee10
// 地址: 0x140ebee10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
int64_t var_18 = rbp
int32_t r14 = 0
int64_t* rax = arg1[0x2a]
int64_t* rdi = rax
void* r12_2 = &rax[sx.q(arg1[0x2b].d) * 4]
int32_t arg_18 = 0
arg_18.q = rax
int32_t rdi_1

if (rax == r12_2)
label_140ebef0f:
    rdi_1 = -1
else
    int64_t* rbx_1 = arg1
    int64_t* rsi_1 = &rax[3]
    
    while (true)
        if (rsi_1[-1] == 0)
            rbp.b = 0
        else
            int64_t* rax_1 = *rsi_1
            
            if (rax_1 == 0)
                rbp.b = 0
            else
                int32_t rdx = rax_1[1].d
                
                if (rdx s<= 0 || *rdi == 0)
                    rbp.b = 0
                else
                    void* rcx = rsi_1[-2]
                    
                    if (rcx == 0 || *(rcx + 8) s<= 0)
                        rbp.b = 0
                    else
                        r14 |= 1
                        rbx_1 = rax_1
                        
                        if (rdx == 0)
                            rbx_1 = nullptr
                            rbp.b = 0
                        else
                            rbx_1[1].d = rdx + 1
                            int64_t rax_3 = rsi_1[-1]
                            
                            if (rax_3 == 0 || rax_3 != *arg3)
                                rbp.b = 0
                            else
                                rbp.b = 1
        
        if ((r14.b & 1) != 0)
            r14 &= 0xfffffffe
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp1_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
        
        if (rbp.b != 0)
            rdi_1 = ((rdi - arg_18.q) s>> 5).d
            break
        
        rdi = &rdi[4]
        rsi_1 = &rsi_1[4]
        
        if (rdi == r12_2)
            goto label_140ebef0f

if (rdi_1 == 0xffffffff)
    *arg2 = 0
    arg2[1] = 0
else
    int64_t* rdx_3 = (sx.q(rdi_1) << 5) + arg1[0x2a]
    *arg2 = 0
    void* rcx_3 = rdx_3[1]
    arg2[1] = rcx_3
    
    if (rcx_3 != 0)
        int32_t rax_7 = *(rcx_3 + 8)
        int64_t rcx_4
        
        if (rax_7 == 0)
            arg2[1] = 0
            rcx_4 = 0
        else
            *(rcx_3 + 8) = rax_7 + 1
            rcx_4 = arg2[1]
        
        if (rcx_4 != 0)
            *arg2 = *rdx_3

return arg2
