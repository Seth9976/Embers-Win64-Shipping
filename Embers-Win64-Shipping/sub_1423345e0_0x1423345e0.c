// 函数: sub_1423345e0
// 地址: 0x1423345e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
r12.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t* rbp = arg4
int64_t rbx = sx.q(arg3)
int32_t rdi_1

if (rax_1 == 1)
    rdi_1 = arg5
label_142334771:
    
    if (sub_14093d550(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_1 = &arg1[7]
        int32_t rax_18 = (arg1[9].d - 1) & rbx.d
        *(rbp + 0x24) = rax_18
        void* rdx_11 = *(r9_1 + 8)
        int64_t r8_2 = sx.q(rax_18)
        void* rax_19 = r9_1
        
        if (rdx_11 != 0)
            rax_19 = rdx_11
        
        rbp[4].d = *(rax_19 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2))
        void* rax_21 = *(r9_1 + 8)
        
        if (rax_21 != 0)
            r9_1 = rax_21
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2)) = rdi_1
else
    int32_t r15_1 = -1
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & rbx) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_142334676:
        rbx_1 = -1
    else
        int64_t rdx_3 = *arg1
        
        while (true)
            int64_t rcx_1 = sx.q(rbx_1) * 5
            
            if (*(rdx_3 + (rcx_1 << 3)) == *arg4)
                break
            
            rbx_1 = *(rdx_3 + (rcx_1 << 3) + 0x20)
            
            if (rbx_1 == 0xffffffff)
                goto label_142334676
    
    r12.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        int64_t rcx_2 = sx.q(rbx_1) * 5
        int64_t rax_4 = *arg1
        int64_t* rdi = *(rax_4 + (rcx_2 << 3) + 0x10)
        
        if (rdi != 0)
            rdi[1].d -= 1
            
            if (rdi[1].d == 1)
                (**rdi)(rdi)
                int32_t temp1_1 = *(rdi + 0xc)
                *(rdi + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rdi + 8))(rdi, 1)
        
        memmove(rax_4 + (rcx_2 << 3), arg4, 0x20)
        int64_t rcx_6 = sx.q(arg5)
        void* r9 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(*arg1 + sx.q(arg1[6].d) * 0x28) = rcx_6.d
        
        int64_t rax_9 = *arg1
        int64_t rdx_6 = rcx_6 * 5
        *(rax_9 + (rdx_6 << 3)) = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            r15_1 = arg1[6].d
        
        *(rax_9 + (rdx_6 << 3) + 4) = r15_1
        *(arg1 + 0x34) += 1
        rdi_1 = rbx_1
        arg1[6].d = rcx_6.d
        void* rax_10 = *(r9 + 0x10)
        
        if (rax_10 != 0)
            r9 = rax_10
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_6.d)
        int64_t rcx_7 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
        *(r9 + (rcx_7 << 2)) &= not.d(rol.d(1, rcx_6.b))
        rbp = arg4
    
    if (rbx_1 == 0xffffffff)
        rbx = zx.q(arg3)
        goto label_142334771

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = r12.b

return arg2
