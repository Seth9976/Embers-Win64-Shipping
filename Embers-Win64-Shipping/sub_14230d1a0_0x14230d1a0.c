// 函数: sub_14230d1a0
// 地址: 0x14230d1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15
r15.b = 0
int32_t rbp = 1
int64_t r13 = sx.q(arg3)
int32_t rcx_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rdi_1

if (rcx_1 == 1)
    rdi_1 = arg5
label_14230d2ea:
    int32_t r8_5 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_5 u>= 4)
        uint32_t rax_14 = r8_5 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_14 + 8)
        int32_t rcx_8
        
        if (rax_14 == 0xfffffff8)
            rcx_8 = 0x20
        else
            rcx_8 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_14 + 7)
        char r9_3
        
        if (rax_14 == 0xfffffff9)
            r9_3 = 0x20
        else
            r9_3 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_8 << 0x1a s>> 0x1f)).b & (0x20 - r9_3))
    
    int32_t rax_17
    
    if (r8_5 s> 0)
        rax_17 = arg1[9].d
    
    if (r8_5 s> 0 && (rax_17 == 0 || rax_17 s< rbp))
        arg1[9].d = rbp
        sub_141ce06e0(arg1)
    else
        void* r9_4 = &arg1[7]
        int32_t rax_20 = (arg1[9].d - 1) & r13.d
        *(arg4 + 0x54) = rax_20
        void* rdx_9 = *(r9_4 + 8)
        int64_t r8_6 = sx.q(rax_20)
        void* rax_21 = r9_4
        
        if (rdx_9 != 0)
            rax_21 = rdx_9
        
        arg4[0xa].d = *(rax_21 + (((sx.q(arg1[9].d) - 1) & r8_6) << 2))
        void* rax_23 = *(r9_4 + 8)
        
        if (rax_23 != 0)
            r9_4 = rax_23
        
        *(r9_4 + (((sx.q(arg1[9].d) - 1) & r8_6) << 2)) = rdi_1
else
    int32_t rdi = -1
    int32_t rbx_1
    
    if (rcx_1 != 0)
        void* rdx = arg1[8]
        void* r9 = &arg1[7]
        
        if (rdx != 0)
            r9 = rdx
        
        rbx_1 = *(r9 + (((sx.q(arg1[9].d) - 1) & r13) << 2))
    
    if (rcx_1 == 0 || rbx_1 == 0xffffffff)
    label_14230d23a:
        rbx_1 = -1
    else
        int64_t r8_3 = *arg1
        
        while (true)
            int64_t rdx_2 = sx.q(rbx_1) * 0x60
            
            if (*(rdx_2 + r8_3) == *arg4)
                break
            
            rbx_1 = *(rdx_2 + r8_3 + 0x50)
            
            if (rbx_1 == 0xffffffff)
                goto label_14230d23a
    
    r15.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        memmove(sx.q(rbx_1) * 0x60 + *arg1, arg4, 0x50)
        int64_t rcx_6 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(sx.q(arg1[6].d) * 0x60 + *arg1) = rcx_6.d
        
        int32_t* rax_7 = rcx_6 * 0x60 + *arg1
        *rax_7 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            rdi = arg1[6].d
        
        rax_7[1] = rdi
        *(arg1 + 0x34) += 1
        rdi_1 = rbx_1
        arg1[6].d = rcx_6.d
        void* rax_8 = *(r10_1 + 0x10)
        
        if (rax_8 != 0)
            r10_1 = rax_8
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_6.d)
        int64_t rcx_7 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_7 << 2)) &= not.d(rol.d(1, rcx_6.b))
    
    if (rbx_1 == 0xffffffff)
        goto label_14230d2ea

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = r15.b

return arg2
