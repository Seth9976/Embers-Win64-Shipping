// 函数: sub_141d6baa0
// 地址: 0x141d6baa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_140910250(arg1, &arg_8, arg2)
int32_t* rax = sx.q(arg_8)

if (rax.d == 0xffffffff)
label_141d6bb94:
    
    if (arg3 != 0)
        void* rax_2 = sub_142591550()
        void* rdx_4 = *(arg3 + 0x10)
        rax = sx.q(*(rax_2 + 0x38))
        
        if (rax.d s<= *(rdx_4 + 0x38))
            int32_t* rcx_5 = rax
            rax = *(rdx_4 + 0x30)
            
            if (*(rax + (rcx_5 << 3)) == rax_2 + 0x30)
                rax = sub_140b162a0(&arg1[0xa], &arg_8, arg2)
                
                if (*rax != 0xffffffff)
                    rax = sub_141f3b9f0(arg3)
                    
                    if (rax != 0)
                        int64_t rax_3 = sub_141f3b9f0(arg3)
                        int32_t* rbx_1 = arg5
                        int64_t rdi_1 = sx.q(rbx_1[4])
                        int32_t rcx_9 = (rdi_1 + 1).d
                        rbx_1[4] = rcx_9
                        
                        if (rcx_9 s> rbx_1[5])
                            sub_140915c70(rbx_1, rdi_1.d)
                        
                        int32_t* rax_4 = *(rbx_1 + 8)
                        
                        if (rax_4 != 0)
                            rbx_1 = rax_4
                        
                        *(rbx_1 + (rdi_1 << 3)) = rax_3
                        return rax_4
else
    rax = *arg1 + rax * 0x28
    
    if (rax == 0)
        goto label_141d6bb94
    
    int32_t* temp0_1 = rax
    rax = &rax[4]
    
    if (temp0_1 == -0x10)
        goto label_141d6bb94
    
    void* i = *rax
    rax = sx.q(rax[2])
    
    for (void* r15_2 = rax * 0x38 + i; i != r15_2; i += 0x38)
        rax = sub_141d6b920(i, arg3, arg4)
        int32_t* r14_1 = rax
        
        if (rax != 0)
            int64_t rdx_2 = *rax
            rax = (*(rdx_2 + 0x150))(rax, rdx_2)
            
            if (rax != 0)
                int64_t rbp_1 = sx.q(arg5[4])
                int32_t rcx_2 = (rbp_1 + 1).d
                arg5[4] = rcx_2
                
                if (rcx_2 s> arg5[5])
                    sub_140915c70(arg5, rbp_1.d)
                
                rax = *(arg5 + 8)
                int32_t* rcx_4 = arg5
                
                if (rax != 0)
                    rcx_4 = rax
                
                *(rcx_4 + (rbp_1 << 3)) = r14_1

return rax
