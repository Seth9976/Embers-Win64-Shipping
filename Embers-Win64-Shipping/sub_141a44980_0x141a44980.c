// 函数: sub_141a44980
// 地址: 0x141a44980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13
r13.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp = 1
int64_t r11 = sx.q(arg3)
int32_t rdi_4

if (rax_1 == 1)
    rdi_4 = arg5
label_141a44b07:
    int32_t r8_5 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_5 u>= 4)
        uint32_t rax_20 = r8_5 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_20 + 8)
        int32_t rcx_10
        
        if (rax_20 == 0xfffffff8)
            rcx_10 = 0x20
        else
            rcx_10 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_20 + 7)
        char r9_2
        
        if (rax_20 == 0xfffffff9)
            r9_2 = 0x20
        else
            r9_2 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_10 << 0x1a s>> 0x1f)).b & (0x20 - r9_2))
    
    int32_t rax_23
    
    if (r8_5 s> 0)
        rax_23 = arg1[9].d
    
    if (r8_5 s> 0 && (rax_23 == 0 || rax_23 s< rbp))
        arg1[9].d = rbp
        sub_141a5f560(arg1)
    else
        void* r9_3 = &arg1[7]
        int32_t rax_26 = (arg1[9].d - 1) & r11.d
        arg4[0xd] = rax_26
        void* rdx_10 = *(r9_3 + 8)
        int64_t r8_6 = sx.q(rax_26)
        void* rax_27 = r9_3
        
        if (rdx_10 != 0)
            rax_27 = rdx_10
        
        arg4[0xc] = *(rax_27 + (((sx.q(arg1[9].d) - 1) & r8_6) << 2))
        void* rax_29 = *(r9_3 + 8)
        
        if (rax_29 != 0)
            r9_3 = rax_29
        
        *(r9_3 + (((sx.q(arg1[9].d) - 1) & r8_6) << 2)) = rdi_4
else
    int32_t r12_1 = -1
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r11) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_141a44a40:
        rbx_1 = -1
    else
        while (true)
            void* rdx_4 = sx.q(rbx_1) * 0x38 + *arg1
            
            if (((*(rdx_4 + 4) ^ arg4[1]) | (*(rdx_4 + 8) ^ arg4[2]) | (*(rdx_4 + 0xc) ^ arg4[3])
                    | (*arg4 ^ *rdx_4)) == 0)
                break
            
            rbx_1 = *(rdx_4 + 0x30)
            
            if (rbx_1 == 0xffffffff)
                goto label_141a44a40
    
    r13.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_4 = arg5
    else
        void* rdi_3 = sx.q(rbx_1) * 0x38 + *arg1
        int64_t rcx_6 = *(rdi_3 + 0x20)
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        memmove(rdi_3, arg4, 0x30)
        int64_t rcx_8 = sx.q(arg5)
        void* r10_2 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(sx.q(arg1[6].d) * 0x38 + *arg1) = rcx_8.d
        
        int32_t* rax_13 = rcx_8 * 0x38 + *arg1
        *rax_13 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            r12_1 = arg1[6].d
        
        rax_13[1] = r12_1
        *(arg1 + 0x34) += 1
        rdi_4 = rbx_1
        arg1[6].d = rcx_8.d
        void* rax_14 = *(r10_2 + 0x10)
        
        if (rax_14 != 0)
            r10_2 = rax_14
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_8.d)
        int64_t rcx_9 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
        *(r10_2 + (rcx_9 << 2)) &= not.d(rol.d(1, rcx_8.b))
    
    if (rbx_1 == 0xffffffff)
        r11 = zx.q(arg3)
        goto label_141a44b07

*arg2 = rdi_4

if (arg6 != 0)
    *arg6 = r13.b

return arg2
