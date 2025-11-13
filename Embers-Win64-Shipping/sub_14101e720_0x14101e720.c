// 函数: sub_14101e720
// 地址: 0x14101e720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14
r14.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t r15 = 1
int64_t r11 = sx.q(arg3)
int32_t rdi_2

if (rax_1 == 1)
    rdi_2 = arg5
label_14101e8b4:
    int32_t r8_3 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_3 u>= 4)
        uint32_t rax_17 = r8_3 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_17 + 8)
        int32_t rcx_7
        
        if (rax_17 == 0xfffffff8)
            rcx_7 = 0x20
        else
            rcx_7 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_17 + 7)
        char r9_4
        
        if (rax_17 == 0xfffffff9)
            r9_4 = 0x20
        else
            r9_4 = 0x1f - temp0_3
        
        r15 = 1 << ((not.d(rcx_7 << 0x1a s>> 0x1f)).b & (0x20 - r9_4))
    
    int32_t rax_20
    
    if (r8_3 s> 0)
        rax_20 = arg1[9].d
    
    if (r8_3 s> 0 && (rax_20 == 0 || rax_20 s< r15))
        arg1[9].d = r15
        sub_141032460(arg1)
    else
        void* r9_5 = &arg1[7]
        int32_t rax_23 = (arg1[9].d - 1) & r11.d
        *(arg4 + 0x4c) = rax_23
        void* rdx_10 = *(r9_5 + 8)
        int64_t r8_4 = sx.q(rax_23)
        void* rax_24 = r9_5
        
        if (rdx_10 != 0)
            rax_24 = rdx_10
        
        *(arg4 + 0x48) = *(rax_24 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2))
        void* rax_26 = *(r9_5 + 8)
        
        if (rax_26 != 0)
            r9_5 = rax_26
        
        *(r9_5 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2)) = rdi_2
else
    int32_t r13_1 = -1
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r11) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_14101e7f6:
        rbx_1 = -1
    else
        while (true)
            void* r10_3 = sx.q(rbx_1) * 0x50 + *arg1
            
            if (*(r10_3 + 0x30) == *(arg4 + 0x30) && *(r10_3 + 0x3c) == *(arg4 + 0x3c))
                int32_t r8_1 = *(r10_3 + 0x38)
                
                if (r8_1 == *(arg4 + 0x38))
                    int32_t rdx_3 = 0
                    
                    if (r8_1 == 0)
                        break
                    
                    void* rax_4 = arg4
                    
                    while (*(r10_3 - arg4 + rax_4) == *rax_4)
                        rdx_3 += 1
                        rax_4 += 8
                        
                        if (rdx_3 u>= r8_1)
                            goto label_14101e7fc
            
            rbx_1 = *(r10_3 + 0x48)
            
            if (rbx_1 == 0xffffffff)
                goto label_14101e7f6
    
label_14101e7fc:
    r14.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_2 = arg5
    else
        memmove(sx.q(rbx_1) * 0x50 + *arg1, arg4, 0x48)
        int64_t rcx_5 = sx.q(arg5)
        void* r10_4 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(*arg1 + sx.q(arg1[6].d) * 0x50) = rcx_5.d
        
        int32_t* rax_10 = rcx_5 * 0x50 + *arg1
        *rax_10 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            r13_1 = arg1[6].d
        
        rax_10[1] = r13_1
        *(arg1 + 0x34) += 1
        rdi_2 = rbx_1
        arg1[6].d = rcx_5.d
        void* rax_11 = *(r10_4 + 0x10)
        
        if (rax_11 != 0)
            r10_4 = rax_11
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_5.d)
        int64_t rcx_6 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
        *(r10_4 + (rcx_6 << 2)) &= not.d(rol.d(1, rcx_5.b))
    
    if (rbx_1 == 0xffffffff)
        r11 = zx.q(arg3)
        goto label_14101e8b4

*arg2 = rdi_2

if (arg6 != 0)
    *arg6 = r14.b

return arg2
