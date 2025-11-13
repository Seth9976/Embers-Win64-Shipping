// 函数: sub_1418dfa70
// 地址: 0x1418dfa70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r14
r14.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp = 1
int64_t r11 = sx.q(arg3)
int32_t rdi_4

if (rax_1 == 1)
    rdi_4 = arg5
label_1418dfc2e:
    int32_t r8_5 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_5 u>= 4)
        uint32_t rax_15 = r8_5 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_15 + 8)
        int32_t rcx_8
        
        if (rax_15 == 0xfffffff8)
            rcx_8 = 0x20
        else
            rcx_8 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_15 + 7)
        char r9_1
        
        if (rax_15 == 0xfffffff9)
            r9_1 = 0x20
        else
            r9_1 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_8 << 0x1a s>> 0x1f)).b & (0x20 - r9_1))
    
    int32_t rax_18
    
    if (r8_5 s> 0)
        rax_18 = arg1[9].d
    
    if (r8_5 s> 0 && (rax_18 == 0 || rax_18 s< rbp))
        arg1[9].d = rbp
        sub_1418eba80(arg1)
    else
        void* r9_2 = &arg1[7]
        int32_t rax_21 = (arg1[9].d - 1) & r11.d
        arg4[0x19] = rax_21
        void* rdx_11 = *(r9_2 + 8)
        int64_t r8_6 = sx.q(rax_21)
        void* rax_22 = r9_2
        
        if (rdx_11 != 0)
            rax_22 = rdx_11
        
        arg4[0x18] = *(rax_22 + (((sx.q(arg1[9].d) - 1) & r8_6) << 2))
        void* rax_24 = *(r9_2 + 8)
        
        if (rax_24 != 0)
            r9_2 = rax_24
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & r8_6) << 2)) = rdi_4
else
    int32_t r15_1 = -1
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r11) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_1418dfb33:
        rbx_1 = r15_1
    else
        r14 = *arg1
        int32_t r15_2 = *arg4
        
        while (true)
            int32_t* rdi_1 = sx.q(rbx_1) * 0x68
            
            if (*(rdi_1 + r14) == r15_2)
                int64_t* rcx_1 = *(rdi_1 + r14 + 8)
                int64_t* rdx_3 = *(arg4 + 8)
                int64_t count = sx.q(rcx_1[1].d)
                
                if (count.d == rdx_3[1].d && memcmp(*rcx_1, *rdx_3, count) == 0)
                    r15_1 = -1
                    break
            
            rbx_1 = *(rdi_1 + r14 + 0x60)
            
            if (rbx_1 == 0xffffffff)
                r15_1 = rbx_1
                goto label_1418dfb33
    
    r14.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_4 = arg5
    else
        void* rdi_3 = sx.q(rbx_1) * 0x68 + *arg1
        int64_t* r14_1 = *(rdi_3 + 0x10)
        
        if (r14_1 != 0)
            int64_t rcx_3 = *r14_1
            
            if (rcx_3 != 0)
                sub_140a74f90(rcx_3)
            
            j_sub_140a74f90(r14_1)
        
        memmove(rdi_3, arg4, 0x60)
        int64_t rcx_6 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(sx.q(arg1[6].d) * 0x68 + *arg1) = rcx_6.d
        
        int32_t* rax_8 = rcx_6 * 0x68 + *arg1
        *rax_8 = r15_1
        
        if (*(arg1 + 0x34) s> 0)
            r15_1 = arg1[6].d
        
        r14 = zx.q(r14.b)
        rax_8[1] = r15_1
        rdi_4 = rbx_1
        *(arg1 + 0x34) += 1
        arg1[6].d = rcx_6.d
        void* rax_9 = *(r10_1 + 0x10)
        
        if (rax_9 != 0)
            r10_1 = rax_9
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_6.d)
        int64_t rcx_7 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_7 << 2)) &= not.d(rol.d(1, rcx_6.b))
    
    if (rbx_1 == 0xffffffff)
        r11 = zx.q(arg3)
        goto label_1418dfc2e

*arg2 = rdi_4

if (arg6 != 0)
    *arg6 = r14.b

return arg2
