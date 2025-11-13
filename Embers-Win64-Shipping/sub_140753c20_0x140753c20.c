// 函数: sub_140753c20
// 地址: 0x140753c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13
r13.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp = 1
int64_t r11 = sx.q(arg3)
int32_t rdi_3

if (rax_1 == 1)
    rdi_3 = arg5
label_140753da1:
    int32_t r8_6 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_6 u>= 4)
        uint32_t rax_11 = r8_6 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_11 + 8)
        int32_t rcx_9
        
        if (rax_11 == 0xfffffff8)
            rcx_9 = 0x20
        else
            rcx_9 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_11 + 7)
        char r9_2
        
        if (rax_11 == 0xfffffff9)
            r9_2 = 0x20
        else
            r9_2 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_9 << 0x1a s>> 0x1f)).b & (0x20 - r9_2))
    
    int32_t rax_14
    
    if (r8_6 s> 0)
        rax_14 = arg1[9].d
    
    if (r8_6 s> 0 && (rax_14 == 0 || rax_14 s< rbp))
        arg1[9].d = rbp
        sub_140772fc0(arg1)
    else
        void* r9_3 = &arg1[7]
        int32_t rax_17 = (arg1[9].d - 1) & r11.d
        *(arg4 + 0x3c) = rax_17
        void* rdx_10 = *(r9_3 + 8)
        int64_t r8_7 = sx.q(rax_17)
        void* rax_18 = r9_3
        
        if (rdx_10 != 0)
            rax_18 = rdx_10
        
        arg4[7].d = *(rax_18 + (((sx.q(arg1[9].d) - 1) & r8_7) << 2))
        void* rax_20 = *(r9_3 + 8)
        
        if (rax_20 != 0)
            r9_3 = rax_20
        
        *(r9_3 + (((sx.q(arg1[9].d) - 1) & r8_7) << 2)) = rdi_3
else
    int32_t r12_1 = -1
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r11) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_140753ccc:
        rbx_1 = -1
    else
        while (true)
            int64_t* rcx_3 = (sx.q(rbx_1) << 6) + *arg1
            
            if (*rcx_3 == *arg4 && rcx_3[1] == arg4[1] && rcx_3[2].w == arg4[2].w)
                break
            
            rbx_1 = rcx_3[7].d
            
            if (rbx_1 == 0xffffffff)
                goto label_140753ccc
    
    r13.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_3 = arg5
    else
        void* rdi_2 = (sx.q(rbx_1) << 6) + *arg1
        int64_t rcx_4 = *(rdi_2 + 0x28)
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        int64_t rcx_5 = *(rdi_2 + 0x18)
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        memmove(rdi_2, arg4, 0x38)
        int64_t rcx_7 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *((sx.q(arg1[6].d) << 6) + *arg1) = rcx_7.d
        
        int32_t* r8_4 = (rcx_7 << 6) + *arg1
        *r8_4 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            r12_1 = arg1[6].d
        
        r11 = zx.q(arg3)
        r8_4[1] = r12_1
        rdi_3 = rbx_1
        *(arg1 + 0x34) += 1
        arg1[6].d = rcx_7.d
        void* rax_5 = *(r10_1 + 0x10)
        
        if (rax_5 != 0)
            r10_1 = rax_5
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_7.d)
        int64_t rcx_8 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_8 << 2)) &= not.d(rol.d(1, rcx_7.b))
    
    if (rbx_1 == 0xffffffff)
        goto label_140753da1

*arg2 = rdi_3

if (arg6 != 0)
    *arg6 = r13.b

return arg2
