// 函数: sub_140d9d620
// 地址: 0x140d9d620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t r13 = sx.q(arg3)
int32_t rdi_2

if (rax_1 == 1)
    rdi_2 = arg5
label_140d9d7a2:
    
    if (sub_140d9bed0(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_1 = &arg1[7]
        int32_t rax_19 = (arg1[9].d - 1) & r13.d
        *(arg4 + 0x74) = rax_19
        void* rdx_10 = *(r9_1 + 8)
        int64_t r8_4 = sx.q(rax_19)
        void* rax_20 = r9_1
        
        if (rdx_10 != 0)
            rax_20 = rdx_10
        
        arg4[0xe].d = *(rax_20 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2))
        void* rax_22 = *(r9_1 + 8)
        
        if (rax_22 != 0)
            r9_1 = rax_22
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2)) = rdi_2
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
    label_140d9d6d3:
        rbx_1 = -1
    else
        int64_t rdx_3 = *arg1
        
        while (true)
            int64_t* rcx_1 = sx.q(rbx_1) * 0x78
            
            if (*(rcx_1 + rdx_3) == *arg4 && *(rcx_1 + rdx_3 + 8) == arg4[1].d
                    && *(rcx_1 + rdx_3 + 0xc) == *(arg4 + 0xc)
                    && *(rcx_1 + rdx_3 + 0x10) == arg4[2].d
                    && *(arg4 + 0x14) f== *(rcx_1 + rdx_3 + 0x14))
                break
            
            rbx_1 = *(rcx_1 + rdx_3 + 0x70)
            
            if (rbx_1 == 0xffffffff)
                goto label_140d9d6d3
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_2 = arg5
    else
        void* rdi_1 = sx.q(rbx_1) * 0x78 + *arg1
        int64_t rcx_2 = *(rdi_1 + 0x60)
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        memmove(rdi_1, arg4, 0x70)
        int64_t rcx_4 = sx.q(arg5)
        void* r9 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(sx.q(arg1[6].d) * 0x78 + *arg1) = rcx_4.d
        
        int32_t* rax_10 = rcx_4 * 0x78 + *arg1
        *rax_10 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            r12_1 = arg1[6].d
        
        rax_10[1] = r12_1
        *(arg1 + 0x34) += 1
        rdi_2 = rbx_1
        arg1[6].d = rcx_4.d
        void* rax_11 = *(r9 + 0x10)
        
        if (rax_11 != 0)
            r9 = rax_11
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rcx_4.d)
        int64_t rcx_5 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
        *(r9 + (rcx_5 << 2)) &= not.d(rol.d(1, rcx_4.b))
    
    if (rbx_1 == 0xffffffff)
        goto label_140d9d7a2

*arg2 = rdi_2

if (arg6 != 0)
    *arg6 = rbp.b

return arg2
