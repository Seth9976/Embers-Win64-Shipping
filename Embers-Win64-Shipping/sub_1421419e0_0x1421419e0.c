// 函数: sub_1421419e0
// 地址: 0x1421419e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15
r15.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp = 1
int64_t r13 = sx.q(arg3)
int32_t rdi_1

if (rax_1 == 1)
    rdi_1 = arg5
label_142141b12:
    int32_t r8_3 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_3 u>= 4)
        uint32_t rax_14 = r8_3 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_14 + 8)
        int32_t rcx_6
        
        if (rax_14 == 0xfffffff8)
            rcx_6 = 0x20
        else
            rcx_6 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_14 + 7)
        char r9_2
        
        if (rax_14 == 0xfffffff9)
            r9_2 = 0x20
        else
            r9_2 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_6 << 0x1a s>> 0x1f)).b & (0x20 - r9_2))
    
    int32_t rax_17
    
    if (r8_3 s> 0)
        rax_17 = arg1[9].d
    
    if (r8_3 s> 0 && (rax_17 == 0 || rax_17 s< rbp))
        arg1[9].d = rbp
        sub_140943160(arg1)
    else
        void* r9_3 = &arg1[7]
        int32_t rax_20 = (arg1[9].d - 1) & r13.d
        arg4[2].d = rax_20
        void* rdx_10 = *(r9_3 + 8)
        int64_t r8_4 = sx.q(rax_20)
        void* rax_21 = r9_3
        
        if (rdx_10 != 0)
            rax_21 = rdx_10
        
        *(arg4 + 0xc) = *(rax_21 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2))
        void* rax_23 = *(r9_3 + 8)
        
        if (rax_23 != 0)
            r9_3 = rax_23
        
        *(r9_3 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2)) = rdi_1
else
    int32_t rdi = -1
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r13) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_142141a68:
        rbx_1 = -1
    else
        int64_t rdx_3 = *arg1
        
        while (true)
            int64_t rcx_1 = sx.q(rbx_1) * 5
            
            if (*(rdx_3 + (rcx_1 << 2)) == *arg4)
                break
            
            rbx_1 = *(rdx_3 + (rcx_1 << 2) + 0xc)
            
            if (rbx_1 == 0xffffffff)
                goto label_142141a68
    
    r15.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        memmove(*arg1 + sx.q(rbx_1) * 0x14, arg4, 0xc)
        int64_t rcx_4 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(*arg1 + sx.q(arg1[6].d) * 0x14) = rcx_4.d
        
        int64_t rax_7 = *arg1
        int64_t rdx_6 = rcx_4 * 5
        *(rax_7 + (rdx_6 << 2)) = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            rdi = arg1[6].d
        
        *(rax_7 + (rdx_6 << 2) + 4) = rdi
        *(arg1 + 0x34) += 1
        rdi_1 = rbx_1
        arg1[6].d = rcx_4.d
        void* rax_8 = *(r10_1 + 0x10)
        
        if (rax_8 != 0)
            r10_1 = rax_8
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_4.d)
        int64_t rcx_5 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_5 << 2)) &= not.d(rol.d(1, rcx_4.b))
    
    if (rbx_1 == 0xffffffff)
        goto label_142141b12

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = r15.b

return arg2
