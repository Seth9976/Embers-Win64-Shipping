// 函数: sub_142024f60
// 地址: 0x142024f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13
r13.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t* rbx = arg4
int64_t rbp = sx.q(arg3)
int32_t rdi_1

if (rax_1 == 1)
    rdi_1 = arg5
label_1420250f3:
    
    if (sub_140cb1a20(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_2 = &arg1[7]
        int32_t rax_15 = (arg1[9].d - 1) & rbp.d
        rbx[7] = rax_15
        void* rdx_10 = *(r9_2 + 8)
        int64_t r8_4 = sx.q(rax_15)
        void* rax_16 = r9_2
        
        if (rdx_10 != 0)
            rax_16 = rdx_10
        
        rbx[6] = *(rax_16 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2))
        void* rax_18 = *(r9_2 + 8)
        
        if (rax_18 != 0)
            r9_2 = rax_18
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2)) = rdi_1
else
    int32_t r12_1 = -1
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & rbp) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_142024ff6:
        rbx_1 = -1
    else
        int64_t rcx_1 = *arg1
        
        while (true)
            int64_t rax_3 = sx.q(rbx_1) << 5
            
            if (*(rax_3 + rcx_1) == *arg4)
                break
            
            rbx_1 = *(rax_3 + rcx_1 + 0x18)
            
            if (rbx_1 == 0xffffffff)
                goto label_142024ff6
    
    r13.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        void* rbp_3 = (sx.q(rbx_1) << 5) + *arg1
        int64_t* rdi = *(rbp_3 + 0x10)
        
        if (rdi != 0)
            rdi[1].d -= 1
            
            if (rdi[1].d == 1)
                (**rdi)(rdi)
                int32_t temp1_1 = *(rdi + 0xc)
                *(rdi + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rdi + 8))(rdi, 1)
        
        memmove(rbp_3, arg4, 0x18)
        int64_t rcx_5 = sx.q(arg5)
        void* r9_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *((sx.q(arg1[6].d) << 5) + *arg1) = rcx_5.d
        
        int32_t* r8_3 = (rcx_5 << 5) + *arg1
        *r8_3 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            r12_1 = arg1[6].d
        
        rbp = zx.q(arg3)
        r8_3[1] = r12_1
        rdi_1 = rbx_1
        *(arg1 + 0x34) += 1
        arg1[6].d = rcx_5.d
        void* rax_7 = *(r9_1 + 0x10)
        
        if (rax_7 != 0)
            r9_1 = rax_7
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_5.d)
        int64_t rcx_6 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
        *(r9_1 + (rcx_6 << 2)) &= not.d(rol.d(1, rcx_5.b))
    
    if (rbx_1 == 0xffffffff)
        rbx = arg4
        goto label_1420250f3

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = r13.b

return arg2
