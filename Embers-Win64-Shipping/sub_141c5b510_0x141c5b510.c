// 函数: sub_141c5b510
// 地址: 0x141c5b510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3.d
int64_t r13
r13.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t* result = arg2
int32_t rbp = 1
int64_t r11 = sx.q(arg3.d)
int32_t rdi_3

if (rax_1 == 1)
    rdi_3 = arg5
label_141c5b672:
    int32_t r8_4 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_4 u>= 4)
        uint32_t rax_10 = r8_4 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_10 + 8)
        int32_t rcx_7
        
        if (rax_10 == 0xfffffff8)
            rcx_7 = 0x20
        else
            rcx_7 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_10 + 7)
        char r9_2
        
        if (rax_10 == 0xfffffff9)
            r9_2 = 0x20
        else
            r9_2 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_7 << 0x1a s>> 0x1f)).b & (0x20 - r9_2))
    
    int32_t rax_13
    
    if (r8_4 s> 0)
        rax_13 = arg1[9].d
    
    if (r8_4 s> 0 && (rax_13 == 0 || rax_13 s< rbp))
        arg1[9].d = rbp
        sub_141c6aff0(arg1)
    else
        void* r9_3 = &arg1[7]
        int32_t rax_16 = (arg1[9].d - 1) & r11.d
        *(arg4 + 0x3c) = rax_16
        void* rdx_8 = *(r9_3 + 8)
        int64_t r8_5 = sx.q(rax_16)
        void* rax_17 = r9_3
        
        if (rdx_8 != 0)
            rax_17 = rdx_8
        
        arg4[7].d = *(rax_17 + (((sx.q(arg1[9].d) - 1) & r8_5) << 2))
        void* rax_19 = *(r9_3 + 8)
        
        if (rax_19 != 0)
            r9_3 = rax_19
        
        *(r9_3 + (((sx.q(arg1[9].d) - 1) & r8_5) << 2)) = rdi_3
else
    int32_t r12_1 = -1
    int32_t rbx_1
    
    if (rax_1 != 0)
        arg3 = &arg1[7]
        void* rcx = arg1[8]
        arg2 = (sx.q(arg1[9].d) - 1) & r11
        
        if (rcx != 0)
            arg3 = rcx
        
        rbx_1 = *(arg3 + (arg2 << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_141c5b5b0:
        rbx_1 = -1
    else
        arg2 = *arg1
        arg3 = *arg4
        
        while (true)
            int64_t* rcx_2 = sx.q(rbx_1) << 6
            
            if (*(rcx_2 + arg2) == arg3 && *(rcx_2 + arg2 + 8) == arg4[1].d)
                break
            
            rbx_1 = *(rcx_2 + arg2 + 0x38)
            
            if (rbx_1 == 0xffffffff)
                goto label_141c5b5b0
    
    r13.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_3 = arg5
    else
        void* rdi_2 = (sx.q(rbx_1) << 6) + *arg1
        sub_141c515f0(rdi_2 + 0x10, arg2, arg3)
        memmove(rdi_2, arg4, 0x38)
        int64_t rcx_5 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *((sx.q(arg1[6].d) << 6) + *arg1) = rcx_5.d
        
        int32_t* r8_2 = (rcx_5 << 6) + *arg1
        *r8_2 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            r12_1 = arg1[6].d
        
        r11 = zx.q(arg_18)
        r8_2[1] = r12_1
        rdi_3 = rbx_1
        *(arg1 + 0x34) += 1
        arg1[6].d = rcx_5.d
        void* rax_4 = *(r10_1 + 0x10)
        
        if (rax_4 != 0)
            r10_1 = rax_4
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_5.d)
        int64_t rcx_6 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_6 << 2)) &= not.d(rol.d(1, rcx_5.b))
    
    if (rbx_1 == 0xffffffff)
        goto label_141c5b672

*result = rdi_3

if (arg6 != 0)
    *arg6 = r13.b

return result
