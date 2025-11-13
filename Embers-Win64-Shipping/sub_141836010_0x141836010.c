// 函数: sub_141836010
// 地址: 0x141836010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13
r13.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp = 1
int64_t r11 = sx.q(arg3)
int32_t rdi_2

if (rax_1 == 1)
    rdi_2 = arg5
label_141836186:
    int32_t r8_6 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_6 u>= 4)
        uint32_t rax_15 = r8_6 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_15 + 8)
        int32_t rcx_11
        
        if (rax_15 == 0xfffffff8)
            rcx_11 = 0x20
        else
            rcx_11 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_15 + 7)
        char r9_3
        
        if (rax_15 == 0xfffffff9)
            r9_3 = 0x20
        else
            r9_3 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_11 << 0x1a s>> 0x1f)).b & (0x20 - r9_3))
    
    int32_t rax_18
    
    if (r8_6 s> 0)
        rax_18 = arg1[9].d
    
    if (r8_6 s> 0 && (rax_18 == 0 || rax_18 s< rbp))
        arg1[9].d = rbp
        sub_140ccd680(arg1)
    else
        void* r9_4 = &arg1[7]
        int32_t rax_21 = (arg1[9].d - 1) & r11.d
        arg4[7] = rax_21
        void* rdx_12 = *(r9_4 + 8)
        int64_t r8_7 = sx.q(rax_21)
        void* rax_22 = r9_4
        
        if (rdx_12 != 0)
            rax_22 = rdx_12
        
        arg4[6] = *(rax_22 + (((sx.q(arg1[9].d) - 1) & r8_7) << 2))
        void* rax_24 = *(r9_4 + 8)
        
        if (rax_24 != 0)
            r9_4 = rax_24
        
        *(r9_4 + (((sx.q(arg1[9].d) - 1) & r8_7) << 2)) = rdi_2
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
    label_1418360d0:
        rbx_1 = -1
    else
        while (true)
            void* rdx_5 = (sx.q(rbx_1) << 5) + *arg1
            
            if (((*(rdx_5 + 4) ^ arg4[1]) | (*(rdx_5 + 8) ^ arg4[2]) | (*(rdx_5 + 0xc) ^ arg4[3])
                    | (*arg4 ^ *rdx_5)) == 0)
                break
            
            rbx_1 = *(rdx_5 + 0x18)
            
            if (rbx_1 == 0xffffffff)
                goto label_1418360d0
    
    r13.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_2 = arg5
    else
        memmove((sx.q(rbx_1) << 5) + *arg1, arg4, 0x18)
        int64_t rcx_9 = sx.q(arg5)
        void* r10_2 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *((sx.q(arg1[6].d) << 5) + *arg1) = rcx_9.d
        
        int32_t* r8_4 = (rcx_9 << 5) + *arg1
        *r8_4 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            r12_1 = arg1[6].d
        
        r8_4[1] = r12_1
        *(arg1 + 0x34) += 1
        rdi_2 = rbx_1
        arg1[6].d = rcx_9.d
        void* rax_9 = *(r10_2 + 0x10)
        
        if (rax_9 != 0)
            r10_2 = rax_9
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_9.d)
        int64_t rcx_10 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
        *(r10_2 + (rcx_10 << 2)) &= not.d(rol.d(1, rcx_9.b))
    
    if (rbx_1 == 0xffffffff)
        r11 = zx.q(arg3)
        goto label_141836186

*arg2 = rdi_2

if (arg6 != 0)
    *arg6 = r13.b

return arg2
