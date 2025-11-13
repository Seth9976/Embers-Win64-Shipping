// 函数: sub_141e5aff0
// 地址: 0x141e5aff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
r12.b = 0
int32_t rbp = 1
int64_t r11 = sx.q(arg3)
int32_t rcx_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rdi_2

if (rcx_1 == 1)
    rdi_2 = arg5
label_141e5b149:
    int32_t r8_7 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_7 u>= 4)
        uint32_t rax_13 = r8_7 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_13 + 8)
        int32_t rcx_7
        
        if (rax_13 == 0xfffffff8)
            rcx_7 = 0x20
        else
            rcx_7 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_13 + 7)
        char r9_2
        
        if (rax_13 == 0xfffffff9)
            r9_2 = 0x20
        else
            r9_2 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_7 << 0x1a s>> 0x1f)).b & (0x20 - r9_2))
    
    int32_t rax_16
    
    if (r8_7 s> 0)
        rax_16 = arg1[9].d
    
    if (r8_7 s> 0 && (rax_16 == 0 || rax_16 s< rbp))
        arg1[9].d = rbp
        sub_1407737f0(arg1)
    else
        void* r9_3 = &arg1[7]
        int32_t rax_19 = (arg1[9].d - 1) & r11.d
        *(arg4 + 0x34) = rax_19
        void* rdx_7 = *(r9_3 + 8)
        int64_t r8_8 = sx.q(rax_19)
        void* rax_20 = r9_3
        
        if (rdx_7 != 0)
            rax_20 = rdx_7
        
        arg4[6].d = *(rax_20 + (((sx.q(arg1[9].d) - 1) & r8_8) << 2))
        void* rax_22 = *(r9_3 + 8)
        
        if (rax_22 != 0)
            r9_3 = rax_22
        
        *(r9_3 + (((sx.q(arg1[9].d) - 1) & r8_8) << 2)) = rdi_2
else
    int32_t r15_1 = -1
    int32_t rbx_1
    
    if (rcx_1 != 0)
        void* rdx = arg1[8]
        void* r9 = &arg1[7]
        
        if (rdx != 0)
            r9 = rdx
        
        rbx_1 = *(r9 + (((sx.q(arg1[9].d) - 1) & r11) << 2))
    
    if (rcx_1 == 0 || rbx_1 == 0xffffffff)
    label_141e5b087:
        rbx_1 = -1
    else
        int64_t r8_3 = *arg1
        
        while (true)
            int64_t* rdx_1 = sx.q(rbx_1) * 0x38
            
            if (*(rdx_1 + r8_3) == *arg4)
                break
            
            rbx_1 = *(rdx_1 + r8_3 + 0x30)
            
            if (rbx_1 == 0xffffffff)
                goto label_141e5b087
    
    r12.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_2 = arg5
    else
        void* rdi_1 = sx.q(rbx_1) * 0x38 + *arg1
        sub_1408464b0(rdi_1 + 0x20)
        memmove(rdi_1, arg4, 0x30)
        int64_t rcx_5 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(sx.q(arg1[6].d) * 0x38 + *arg1) = rcx_5.d
        
        int32_t* rax_6 = rcx_5 * 0x38 + *arg1
        *rax_6 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            r15_1 = arg1[6].d
        
        r11 = zx.q(arg3)
        rax_6[1] = r15_1
        rdi_2 = rbx_1
        *(arg1 + 0x34) += 1
        arg1[6].d = rcx_5.d
        void* rax_7 = *(r10_1 + 0x10)
        
        if (rax_7 != 0)
            r10_1 = rax_7
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_5.d)
        int64_t rcx_6 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_6 << 2)) &= not.d(rol.d(1, rcx_5.b))
    
    if (rbx_1 == 0xffffffff)
        goto label_141e5b149

*arg2 = rdi_2

if (arg6 != 0)
    *arg6 = r12.b

return arg2
