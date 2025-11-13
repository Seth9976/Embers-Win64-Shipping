// 函数: sub_1417ad4d0
// 地址: 0x1417ad4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
r12.b = 0
int32_t rbp = 1
int64_t r11 = sx.q(arg3)
int32_t rcx_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rdi_1

if (rcx_1 == 1)
    rdi_1 = arg5
label_1417ad634:
    int32_t r8_7 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_7 u>= 4)
        uint32_t rax_14 = r8_7 u>> 1
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
        char r9_1
        
        if (rax_14 == 0xfffffff9)
            r9_1 = 0x20
        else
            r9_1 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_8 << 0x1a s>> 0x1f)).b & (0x20 - r9_1))
    
    int32_t rax_17
    
    if (r8_7 s> 0)
        rax_17 = arg1[9].d
    
    if (r8_7 s> 0 && (rax_17 == 0 || rax_17 s< rbp))
        arg1[9].d = rbp
        sub_1417b2be0(arg1)
    else
        void* r9_2 = &arg1[7]
        int32_t rax_20 = (arg1[9].d - 1) & r11.d
        *(arg4 + 0x14) = rax_20
        void* rdx_8 = *(r9_2 + 8)
        int64_t r8_8 = sx.q(rax_20)
        void* rax_21 = r9_2
        
        if (rdx_8 != 0)
            rax_21 = rdx_8
        
        *(arg4 + 0x10) = *(rax_21 + (((sx.q(arg1[9].d) - 1) & r8_8) << 2))
        void* rax_23 = *(r9_2 + 8)
        
        if (rax_23 != 0)
            r9_2 = rax_23
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & r8_8) << 2)) = rdi_1
else
    int32_t rdi = -1
    int32_t rbx_1
    
    if (rcx_1 != 0)
        void* rdx = arg1[8]
        void* r9 = &arg1[7]
        
        if (rdx != 0)
            r9 = rdx
        
        rbx_1 = *(r9 + (((sx.q(arg1[9].d) - 1) & r11) << 2))
    
    if (rcx_1 == 0 || rbx_1 == 0xffffffff)
    label_1417ad567:
        rbx_1 = -1
    else
        int64_t r8_3 = *arg1
        
        while (true)
            int64_t rdx_1 = sx.q(rbx_1) * 3
            
            if (*(r8_3 + (rdx_1 << 3)) == *arg4)
                break
            
            rbx_1 = *(r8_3 + (rdx_1 << 3) + 0x10)
            
            if (rbx_1 == 0xffffffff)
                goto label_1417ad567
    
    r12.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        int64_t rcx_3 = sx.q(rbx_1) * 3
        int64_t rax_3 = *arg1
        int64_t* rcx_4 = *(rax_3 + (rcx_3 << 3) + 8)
        
        if (rcx_4 != 0)
            (**rcx_4)(rcx_4, 1)
        
        memmove(rax_3 + (rcx_3 << 3), arg4, 0x10)
        int64_t rcx_6 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(*arg1 + sx.q(arg1[6].d) * 0x18) = rcx_6.d
        
        int64_t rax_7 = *arg1
        int64_t rdx_4 = rcx_6 * 3
        *(rax_7 + (rdx_4 << 3)) = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            rdi = arg1[6].d
        
        r11 = zx.q(arg3)
        *(rax_7 + (rdx_4 << 3) + 4) = rdi
        rdi_1 = rbx_1
        *(arg1 + 0x34) += 1
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
        goto label_1417ad634

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = r12.b

return arg2
