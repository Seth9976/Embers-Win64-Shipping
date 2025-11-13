// 函数: sub_1413e1670
// 地址: 0x1413e1670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
r12.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
void* result = arg2
int32_t* r15 = arg4
int64_t r13 = sx.q(arg3.d)
int32_t rdi_5

if (rax_1 == 1)
    rdi_5 = arg5
label_1413e17e0:
    
    if (sub_140cb1970(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_2 = &arg1[7]
        int32_t rax_17 = (arg1[9].d - 1) & r13.d
        r15[7] = rax_17
        void* rdx_11 = *(r9_2 + 8)
        int64_t r8_3 = sx.q(rax_17)
        void* rax_18 = r9_2
        
        if (rdx_11 != 0)
            rax_18 = rdx_11
        
        r15[6] = *(rax_18 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2))
        void* rax_20 = *(r9_2 + 8)
        
        if (rax_20 != 0)
            r9_2 = rax_20
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2)) = rdi_5
else
    int32_t rbp_1 = -1
    int32_t rbx_1
    
    if (rax_1 != 0)
        arg3 = &arg1[7]
        void* rcx = arg1[8]
        arg2 = (sx.q(arg1[9].d) - 1) & r13
        
        if (rcx != 0)
            arg3 = rcx
        
        rbx_1 = *(arg3 + (arg2 << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_1413e171f:
        rbx_1 = -1
    else
        arg3 = *arg1
        arg4 = zx.q(*(arg4 + 0xc))
        
        while (true)
            arg2 = (sx.q(rbx_1) << 5) + arg3
            
            if (((*(arg2 + 4) ^ r15[1]) | (*(arg2 + 8) ^ r15[2]) | (*(arg2 + 0xc) ^ arg4.d)
                    | (*r15 ^ *arg2)) == 0)
                break
            
            rbx_1 = *(arg2 + 0x18)
            
            if (rbx_1 == 0xffffffff)
                goto label_1413e171f
    
    r12.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_5 = arg5
    else
        void* rdi_4 = (sx.q(rbx_1) << 5) + *arg1
        sub_1405d1550(rdi_4 + 0x10, arg2, arg3, arg4)
        memmove(rdi_4, r15, 0x18)
        int64_t rcx_8 = sx.q(arg5)
        void* r10_2 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *((sx.q(arg1[6].d) << 5) + *arg1) = rcx_8.d
        
        int32_t* r8_2 = (rcx_8 << 5) + *arg1
        *r8_2 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            rbp_1 = arg1[6].d
        
        r8_2[1] = rbp_1
        *(arg1 + 0x34) += 1
        rdi_5 = rbx_1
        arg1[6].d = rcx_8.d
        void* rax_9 = *(r10_2 + 0x10)
        
        if (rax_9 != 0)
            r10_2 = rax_9
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rcx_8.d)
        int64_t rcx_9 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
        *(r10_2 + (rcx_9 << 2)) &= not.d(rol.d(1, rcx_8.b))
    
    if (rbx_1 == 0xffffffff)
        goto label_1413e17e0

*result = rdi_5

if (arg6 != 0)
    *arg6 = r12.b

return result
