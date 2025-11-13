// 函数: sub_141937810
// 地址: 0x141937810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15
r15.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp = 1
int64_t r13 = sx.q(arg3)
int32_t rdi_1

if (rax_1 == 1)
    rdi_1 = arg5
label_141937964:
    int32_t r8_2 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_2 u>= 4)
        uint32_t rax_16 = r8_2 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_16 + 8)
        int32_t rcx_8
        
        if (rax_16 == 0xfffffff8)
            rcx_8 = 0x20
        else
            rcx_8 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_16 + 7)
        char r9_4
        
        if (rax_16 == 0xfffffff9)
            r9_4 = 0x20
        else
            r9_4 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_8 << 0x1a s>> 0x1f)).b & (0x20 - r9_4))
    
    int32_t rax_19
    
    if (r8_2 s> 0)
        rax_19 = arg1[9].d
    
    if (r8_2 s> 0 && (rax_19 == 0 || rax_19 s< rbp))
        arg1[9].d = rbp
        sub_141949f70(arg1)
    else
        void* r9_5 = &arg1[7]
        int32_t rax_22 = (arg1[9].d - 1) & r13.d
        *(arg4 + 0x14) = rax_22
        void* rdx_10 = *(r9_5 + 8)
        int64_t r8_3 = sx.q(rax_22)
        void* rax_23 = r9_5
        
        if (rdx_10 != 0)
            rax_23 = rdx_10
        
        arg4[2].d = *(rax_23 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2))
        void* rax_25 = *(r9_5 + 8)
        
        if (rax_25 != 0)
            r9_5 = rax_25
        
        *(r9_5 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2)) = rdi_1
else
    int64_t r8 = *arg4
    int32_t rdi = -1
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r9 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r9 = rcx
        
        rbx_1 = *(r9 + (((sx.q(arg1[9].d) - 1) & r13) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_1419378ba:
        rbx_1 = -1
    else
        int64_t r9_1 = *arg1
        
        while (true)
            int64_t rcx_1 = sx.q(rbx_1) * 3
            int64_t rax_3 = *(r9_1 + (rcx_1 << 3))
            
            if (rax_3.d == r8.d && (rax_3 u>> 0x20).d == (r8 u>> 0x20).d)
                break
            
            rbx_1 = *(r9_1 + (rcx_1 << 3) + 0x10)
            
            if (rbx_1 == 0xffffffff)
                goto label_1419378ba
    
    r15.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        memmove(*arg1 + sx.q(rbx_1) * 0x18, arg4, 0x10)
        int64_t rcx_6 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(*arg1 + sx.q(arg1[6].d) * 0x18) = rcx_6.d
        
        int64_t rax_9 = *arg1
        int64_t rdx_6 = rcx_6 * 3
        *(rax_9 + (rdx_6 << 3)) = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            rdi = arg1[6].d
        
        *(rax_9 + (rdx_6 << 3) + 4) = rdi
        *(arg1 + 0x34) += 1
        rdi_1 = rbx_1
        arg1[6].d = rcx_6.d
        void* rax_10 = *(r10_1 + 0x10)
        
        if (rax_10 != 0)
            r10_1 = rax_10
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_6.d)
        int64_t rcx_7 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_7 << 2)) &= not.d(rol.d(1, rcx_6.b))
    
    if (rbx_1 == 0xffffffff)
        goto label_141937964

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = r15.b

return arg2
