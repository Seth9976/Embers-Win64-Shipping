// 函数: sub_140d9e100
// 地址: 0x140d9e100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t r13 = sx.q(arg3)
int32_t rdi_3

if (rax_1 == 1)
    rdi_3 = arg5
label_140d9e2c4:
    
    if (sub_140d9c190(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_2 = &arg1[7]
        int32_t rax_24 = (arg1[9].d - 1) & r13.d
        *(arg4 + 0x8c) = rax_24
        void* rdx_11 = *(r9_2 + 8)
        int64_t r8_2 = sx.q(rax_24)
        void* rax_25 = r9_2
        
        if (rdx_11 != 0)
            rax_25 = rdx_11
        
        arg4[0x11].d = *(rax_25 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2))
        void* rax_27 = *(r9_2 + 8)
        
        if (rax_27 != 0)
            r9_2 = rax_27
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2)) = rdi_3
else
    int32_t r12_1 = -1
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r13) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_140d9e1f3:
        rbx_1 = -1
    else
        int64_t rdx_3 = *arg1
        
        while (true)
            int64_t rcx_2 = sx.q(rbx_1) * 0x12
            
            if (*(rdx_3 + (rcx_2 << 3)) == *arg4 && *(rdx_3 + (rcx_2 << 3) + 0x10) == arg4[2].d
                    && *(rdx_3 + (rcx_2 << 3) + 0x14) == *(arg4 + 0x14)
                    && *(rdx_3 + (rcx_2 << 3) + 0x30) == arg4[6]
                    && *(rdx_3 + (rcx_2 << 3) + 0x40) == arg4[8]
                    && *(rdx_3 + (rcx_2 << 3) + 0x48) == arg4[9].d
                    && *(rdx_3 + (rcx_2 << 3) + 0x50) == arg4[0xa].d
                    && *(rdx_3 + (rcx_2 << 3) + 0x54) == *(arg4 + 0x54)
                    && arg4[0xe].d f== *(rdx_3 + (rcx_2 << 3) + 0x70))
                break
            
            rbx_1 = *(rdx_3 + (rcx_2 << 3) + 0x88)
            
            if (rbx_1 == 0xffffffff)
                goto label_140d9e1f3
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_3 = arg5
    else
        void* rdi_2 = sx.q(rbx_1) * 0x90 + *arg1
        sub_140d95250(rdi_2)
        memmove(rdi_2, arg4, 0x88)
        int64_t rcx_5 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(*arg1 + sx.q(arg1[6].d) * 0x90) = rcx_5.d
        
        int32_t* rax_15 = rcx_5 * 0x90 + *arg1
        *rax_15 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            r12_1 = arg1[6].d
        
        rax_15[1] = r12_1
        *(arg1 + 0x34) += 1
        rdi_3 = rbx_1
        arg1[6].d = rcx_5.d
        void* rax_16 = *(r10_1 + 0x10)
        
        if (rax_16 != 0)
            r10_1 = rax_16
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rcx_5.d)
        int64_t rcx_6 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_6 << 2)) &= not.d(rol.d(1, rcx_5.b))
    
    if (rbx_1 == 0xffffffff)
        goto label_140d9e2c4

*arg2 = rdi_3

if (arg6 != 0)
    *arg6 = rbp.b

return arg2
