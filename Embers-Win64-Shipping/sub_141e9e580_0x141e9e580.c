// 函数: sub_141e9e580
// 地址: 0x141e9e580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15
r15.b = 0
int32_t rbp = 1
int64_t rbx

if (arg1[1].d - *(arg1 + 0x34) == 1)
    rbx = zx.q(arg5)
label_141e9e690:
    int32_t r8_4 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_4 u>= 4)
        uint32_t rax_10 = r8_4 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_10 + 8)
        int32_t rcx_4
        
        if (rax_10 == 0xfffffff8)
            rcx_4 = 0x20
        else
            rcx_4 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_10 + 7)
        char r9_2
        
        if (rax_10 == 0xfffffff9)
            r9_2 = 0x20
        else
            r9_2 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_4 << 0x1a s>> 0x1f)).b & (0x20 - r9_2))
    
    int32_t rax_13
    
    if (r8_4 s> 0)
        rax_13 = arg1[9].d
    
    if (r8_4 s> 0 && (rax_13 == 0 || rax_13 s< rbp))
        arg1[9].d = rbp
        sub_1405c0690(arg1)
    else
        void* r9_3 = &arg1[7]
        int32_t rax_16 = (arg1[9].d - 1) & arg3
        *(arg4 + 0x1c) = rax_16
        void* rdx_7 = *(r9_3 + 8)
        int64_t r8_5 = sx.q(rax_16)
        void* rax_17 = r9_3
        
        if (rdx_7 != 0)
            rax_17 = rdx_7
        
        arg4[3].d = *(rax_17 + (((sx.q(arg1[9].d) - 1) & r8_5) << 2))
        void* rax_19 = *(r9_3 + 8)
        
        if (rax_19 != 0)
            r9_3 = rax_19
        
        *(r9_3 + (((sx.q(arg1[9].d) - 1) & r8_5) << 2)) = rbx.d
else
    int32_t arg_8
    sub_141e8de00(arg1, &arg_8, arg3, arg4)
    rbx = sx.q(arg_8)
    r15.b = rbx.d != 0xffffffff
    
    if (rbx.d == 0xffffffff)
        rbx = zx.q(arg5)
    else
        void* rsi_3 = (rbx << 5) + *arg1
        int64_t rcx = *(rsi_3 + 8)
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        memmove(rsi_3, arg4, 0x18)
        int64_t rcx_2 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *((sx.q(arg1[6].d) << 5) + *arg1) = rcx_2.d
        
        int32_t rax_3 = -1
        int32_t* r8_2 = (rcx_2 << 5) + *arg1
        *r8_2 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            rax_3 = arg1[6].d
        
        r8_2[1] = rax_3
        *(arg1 + 0x34) += 1
        arg1[6].d = rcx_2.d
        void* rax_4 = *(r10_1 + 0x10)
        
        if (rax_4 != 0)
            r10_1 = rax_4
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_2.d)
        int64_t rcx_3 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_3 << 2)) &= not.d(rol.d(1, rcx_2.b))
    
    if (r15.b == 0)
        goto label_141e9e690

*arg2 = rbx.d

if (arg6 != 0)
    *arg6 = r15.b

return arg2
