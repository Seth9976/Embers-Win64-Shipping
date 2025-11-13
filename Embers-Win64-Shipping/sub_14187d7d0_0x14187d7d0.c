// 函数: sub_14187d7d0
// 地址: 0x14187d7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbp
rbp.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t* r11 = arg4
int32_t r15 = 1
int64_t rbx = sx.q(arg3)
int32_t rdi_2

if (rax_1 == 1)
    rdi_2 = arg5
label_14187d972:
    int32_t r8_5 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_5 u>= 4)
        uint32_t rax_11 = r8_5 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_11 + 8)
        int32_t rcx_7
        
        if (rax_11 == 0xfffffff8)
            rcx_7 = 0x20
        else
            rcx_7 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_11 + 7)
        char r9_3
        
        if (rax_11 == 0xfffffff9)
            r9_3 = 0x20
        else
            r9_3 = 0x1f - temp0_3
        
        r15 = 1 << ((not.d(rcx_7 << 0x1a s>> 0x1f)).b & (0x20 - r9_3))
    
    int32_t rax_14
    
    if (r8_5 s> 0)
        rax_14 = arg1[9].d
    
    if (r8_5 s> 0 && (rax_14 == 0 || rax_14 s< r15))
        arg1[9].d = r15
        sub_1408076e0(arg1)
    else
        void* r9_4 = &arg1[7]
        int32_t rax_17 = (arg1[9].d - 1) & rbx.d
        r11[7] = rax_17
        void* rdx_9 = *(r9_4 + 8)
        int64_t r8_6 = sx.q(rax_17)
        void* rax_18 = r9_4
        
        if (rdx_9 != 0)
            rax_18 = rdx_9
        
        r11[6] = *(rax_18 + (((sx.q(arg1[9].d) - 1) & r8_6) << 2))
        void* rax_20 = *(r9_4 + 8)
        
        if (rax_20 != 0)
            r9_4 = rax_20
        
        *(r9_4 + (((sx.q(arg1[9].d) - 1) & r8_6) << 2)) = rdi_2
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
    label_14187d866:
        rbx_1 = -1
    else
        int64_t rcx_1 = *arg1
        
        while (true)
            int64_t rax_3 = sx.q(rbx_1) << 5
            
            if (*(rax_3 + rcx_1) == *arg4)
                break
            
            rbx_1 = *(rax_3 + rcx_1 + 0x18)
            
            if (rbx_1 == 0xffffffff)
                goto label_14187d866
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_2 = arg5
    else
        void* r14_3 = (sx.q(rbx_1) << 5) + *arg1
        int32_t i_1 = *(r14_3 + 0x10)
        void* rcx_2 = *(r14_3 + 8)
        
        if (i_1 != 0)
            int64_t* rdi_1 = rcx_2 + 0x20
            int32_t i
            
            do
                sub_1418221b0(rdi_1)
                rdi_1 = &rdi_1[6]
                i = i_1
                i_1 -= 1
            while (i != 1)
            rcx_2 = *(r14_3 + 8)
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        memmove(r14_3, arg4, 0x18)
        int64_t rcx_5 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *((sx.q(arg1[6].d) << 5) + *arg1) = rcx_5.d
        
        int32_t* r8_3 = (rcx_5 << 5) + *arg1
        *r8_3 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            r13_1 = arg1[6].d
        
        rbp = zx.q(rbp.b)
        r11 = arg4
        rdi_2 = rbx_1
        r8_3[1] = r13_1
        *(arg1 + 0x34) += 1
        arg1[6].d = rcx_5.d
        void* rax_5 = *(r10_1 + 0x10)
        
        if (rax_5 != 0)
            r10_1 = rax_5
        
        int32_t temp3_1
        int32_t temp4_1
        temp3_1:temp4_1 = sx.q(rcx_5.d)
        int64_t rcx_6 = sx.q((temp4_1 + (temp3_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_6 << 2)) &= not.d(rol.d(1, rcx_5.b))
    
    if (rbx_1 == 0xffffffff)
        rbx = zx.q(arg3)
        goto label_14187d972

*arg2 = rdi_2

if (arg6 != 0)
    *arg6 = rbp.b

return arg2
