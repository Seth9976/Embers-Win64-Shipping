// 函数: sub_14141d3a0
// 地址: 0x14141d3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13
r13.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t r15 = 1
int64_t r11 = sx.q(arg3)
int32_t rdi_3

if (rax_1 == 1)
    rdi_3 = arg5
label_14141d54e:
    int32_t r8_3 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_3 u>= 4)
        uint32_t rax_19 = r8_3 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_19 + 8)
        int32_t rcx_8
        
        if (rax_19 == 0xfffffff8)
            rcx_8 = 0x20
        else
            rcx_8 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_19 + 7)
        char r9_2
        
        if (rax_19 == 0xfffffff9)
            r9_2 = 0x20
        else
            r9_2 = 0x1f - temp0_3
        
        r15 = 1 << ((not.d(rcx_8 << 0x1a s>> 0x1f)).b & (0x20 - r9_2))
    
    int32_t rax_22
    
    if (r8_3 s> 0)
        rax_22 = arg1[9].d
    
    if (r8_3 s> 0 && (rax_22 == 0 || rax_22 s< r15))
        arg1[9].d = r15
        sub_1414253c0(arg1)
    else
        void* r9_3 = &arg1[7]
        int32_t rax_25 = (arg1[9].d - 1) & r11.d
        arg4[0xb] = rax_25
        void* rdx_12 = *(r9_3 + 8)
        int64_t r8_4 = sx.q(rax_25)
        void* rax_26 = r9_3
        
        if (rdx_12 != 0)
            rax_26 = rdx_12
        
        arg4[0xa] = *(rax_26 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2))
        void* rax_28 = *(r9_3 + 8)
        
        if (rax_28 != 0)
            r9_3 = rax_28
        
        *(r9_3 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2)) = rdi_3
else
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r11) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_14141d459:
        rbx_1 = -1
    else
        int64_t rdx_3 = *arg1
        
        while (true)
            int64_t rcx_2 = sx.q(rbx_1) * 6
            
            if (*(rdx_3 + (rcx_2 << 3)) == *arg4 && *(rdx_3 + (rcx_2 << 3) + 8) == *(arg4 + 8)
                    && *(rdx_3 + (rcx_2 << 3) + 0x10) == arg4[4]
                    && *(rdx_3 + (rcx_2 << 3) + 0x14) == arg4[5].b)
                break
            
            rbx_1 = *(rdx_3 + (rcx_2 << 3) + 0x28)
            
            if (rbx_1 == 0xffffffff)
                goto label_14141d459
    
    r13.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_3 = arg5
    else
        void* rdi_2 = sx.q(rbx_1) * 0x30 + *arg1
        int64_t* rcx_3 = *(rdi_2 + 0x20)
        
        if (rcx_3 != 0 && *(rdi_2 + 0x18) != 0)
            (*(*rcx_3 + 0x10))(rcx_3, rdi_2 + 0x18)
            *(rdi_2 + 0x20) = 0
        
        sub_14081c9d0(rdi_2 + 0x18)
        memmove(rdi_2, arg4, 0x28)
        int64_t rcx_6 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(*arg1 + sx.q(arg1[6].d) * 0x30) = rcx_6.d
        
        int32_t rdx_8 = -1
        int32_t* rax_12 = rcx_6 * 0x30 + *arg1
        *rax_12 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            rdx_8 = arg1[6].d
        
        r11 = zx.q(arg3)
        rax_12[1] = rdx_8
        rdi_3 = rbx_1
        *(arg1 + 0x34) += 1
        arg1[6].d = rcx_6.d
        void* rax_13 = *(r10_1 + 0x10)
        
        if (rax_13 != 0)
            r10_1 = rax_13
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_6.d)
        int64_t rcx_7 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_7 << 2)) &= not.d(rol.d(1, rcx_6.b))
    
    if (rbx_1 == 0xffffffff)
        goto label_14141d54e

*arg2 = rdi_3

if (arg6 != 0)
    *arg6 = r13.b

return arg2
