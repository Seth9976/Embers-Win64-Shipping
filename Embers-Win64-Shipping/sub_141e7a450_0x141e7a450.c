// 函数: sub_141e7a450
// 地址: 0x141e7a450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13
r13.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp = 1
int64_t r10 = sx.q(arg3)
int32_t rdi_1

if (rax_1 == 1)
    rdi_1 = arg5
label_141e7a59b:
    int32_t rdx_10 = arg1[1].d - *(arg1 + 0x34)
    
    if (rdx_10 u>= 4)
        uint32_t rax_15 = rdx_10 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_15 + 8)
        int32_t rcx_6
        
        if (rax_15 == 0xfffffff8)
            rcx_6 = 0x20
        else
            rcx_6 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_15 + 7)
        char r8_2
        
        if (rax_15 == 0xfffffff9)
            r8_2 = 0x20
        else
            r8_2 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_6 << 0x1a s>> 0x1f)).b & (0x20 - r8_2))
    
    int32_t rax_18
    
    if (rdx_10 s> 0)
        rax_18 = arg1[9].d
    
    if (rdx_10 s> 0 && (rax_18 == 0 || rax_18 s< rbp))
        arg1[9].d = rbp
        sub_141e83bb0(arg1)
    else
        void* r9_4 = &arg1[7]
        int32_t rax_21 = (arg1[9].d - 1) & r10.d
        *(arg4 + 0x24) = rax_21
        void* rdx_11 = *(r9_4 + 8)
        int64_t r8_3 = sx.q(rax_21)
        void* rax_22 = r9_4
        
        if (rdx_11 != 0)
            rax_22 = rdx_11
        
        *(arg4 + 0x20) = *(rax_22 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2))
        void* rax_24 = *(r9_4 + 8)
        
        if (rax_24 != 0)
            r9_4 = rax_24
        
        *(r9_4 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2)) = rdi_1
else
    int32_t rdi = -1
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r10) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_141e7a4f0:
        rbx_1 = -1
    else
        int64_t rdx_3 = *arg1
        
        while (true)
            int64_t rcx_1 = sx.q(rbx_1) * 5
            
            if (*(rdx_3 + (rcx_1 << 3) + 8) == *(arg4 + 8)
                    && *(rdx_3 + (rcx_1 << 3) + 0x10) == *(arg4 + 0x10))
                break
            
            rbx_1 = *(rdx_3 + (rcx_1 << 3) + 0x20)
            
            if (rbx_1 == 0xffffffff)
                goto label_141e7a4f0
    
    r13.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        memmove(*arg1 + sx.q(rbx_1) * 0x28, arg4, 0x20)
        int64_t rcx_4 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(*arg1 + sx.q(arg1[6].d) * 0x28) = rcx_4.d
        
        int64_t rax_8 = *arg1
        int64_t rdx_6 = rcx_4 * 5
        *(rax_8 + (rdx_6 << 3)) = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            rdi = arg1[6].d
        
        *(rax_8 + (rdx_6 << 3) + 4) = rdi
        *(arg1 + 0x34) += 1
        rdi_1 = rbx_1
        arg1[6].d = rcx_4.d
        void* rax_9 = *(r10_1 + 0x10)
        
        if (rax_9 != 0)
            r10_1 = rax_9
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_4.d)
        int64_t rcx_5 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_5 << 2)) &= not.d(rol.d(1, rcx_4.b))
        r10 = zx.q(arg3)
    
    if (rbx_1 == 0xffffffff)
        goto label_141e7a59b

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = r13.b

return arg2
