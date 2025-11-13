// 函数: sub_142141140
// 地址: 0x142141140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
r12.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t rbx = sx.q(arg3)
int32_t rdi_2

if (rax_1 == 1)
    rdi_2 = arg5
label_142141295:
    
    if (sub_1405b6470(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_2 = &arg1[7]
        int32_t rax_17 = (arg1[9].d - 1) & rbx.d
        *(arg4 + 0x14) = rax_17
        void* rdx_11 = *(r9_2 + 8)
        int64_t r8_1 = sx.q(rax_17)
        void* rax_18 = r9_2
        
        if (rdx_11 != 0)
            rax_18 = rdx_11
        
        arg4[2].d = *(rax_18 + (((sx.q(arg1[9].d) - 1) & r8_1) << 2))
        void* rax_20 = *(r9_2 + 8)
        
        if (rax_20 != 0)
            r9_2 = rax_20
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & r8_1) << 2)) = rdi_2
else
    int32_t rbp_1 = -1
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & rbx) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_1421411c5:
        rbx_1 = -1
    else
        int64_t rdx_3 = *arg1
        
        while (true)
            int64_t rcx_1 = sx.q(rbx_1) * 3
            
            if (*(rdx_3 + (rcx_1 << 3)) == *arg4)
                break
            
            rbx_1 = *(rdx_3 + (rcx_1 << 3) + 0x10)
            
            if (rbx_1 == 0xffffffff)
                goto label_1421411c5
    
    r12.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_2 = arg5
    else
        int64_t rcx_2 = sx.q(rbx_1) * 3
        int64_t rax_4 = *arg1
        int64_t* rcx_3 = *(rax_4 + (rcx_2 << 3) + 8)
        
        if (rcx_3 != 0)
            (**rcx_3)(rcx_3, 1)
        
        memmove(rax_4 + (rcx_2 << 3), arg4, 0x10)
        int64_t rcx_5 = sx.q(arg5)
        void* r9_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(*arg1 + sx.q(arg1[6].d) * 0x18) = rcx_5.d
        
        int64_t rax_8 = *arg1
        int64_t rdx_6 = rcx_5 * 3
        *(rax_8 + (rdx_6 << 3)) = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            rbp_1 = arg1[6].d
        
        *(rax_8 + (rdx_6 << 3) + 4) = rbp_1
        *(arg1 + 0x34) += 1
        arg1[6].d = rcx_5.d
        void* rax_9 = *(r9_1 + 0x10)
        
        if (rax_9 != 0)
            r9_1 = rax_9
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rcx_5.d)
        int64_t rcx_6 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
        *(r9_1 + (rcx_6 << 2)) &= not.d(rol.d(1, rcx_5.b))
        rdi_2 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        rbx = zx.q(arg3)
        goto label_142141295

*arg2 = rdi_2

if (arg6 != 0)
    *arg6 = r12.b

return arg2
