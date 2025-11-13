// 函数: sub_140a42a90
// 地址: 0x140a42a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
int32_t rsi = 1
int64_t rbx

if (arg1[1].d - *(arg1 + 0x34) == 1)
    rbx = zx.q(arg5)
label_140a42bab:
    int32_t r8_3 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_3 u>= 4)
        uint32_t rax_12 = r8_3 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_12 + 8)
        int32_t rcx_5
        
        if (rax_12 == 0xfffffff8)
            rcx_5 = 0x20
        else
            rcx_5 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_12 + 7)
        char r9_1
        
        if (rax_12 == 0xfffffff9)
            r9_1 = 0x20
        else
            r9_1 = 0x1f - temp0_3
        
        rsi = 1 << ((not.d(rcx_5 << 0x1a s>> 0x1f)).b & (0x20 - r9_1))
    
    int32_t rax_15
    
    if (r8_3 s> 0)
        rax_15 = arg1[9].d
    
    if (r8_3 s> 0 && (rax_15 == 0 || rax_15 s< rsi))
        arg1[9].d = rsi
        sub_140a4efc0(arg1)
    else
        void* r9_2 = &arg1[7]
        int32_t rax_18 = (arg1[9].d - 1) & arg3
        *(arg4 + 0xb4) = rax_18
        void* rdx_7 = *(r9_2 + 8)
        int64_t r8_4 = sx.q(rax_18)
        void* rax_19 = r9_2
        
        if (rdx_7 != 0)
            rax_19 = rdx_7
        
        arg4[0x16].d = *(rax_19 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2))
        void* rax_21 = *(r9_2 + 8)
        
        if (rax_21 != 0)
            r9_2 = rax_21
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2)) = rbx.d
else
    int32_t arg_8
    sub_140a3a5f0(arg1, &arg_8, arg3, arg4)
    rbx = sx.q(arg_8)
    rbp.b = rbx.d != 0xffffffff
    
    if (rbx.d == 0xffffffff)
        rbx = zx.q(arg5)
    else
        int64_t* r14_2 = rbx * 0xb8 + *arg1
        sub_140a3c110(&r14_2[2])
        int64_t rcx_1 = *r14_2
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        memmove(r14_2, arg4, 0xb0)
        int64_t rcx_3 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(sx.q(arg1[6].d) * 0xb8 + *arg1) = rcx_3.d
        
        int32_t rdx_3 = -1
        int32_t* rax_5 = rcx_3 * 0xb8 + *arg1
        *rax_5 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            rdx_3 = arg1[6].d
        
        rax_5[1] = rdx_3
        *(arg1 + 0x34) += 1
        arg1[6].d = rcx_3.d
        void* rax_6 = *(r10_1 + 0x10)
        
        if (rax_6 != 0)
            r10_1 = rax_6
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_3.d)
        int64_t rcx_4 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_4 << 2)) &= not.d(rol.d(1, rcx_3.b))
    
    if (rbp.b == 0)
        goto label_140a42bab

*arg2 = rbx.d

if (arg6 != 0)
    *arg6 = rbp.b

return arg2
