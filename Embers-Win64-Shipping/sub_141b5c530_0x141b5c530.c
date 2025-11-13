// 函数: sub_141b5c530
// 地址: 0x141b5c530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14
r14.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t r13 = sx.q(arg3)
int32_t rdi_3

if (rax_1 == 1)
    rdi_3 = arg5
label_141b5c683:
    
    if (sub_141b50cb0(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9 = &arg1[7]
        int32_t rax_11 = (arg1[9].d - 1) & r13.d
        arg4[0xb] = rax_11
        void* rdx_8 = *(r9 + 8)
        int64_t r8_1 = sx.q(rax_11)
        void* rax_12 = r9
        
        if (rdx_8 != 0)
            rax_12 = rdx_8
        
        arg4[0xa] = *(rax_12 + (((sx.q(arg1[9].d) - 1) & r8_1) << 2))
        void* rax_14 = *(r9 + 8)
        
        if (rax_14 != 0)
            r9 = rax_14
        
        *(r9 + (((sx.q(arg1[9].d) - 1) & r8_1) << 2)) = rdi_3
else
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r13) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_141b5c5e9:
        rbx_1 = -1
    else
        int64_t rcx_1 = *arg1
        
        while (true)
            r14 = sx.q(rbx_1) * 0x30
            int32_t* rdi_1 = r14 + rcx_1
            
            if (sub_14077a170(rdi_1, arg4) != 0 && not(arg4[2] f!= rdi_1[2])
                    && not(arg4[3] f!= rdi_1[3]) && rdi_1[4] == arg4[4])
                break
            
            rcx_1 = *arg1
            rbx_1 = *(r14 + rcx_1 + 0x28)
            
            if (rbx_1 == 0xffffffff)
                goto label_141b5c5e9
    
    r14.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_3 = arg5
    else
        void* rbp_3 = sx.q(rbx_1) * 0x30 + *arg1
        int64_t* rdi_2 = *(rbp_3 + 0x20)
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t temp1_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
        
        memmove(rbp_3, arg4, 0x28)
        sub_1407c2ba0(arg1, arg5, 1)
        rdi_3 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_141b5c683

*arg2 = rdi_3

if (arg6 != 0)
    *arg6 = r14.b

return arg2
