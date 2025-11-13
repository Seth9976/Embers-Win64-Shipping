// 函数: sub_140b36be0
// 地址: 0x140b36be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
r12.b = 0
int32_t rbp = 1
int64_t r11 = sx.q(arg3)
int32_t rcx_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rdi_3

if (rcx_1 == 1)
    rdi_3 = arg5
label_140b36d38:
    int32_t r8_7 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_7 u>= 4)
        uint32_t rax_9 = r8_7 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9 + 8)
        int32_t rcx_8
        
        if (rax_9 == 0xfffffff8)
            rcx_8 = 0x20
        else
            rcx_8 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_9 + 7)
        char r9_3
        
        if (rax_9 == 0xfffffff9)
            r9_3 = 0x20
        else
            r9_3 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_8 << 0x1a s>> 0x1f)).b & (0x20 - r9_3))
    
    int32_t rax_12
    
    if (r8_7 s> 0)
        rax_12 = arg1[9].d
    
    if (r8_7 s> 0 && (rax_12 == 0 || rax_12 s< rbp))
        arg1[9].d = rbp
        sub_1405c1a70(arg1)
    else
        void* r9_4 = &arg1[7]
        int32_t rax_15 = (arg1[9].d - 1) & r11.d
        *(arg4 + 0x1c) = rax_15
        void* rdx_8 = *(r9_4 + 8)
        int64_t r8_8 = sx.q(rax_15)
        void* rax_16 = r9_4
        
        if (rdx_8 != 0)
            rax_16 = rdx_8
        
        arg4[3].d = *(rax_16 + (((sx.q(arg1[9].d) - 1) & r8_8) << 2))
        void* rax_18 = *(r9_4 + 8)
        
        if (rax_18 != 0)
            r9_4 = rax_18
        
        *(r9_4 + (((sx.q(arg1[9].d) - 1) & r8_8) << 2)) = rdi_3
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
    label_140b36c76:
        rbx_1 = -1
    else
        int64_t rdx_1 = *arg1
        
        while (true)
            int64_t rcx_3 = sx.q(rbx_1) << 5
            
            if (*(rcx_3 + rdx_1) == *arg4)
                break
            
            rbx_1 = *(rcx_3 + rdx_1 + 0x18)
            
            if (rbx_1 == 0xffffffff)
                goto label_140b36c76
    
    r12.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_3 = arg5
    else
        void* rdi_2 = (sx.q(rbx_1) << 5) + *arg1
        sub_1405ec5c0(rdi_2 + 8)
        memmove(rdi_2, arg4, 0x18)
        int64_t rcx_6 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *((sx.q(arg1[6].d) << 5) + *arg1) = rcx_6.d
        
        int32_t* r8_5 = (rcx_6 << 5) + *arg1
        *r8_5 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            r15_1 = arg1[6].d
        
        r11 = zx.q(arg3)
        r8_5[1] = r15_1
        rdi_3 = rbx_1
        *(arg1 + 0x34) += 1
        arg1[6].d = rcx_6.d
        void* rax_3 = *(r10_1 + 0x10)
        
        if (rax_3 != 0)
            r10_1 = rax_3
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_6.d)
        int64_t rcx_7 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_7 << 2)) &= not.d(rol.d(1, rcx_6.b))
    
    if (rbx_1 == 0xffffffff)
        goto label_140b36d38

*arg2 = rdi_3

if (arg6 != 0)
    *arg6 = r12.b

return arg2
