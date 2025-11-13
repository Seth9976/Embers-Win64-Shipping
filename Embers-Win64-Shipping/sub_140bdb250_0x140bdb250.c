// 函数: sub_140bdb250
// 地址: 0x140bdb250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
r12.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t rbx = sx.q(arg3)
int32_t rdi

if (rax_1 == 1)
    rdi = arg5
label_140bdb3f3:
    
    if (sub_140bd96d0(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_1 = &arg1[7]
        int32_t rax_17 = (arg1[9].d - 1) & rbx.d
        arg4[0x17] = rax_17
        void* rdx_11 = *(r9_1 + 8)
        int64_t r8_3 = sx.q(rax_17)
        void* rax_18 = r9_1
        
        if (rdx_11 != 0)
            rax_18 = rdx_11
        
        arg4[0x16] = *(rax_18 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2))
        void* rax_20 = *(r9_1 + 8)
        
        if (rax_20 != 0)
            r9_1 = rax_20
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2)) = rdi
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
    label_140bdb2ea:
        rbx_1 = -1
    else
        int64_t rdx_3 = *arg1
        
        while (true)
            int64_t rcx_2 = sx.q(rbx_1) * 0x60
            
            if (*(rcx_2 + rdx_3) == *arg4)
                break
            
            rbx_1 = *(rcx_2 + rdx_3 + 0x58)
            
            if (rbx_1 == 0xffffffff)
                goto label_140bdb2ea
    
    r12.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi = arg5
    else
        void* rbp_3 = sx.q(rbx_1) * 0x60 + *arg1
        *(rbp_3 + 0x50) = 0
        int64_t rcx_3 = *(rbp_3 + 0x48)
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        sub_140bdb520(rbp_3 + 8, 0)
        int64_t rcx_5 = *(rbp_3 + 0x28)
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        int64_t rcx_6 = *(rbp_3 + 8)
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        memmove(rbp_3, arg4, 0x58)
        int64_t rcx_8 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(sx.q(arg1[6].d) * 0x60 + *arg1) = rcx_8.d
        
        int32_t* rax_8 = rcx_8 * 0x60 + *arg1
        *rax_8 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            r15_1 = arg1[6].d
        
        rax_8[1] = r15_1
        *(arg1 + 0x34) += 1
        rdi = rbx_1
        arg1[6].d = rcx_8.d
        void* rax_9 = *(r10_1 + 0x10)
        
        if (rax_9 != 0)
            r10_1 = rax_9
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rcx_8.d)
        int64_t rcx_9 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_9 << 2)) &= not.d(rol.d(1, rcx_8.b))
    
    if (rbx_1 == 0xffffffff)
        rbx = zx.q(arg3)
        goto label_140bdb3f3

*arg2 = rdi

if (arg6 != 0)
    *arg6 = r12.b

return arg2
