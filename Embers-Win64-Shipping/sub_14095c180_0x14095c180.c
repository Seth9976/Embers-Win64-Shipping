// 函数: sub_14095c180
// 地址: 0x14095c180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
r12.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t r13 = sx.q(arg3)
int32_t rdi_3

if (rax_1 == 1)
    rdi_3 = arg5
label_14095c2b8:
    
    if (sub_1409562a0(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9 = &arg1[7]
        int32_t rax_10 = (arg1[9].d - 1) & r13.d
        *(arg4 + 0x114) = rax_10
        void* rdx_8 = *(r9 + 8)
        int64_t r8_1 = sx.q(rax_10)
        void* rax_11 = r9
        
        if (rdx_8 != 0)
            rax_11 = rdx_8
        
        *(arg4 + 0x110) = *(rax_11 + (((sx.q(arg1[9].d) - 1) & r8_1) << 2))
        void* rax_13 = *(r9 + 8)
        
        if (rax_13 != 0)
            r9 = rax_13
        
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
    label_14095c218:
        rbx_1 = -1
    else
        void* rcx_1 = *arg1
        
        while (true)
            int64_t rdi_1 = sx.q(rbx_1) * 0x118
            
            if (sub_14094dfb0(rcx_1 + rdi_1, arg4) != 0)
                break
            
            rcx_1 = *arg1
            rbx_1 = *(rdi_1 + rcx_1 + 0x110)
            
            if (rbx_1 == 0xffffffff)
                goto label_14095c218
    
    r12.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_3 = arg5
    else
        void* rbp_2 = sx.q(rbx_1) * 0x118 + *arg1
        sub_14094bf00(rbp_2 + 0x18)
        int64_t* rdi_2 = *(rbp_2 + 0x10)
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t temp1_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
        
        memmove(rbp_2, arg4, 0x110)
        sub_140974f00(arg1, arg5, 1)
        rdi_3 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_14095c2b8

*arg2 = rdi_3

if (arg6 != 0)
    *arg6 = r12.b

return arg2
