// 函数: sub_141938220
// 地址: 0x141938220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbp
rbp.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
void* r11 = arg4
int32_t r14 = 1
int64_t rbx = sx.q(arg3)
int32_t rdi_3

if (rax_1 == 1)
    rdi_3 = arg5
label_1419383dc:
    int32_t r8_4 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_4 u>= 4)
        uint32_t rax_15 = r8_4 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_15 + 8)
        int32_t rcx_7
        
        if (rax_15 == 0xfffffff8)
            rcx_7 = 0x20
        else
            rcx_7 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_15 + 7)
        char r9_1
        
        if (rax_15 == 0xfffffff9)
            r9_1 = 0x20
        else
            r9_1 = 0x1f - temp0_3
        
        r14 = 1 << ((not.d(rcx_7 << 0x1a s>> 0x1f)).b & (0x20 - r9_1))
    
    int32_t rax_18
    
    if (r8_4 s> 0)
        rax_18 = arg1[9].d
    
    if (r8_4 s> 0 && (rax_18 == 0 || rax_18 s< r14))
        arg1[9].d = r14
        sub_14194a9f0(arg1)
    else
        void* r9_2 = &arg1[7]
        int32_t rax_21 = (arg1[9].d - 1) & rbx.d
        *(r11 + 0x584) = rax_21
        void* rdx_9 = *(r9_2 + 8)
        int64_t r8_5 = sx.q(rax_21)
        void* rax_22 = r9_2
        
        if (rdx_9 != 0)
            rax_22 = rdx_9
        
        *(r11 + 0x580) = *(rax_22 + (((sx.q(arg1[9].d) - 1) & r8_5) << 2))
        void* rax_24 = *(r9_2 + 8)
        
        if (rax_24 != 0)
            r9_2 = rax_24
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & r8_5) << 2)) = rdi_3
else
    int32_t r13_1 = -1
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & rbx) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_1419382cc:
        rbx_1 = -1
    else
        rbp = *arg1
        
        while (true)
            void* rdi_2 = sx.q(rbx_1) * 0x588 + rbp
            
            if (sub_14192cef0(rdi_2, r11) != 0)
                break
            
            rbx_1 = *(rdi_2 + 0x580)
            r11 = arg4
            
            if (rbx_1 == 0xffffffff)
                goto label_1419382cc
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_3 = arg5
    else
        void* r15_2 = sx.q(rbx_1) * 0x588 + *arg1
        sub_14192b980(r15_2 + 0x4c8)
        int64_t i_1 = 6
        void* rbp_1 = r15_2 + 0x450
        int64_t i
        
        do
            rbp_1 -= 0xb8
            sub_14192b980(rbp_1)
            i = i_1
            i_1 -= 1
        while (i != 1)
        memmove(r15_2, arg4, 0x580)
        int64_t rcx_5 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != i_1.d)
            *(sx.q(arg1[6].d) * 0x588 + *arg1) = rcx_5.d
        
        int32_t* rax_8 = rcx_5 * 0x588 + *arg1
        *rax_8 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            r13_1 = arg1[6].d
        
        rbp = zx.q(rbp.b)
        rax_8[1] = r13_1
        rdi_3 = rbx_1
        *(arg1 + 0x34) += 1
        arg1[6].d = rcx_5.d
        void* rax_9 = *(r10_1 + 0x10)
        
        if (rax_9 != 0)
            r10_1 = rax_9
        
        int32_t temp3_1
        int32_t temp4_1
        temp3_1:temp4_1 = sx.q(rcx_5.d)
        int64_t rcx_6 = sx.q((temp4_1 + (temp3_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_6 << 2)) &= not.d(rol.d(1, rcx_5.b))
    
    if (rbx_1 == 0xffffffff)
        r11 = arg4
        rbx = zx.q(arg3)
        goto label_1419383dc

*arg2 = rdi_3

if (arg6 != 0)
    *arg6 = rbp.b

return arg2
