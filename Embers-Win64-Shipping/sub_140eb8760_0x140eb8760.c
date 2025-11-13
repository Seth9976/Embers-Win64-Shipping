// 函数: sub_140eb8760
// 地址: 0x140eb8760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t r13 = sx.q(arg3)
int32_t rdi_1

if (rax_1 == 1)
    rdi_1 = arg5
label_140eb887f:
    
    if (sub_1405b6470(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9 = &arg1[7]
        int32_t rax_10 = (arg1[9].d - 1) & r13.d
        *(arg4 + 0x14) = rax_10
        void* rdx_8 = *(r9 + 8)
        int64_t r8_2 = sx.q(rax_10)
        void* rax_11 = r9
        
        if (rdx_8 != 0)
            rax_11 = rdx_8
        
        arg4[2].d = *(rax_11 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2))
        void* rax_13 = *(r9 + 8)
        
        if (rax_13 != 0)
            r9 = rax_13
        
        *(r9 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2)) = rdi_1
else
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r13) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_140eb87e6:
        rbx_1 = -1
    else
        int64_t rdx_3 = *arg1
        
        while (true)
            int64_t rcx_1 = sx.q(rbx_1) * 3
            
            if (*(rdx_3 + (rcx_1 << 3)) == *arg4)
                break
            
            rbx_1 = *(rdx_3 + (rcx_1 << 3) + 0x10)
            
            if (rbx_1 == 0xffffffff)
                goto label_140eb87e6
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        int64_t rcx_2 = sx.q(rbx_1) * 3
        int64_t rax_4 = *arg1
        int64_t* rdi = *(rax_4 + (rcx_2 << 3) + 8)
        
        if (rdi != 0)
            rdi[1].d -= 1
            
            if (rdi[1].d == 1)
                (**rdi)(rdi)
                int32_t temp1_1 = *(rdi + 0xc)
                *(rdi + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rdi + 8))(rdi, 1)
        
        memmove(rax_4 + (rcx_2 << 3), arg4, 0x10)
        sub_1405c3640(arg1, arg5, 1)
        rdi_1 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_140eb887f

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = rbp.b

return arg2
