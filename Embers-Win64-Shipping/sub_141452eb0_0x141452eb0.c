// 函数: sub_141452eb0
// 地址: 0x141452eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbp
rbp.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t* r11 = arg4
int32_t r14 = 1
int64_t rbx = sx.q(arg3)
int32_t rdi

if (rax_1 == 1)
    rdi = arg5
label_141453053:
    int32_t r8_6 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_6 u>= 4)
        uint32_t rax_17 = r8_6 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_17 + 8)
        int32_t rcx_6
        
        if (rax_17 == 0xfffffff8)
            rcx_6 = 0x20
        else
            rcx_6 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_17 + 7)
        char r9_2
        
        if (rax_17 == 0xfffffff9)
            r9_2 = 0x20
        else
            r9_2 = 0x1f - temp0_3
        
        r14 = 1 << ((not.d(rcx_6 << 0x1a s>> 0x1f)).b & (0x20 - r9_2))
    
    int32_t rax_20
    
    if (r8_6 s> 0)
        rax_20 = arg1[9].d
    
    if (r8_6 s> 0 && (rax_20 == 0 || rax_20 s< r14))
        arg1[9].d = r14
        sub_14145de90(arg1)
    else
        void* r9_3 = &arg1[7]
        int32_t rax_23 = (arg1[9].d - 1) & rbx.d
        r11[0x1b] = rax_23
        void* rdx_9 = *(r9_3 + 8)
        int64_t r8_7 = sx.q(rax_23)
        void* rax_24 = r9_3
        
        if (rdx_9 != 0)
            rax_24 = rdx_9
        
        r11[0x1a] = *(rax_24 + (((sx.q(arg1[9].d) - 1) & r8_7) << 2))
        void* rax_26 = *(r9_3 + 8)
        
        if (rax_26 != 0)
            r9_3 = rax_26
        
        *(r9_3 + (((sx.q(arg1[9].d) - 1) & r8_7) << 2)) = rdi
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
    label_141452f65:
        rbx_1 = -1
    else
        int64_t r8_1 = *arg1
        
        while (true)
            int32_t* rdx_3 = sx.q(rbx_1) * 0x70
            int32_t rcx_1 = *(rdx_3 + r8_1)
            char arg_8
            arg_8.d = rcx_1
            int32_t arg_c = *(rdx_3 + r8_1 + 0x5c)
            
            if (rcx_1 == *arg4 && (arg_8.q u>> 0x20).d == arg4[0x17])
                break
            
            rbx_1 = *(rdx_3 + r8_1 + 0x68)
            
            if (rbx_1 == 0xffffffff)
                goto label_141452f65
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi = arg5
    else
        int64_t i_1 = 3
        void* r15_2 = sx.q(rbx_1) * 0x70 + *arg1
        int64_t* rbp_1 = r15_2 + 0x38
        int64_t i
        
        do
            rbp_1 -= 0x10
            sub_1413de930(rbp_1)
            i = i_1
            i_1 -= 1
        while (i != 1)
        memmove(r15_2, arg4, (i_1 + 0x68).d)
        int64_t rcx_4 = sx.q(arg5)
        void* r10_2 = &arg1[2]
        
        if (*(arg1 + 0x34) != i_1.d)
            *(sx.q(arg1[6].d) * 0x70 + *arg1) = rcx_4.d
        
        int32_t* rax_10 = rcx_4 * 0x70 + *arg1
        *rax_10 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            r13_1 = arg1[6].d
        
        rbp = zx.q(rbp.b)
        r11 = arg4
        rdi = rbx_1
        rax_10[1] = r13_1
        *(arg1 + 0x34) += 1
        arg1[6].d = rcx_4.d
        void* rax_11 = *(r10_2 + 0x10)
        
        if (rax_11 != 0)
            r10_2 = rax_11
        
        int32_t temp3_1
        int32_t temp4_1
        temp3_1:temp4_1 = sx.q(rcx_4.d)
        int64_t rcx_5 = sx.q((temp4_1 + (temp3_1 & 0x1f)) s>> 5)
        *(r10_2 + (rcx_5 << 2)) &= not.d(rol.d(1, rcx_4.b))
    
    if (rbx_1 == 0xffffffff)
        rbx = zx.q(arg3)
        goto label_141453053

*arg2 = rdi

if (arg6 != 0)
    *arg6 = rbp.b

return arg2
