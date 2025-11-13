// 函数: sub_1418b2f60
// 地址: 0x1418b2f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
r12.b = 0
int64_t* rbx = arg4
int64_t r15 = sx.q(arg3)
int32_t rcx_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rdi_1

if (rcx_1 == 1)
    rdi_1 = arg5
label_1418b30ff:
    
    if (sub_14093d550(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_2 = &arg1[7]
        int32_t rax_19 = (arg1[9].d - 1) & r15.d
        *(rbx + 0x24) = rax_19
        void* rdx_9 = *(r9_2 + 8)
        int64_t r8_4 = sx.q(rax_19)
        void* rax_20 = r9_2
        
        if (rdx_9 != 0)
            rax_20 = rdx_9
        
        rbx[4].d = *(rax_20 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2))
        void* rax_22 = *(r9_2 + 8)
        
        if (rax_22 != 0)
            r9_2 = rax_22
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2)) = rdi_1
else
    int32_t rbp_1 = -1
    int32_t rbx_1
    
    if (rcx_1 != 0)
        void* rdx = arg1[8]
        void* r9 = &arg1[7]
        
        if (rdx != 0)
            r9 = rdx
        
        rbx_1 = *(r9 + (((sx.q(arg1[9].d) - 1) & r15) << 2))
    
    if (rcx_1 == 0 || rbx_1 == 0xffffffff)
    label_1418b2ff6:
        rbx_1 = -1
    else
        int64_t r8_3 = *arg1
        
        while (true)
            int64_t rdx_1 = sx.q(rbx_1) * 5
            
            if (*(r8_3 + (rdx_1 << 3)) == *arg4)
                break
            
            rbx_1 = *(r8_3 + (rdx_1 << 3) + 0x20)
            
            if (rbx_1 == 0xffffffff)
                goto label_1418b2ff6
    
    r12.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        int64_t rcx_3 = sx.q(rbx_1) * 5
        int64_t rax_3 = *arg1
        int64_t* rdi = *(rax_3 + (rcx_3 << 3) + 0x10)
        
        if (rdi != 0)
            rdi[1].d -= 1
            
            if (rdi[1].d == 1)
                (**rdi)(rdi)
                int32_t rax_6 = *(rdi + 0xc)
                *(rdi + 0xc) -= 1
                
                if (rax_6 == 1)
                    (*(*rdi + 8))(rdi, 1)
        
        memmove(rax_3 + (rcx_3 << 3), arg4, 0x20)
        int64_t rcx_7 = sx.q(arg5)
        void* r9_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(*arg1 + sx.q(arg1[6].d) * 0x28) = rcx_7.d
        
        int64_t rax_10 = *arg1
        int64_t rdx_4 = rcx_7 * 5
        *(rax_10 + (rdx_4 << 3)) = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            rbp_1 = arg1[6].d
        
        *(rax_10 + (rdx_4 << 3) + 4) = rbp_1
        *(arg1 + 0x34) += 1
        rdi_1 = rbx_1
        arg1[6].d = rcx_7.d
        void* rax_11 = *(r9_1 + 0x10)
        
        if (rax_11 != 0)
            r9_1 = rax_11
        
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(rcx_7.d)
        int64_t rcx_8 = sx.q((temp2_1 + (temp1_1 & 0x1f)) s>> 5)
        *(r9_1 + (rcx_8 << 2)) &= not.d(rol.d(1, rcx_7.b))
        r15 = zx.q(arg3)
    
    if (rbx_1 == 0xffffffff)
        rbx = arg4
        goto label_1418b30ff

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = r12.b

return arg2
