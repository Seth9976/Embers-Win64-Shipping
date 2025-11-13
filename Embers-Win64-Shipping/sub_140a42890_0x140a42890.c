// 函数: sub_140a42890
// 地址: 0x140a42890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
r12.b = 0
int32_t r10 = arg3
int32_t rbp = 1
int64_t rbx

if (arg1[1].d - *(arg1 + 0x34) == 1)
    rbx = zx.q(arg5)
label_140a429ae:
    int32_t rdx_7 = arg1[1].d - *(arg1 + 0x34)
    
    if (rdx_7 u>= 4)
        uint32_t rax_13 = rdx_7 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_13 + 8)
        int32_t rcx_5
        
        if (rax_13 == 0xfffffff8)
            rcx_5 = 0x20
        else
            rcx_5 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_13 + 7)
        char r8_1
        
        if (rax_13 == 0xfffffff9)
            r8_1 = 0x20
        else
            r8_1 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_5 << 0x1a s>> 0x1f)).b & (0x20 - r8_1))
    
    int32_t rax_16
    
    if (rdx_7 s> 0)
        rax_16 = arg1[9].d
    
    if (rdx_7 s> 0 && (rax_16 == 0 || rax_16 s< rbp))
        arg1[9].d = rbp
        sub_1405d3260(arg1)
    else
        void* r9_4 = &arg1[7]
        int32_t rax_19 = (arg1[9].d - 1) & r10
        *(arg4 + 0x24) = rax_19
        void* rdx_8 = *(r9_4 + 8)
        int64_t r8_2 = sx.q(rax_19)
        void* rax_20 = r9_4
        
        if (rdx_8 != 0)
            rax_20 = rdx_8
        
        arg4[4].d = *(rax_20 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2))
        void* rax_22 = *(r9_4 + 8)
        
        if (rax_22 != 0)
            r9_4 = rax_22
        
        *(r9_4 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2)) = rbx.d
else
    int32_t arg_8
    sub_140a3a4d0(arg1, &arg_8, arg3, arg4)
    rbx = sx.q(arg_8)
    r12.b = rbx.d != 0xffffffff
    
    if (rbx.d == 0xffffffff)
        rbx = zx.q(arg5)
    else
        int64_t* rdi_1 = *arg1 + rbx * 0x28
        sub_140a3c0a0(rdi_1)
        memmove(rdi_1, arg4, 0x20)
        int64_t rcx_3 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(*arg1 + sx.q(arg1[6].d) * 0x28) = rcx_3.d
        
        int32_t* r8 = *arg1 + rcx_3 * 0x28
        int32_t rax_6 = -1
        *r8 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            rax_6 = arg1[6].d
        
        r8[1] = rax_6
        *(arg1 + 0x34) += 1
        arg1[6].d = rcx_3.d
        void* rax_7 = *(r10_1 + 0x10)
        
        if (rax_7 != 0)
            r10_1 = rax_7
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_3.d)
        int64_t rcx_4 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_4 << 2)) &= not.d(rol.d(1, rcx_3.b))
    
    if (r12.b == 0)
        r10 = arg3
        goto label_140a429ae

*arg2 = rbx.d

if (arg6 != 0)
    *arg6 = r12.b

return arg2
