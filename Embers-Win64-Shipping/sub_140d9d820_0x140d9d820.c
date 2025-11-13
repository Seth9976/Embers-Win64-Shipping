// 函数: sub_140d9d820
// 地址: 0x140d9d820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t r12 = sx.q(arg3)
int32_t rdi_1

if (rax_1 == 1)
    rdi_1 = arg5
label_140d9d99a:
    
    if (sub_140d9bf80(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_2 = &arg1[7]
        int32_t rax_21 = (arg1[9].d - 1) & r12.d
        *(arg4 + 0x2c) = rax_21
        void* rdx_11 = *(r9_2 + 8)
        int64_t r8_2 = sx.q(rax_21)
        void* rax_22 = r9_2
        
        if (rdx_11 != 0)
            rax_22 = rdx_11
        
        arg4[5].d = *(rax_22 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2))
        void* rax_24 = *(r9_2 + 8)
        
        if (rax_24 != 0)
            r9_2 = rax_24
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2)) = rdi_1
else
    int32_t rdi = -1
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r12) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_140d9d8dd:
        rbx_1 = -1
    else
        int64_t rdx_3 = *arg1
        
        while (true)
            int64_t rcx_2 = sx.q(rbx_1) * 6
            
            if (*(rdx_3 + (rcx_2 << 3)) == *arg4 && *(rdx_3 + (rcx_2 << 3) + 8) == arg4[1].d
                    && *(rdx_3 + (rcx_2 << 3) + 0xc) == *(arg4 + 0xc)
                    && *(rdx_3 + (rcx_2 << 3) + 0x10) == arg4[2].d
                    && *(rdx_3 + (rcx_2 << 3) + 0x14) == *(arg4 + 0x14)
                    && arg4[3].d f== *(rdx_3 + (rcx_2 << 3) + 0x18))
                break
            
            rbx_1 = *(rdx_3 + (rcx_2 << 3) + 0x28)
            
            if (rbx_1 == 0xffffffff)
                goto label_140d9d8dd
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        memmove(sx.q(rbx_1) * 0x30 + *arg1, arg4, 0x28)
        int64_t rcx_6 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(*arg1 + sx.q(arg1[6].d) * 0x30) = rcx_6.d
        
        int32_t* rax_12 = rcx_6 * 0x30 + *arg1
        *rax_12 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            rdi = arg1[6].d
        
        rax_12[1] = rdi
        *(arg1 + 0x34) += 1
        rdi_1 = rbx_1
        arg1[6].d = rcx_6.d
        void* rax_13 = *(r10_1 + 0x10)
        
        if (rax_13 != 0)
            r10_1 = rax_13
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rcx_6.d)
        int64_t rcx_7 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_7 << 2)) &= not.d(rol.d(1, rcx_6.b))
    
    if (rbx_1 == 0xffffffff)
        goto label_140d9d99a

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = rbp.b

return arg2
