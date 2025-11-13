// 函数: sub_141954ab0
// 地址: 0x141954ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14
r14.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp = 1
int64_t r11 = sx.q(arg3)
int32_t rdi_7

if (rax_1 == 1)
    rdi_7 = arg5
label_141954c19:
    int32_t r8_5 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_5 u>= 4)
        uint32_t rax_10 = r8_5 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_10 + 8)
        int32_t rcx_6
        
        if (rax_10 == 0xfffffff8)
            rcx_6 = 0x20
        else
            rcx_6 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_10 + 7)
        char r9_2
        
        if (rax_10 == 0xfffffff9)
            r9_2 = 0x20
        else
            r9_2 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_6 << 0x1a s>> 0x1f)).b & (0x20 - r9_2))
    
    int32_t rax_13
    
    if (r8_5 s> 0)
        rax_13 = arg1[9].d
    
    if (r8_5 s> 0 && (rax_13 == 0 || rax_13 s< rbp))
        arg1[9].d = rbp
        sub_14195a7f0(arg1)
    else
        void* r9_3 = &arg1[7]
        int32_t rax_16 = (arg1[9].d - 1) & r11.d
        *(arg4 + 0x1fc) = rax_16
        void* rdx_10 = *(r9_3 + 8)
        int64_t r8_6 = sx.q(rax_16)
        void* rax_17 = r9_3
        
        if (rdx_10 != 0)
            rax_17 = rdx_10
        
        *(arg4 + 0x1f8) = *(rax_17 + (((sx.q(arg1[9].d) - 1) & r8_6) << 2))
        void* rax_19 = *(r9_3 + 8)
        
        if (rax_19 != 0)
            r9_3 = rax_19
        
        *(r9_3 + (((sx.q(arg1[9].d) - 1) & r8_6) << 2)) = rdi_7
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
    label_141954b54:
        rbx_1 = -1
    else
        r14 = *arg1
        
        while (true)
            void* rdi_3 = (sx.q(rbx_1) << 9) + r14
            
            if (sub_1419529c0(rdi_3, arg4) != 0)
                break
            
            rbx_1 = *(rdi_3 + 0x1f8)
            
            if (rbx_1 == 0xffffffff)
                goto label_141954b54
    
    r14.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_7 = arg5
    else
        void* rdi_6 = (sx.q(rbx_1) << 9) + *arg1
        sub_14081c9d0(rdi_6 + 0x1f0)
        memmove(rdi_6, arg4, 0x1f8)
        int64_t rcx_4 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *((sx.q(arg1[6].d) << 9) + *arg1) = rcx_4.d
        
        int32_t* r8_3 = (rcx_4 << 9) + *arg1
        *r8_3 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            r12_1 = arg1[6].d
        
        r8_3[1] = r12_1
        *(arg1 + 0x34) += 1
        rdi_7 = rbx_1
        arg1[6].d = rcx_4.d
        void* rax_4 = *(r10_1 + 0x10)
        
        if (rax_4 != 0)
            r10_1 = rax_4
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_4.d)
        int64_t rcx_5 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_5 << 2)) &= not.d(rol.d(1, rcx_4.b))
    
    if (rbx_1 == 0xffffffff)
        r11 = zx.q(arg3)
        goto label_141954c19

*arg2 = rdi_7

if (arg6 != 0)
    *arg6 = r14.b

return arg2
