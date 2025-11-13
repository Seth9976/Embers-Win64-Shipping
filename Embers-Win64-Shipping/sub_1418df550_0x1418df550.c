// 函数: sub_1418df550
// 地址: 0x1418df550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15
r15.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp = 1
int64_t r11 = sx.q(arg3)
int32_t rdi_7

if (rax_1 == 1)
    rdi_7 = arg5
label_1418df6f5:
    int32_t r8_6 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_6 u>= 4)
        uint32_t rax_17 = r8_6 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_17 + 8)
        int32_t rcx_6
        
        if (rax_17 == 0xfffffff8)
            rcx_6 = 0x20
        else
            rcx_6 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_17 + 7)
        char r9
        
        if (rax_17 == 0xfffffff9)
            r9 = 0x20
        else
            r9 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_6 << 0x1a s>> 0x1f)).b & (0x20 - r9))
    
    int32_t rax_20
    
    if (r8_6 s> 0)
        rax_20 = arg1[9].d
    
    if (r8_6 s> 0 && (rax_20 == 0 || rax_20 s< rbp))
        arg1[9].d = rbp
        sub_1418eb880(arg1)
    else
        void* r9_1 = &arg1[7]
        int32_t rax_23 = (arg1[9].d - 1) & r11.d
        *(arg4 + 0x2c) = rax_23
        void* rdx_10 = *(r9_1 + 8)
        int64_t r8_7 = sx.q(rax_23)
        void* rax_24 = r9_1
        
        if (rdx_10 != 0)
            rax_24 = rdx_10
        
        arg4[5].d = *(rax_24 + (((sx.q(arg1[9].d) - 1) & r8_7) << 2))
        void* rax_26 = *(r9_1 + 8)
        
        if (rax_26 != 0)
            r9_1 = rax_26
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_7) << 2)) = rdi_7
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
    label_1418df61c:
        rbx_1 = r12_1
    else
        r15 = *arg1
        int32_t r12_2 = arg4[2].d
        
        while (true)
            int64_t* rdi_3 = sx.q(rbx_1) * 0x30 + r15
            
            if (r12_2 == rdi_3[2].d)
                int64_t rax_3 = sx.q(rdi_3[1].d)
                
                if (arg4[1].d == rax_3.d)
                    int32_t rax_4
                    
                    if (rax_3.d != 0)
                        rax_4 = memcmp(*arg4, *rdi_3, rax_3 * 0x18)
                    
                    if (rax_3.d == 0 || rax_4 == 0)
                        r12_1 = -1
                        break
            
            rbx_1 = rdi_3[5].d
            
            if (rbx_1 == 0xffffffff)
                r12_1 = rbx_1
                goto label_1418df61c
    
    r15.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_7 = arg5
    else
        int64_t* rdi_6 = sx.q(rbx_1) * 0x30 + *arg1
        int64_t rcx_2 = *rdi_6
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        memmove(rdi_6, arg4, 0x28)
        int64_t rcx_4 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(*arg1 + sx.q(arg1[6].d) * 0x30) = rcx_4.d
        
        int32_t* rax_10 = rcx_4 * 0x30 + *arg1
        *rax_10 = r12_1
        
        if (*(arg1 + 0x34) s> 0)
            r12_1 = arg1[6].d
        
        rax_10[1] = r12_1
        *(arg1 + 0x34) += 1
        rdi_7 = rbx_1
        arg1[6].d = rcx_4.d
        void* rax_11 = *(r10_1 + 0x10)
        
        if (rax_11 != 0)
            r10_1 = rax_11
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_4.d)
        int64_t rcx_5 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_5 << 2)) &= not.d(rol.d(1, rcx_4.b))
    
    if (rbx_1 == 0xffffffff)
        r11 = zx.q(arg3)
        goto label_1418df6f5

*arg2 = rdi_7

if (arg6 != 0)
    *arg6 = r15.b

return arg2
