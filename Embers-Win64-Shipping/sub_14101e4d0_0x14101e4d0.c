// 函数: sub_14101e4d0
// 地址: 0x14101e4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
r12.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp = 1
int64_t r13 = sx.q(arg3)
int32_t rdi_1

if (rax_1 == 1)
    rdi_1 = arg5
label_14101e637:
    int32_t r8_3 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_3 u>= 4)
        uint32_t rax_18 = r8_3 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_18 + 8)
        int32_t rcx_8
        
        if (rax_18 == 0xfffffff8)
            rcx_8 = 0x20
        else
            rcx_8 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_18 + 7)
        char r9_2
        
        if (rax_18 == 0xfffffff9)
            r9_2 = 0x20
        else
            r9_2 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_8 << 0x1a s>> 0x1f)).b & (0x20 - r9_2))
    
    int32_t rax_21
    
    if (r8_3 s> 0)
        rax_21 = arg1[9].d
    
    if (r8_3 s> 0 && (rax_21 == 0 || rax_21 s< rbp))
        arg1[9].d = rbp
        sub_140e847a0(arg1)
    else
        void* r9_3 = &arg1[7]
        int32_t rax_24 = (arg1[9].d - 1) & r13.d
        *(arg4 + 0x2c) = rax_24
        void* rdx_10 = *(r9_3 + 8)
        int64_t r8_4 = sx.q(rax_24)
        void* rax_25 = r9_3
        
        if (rdx_10 != 0)
            rax_25 = rdx_10
        
        arg4[5].d = *(rax_25 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2))
        void* rax_27 = *(r9_3 + 8)
        
        if (rax_27 != 0)
            r9_3 = rax_27
        
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
    label_14101e588:
        rbx_1 = -1
    else
        int64_t rdx_3 = *arg1
        
        while (true)
            int64_t rcx_2 = sx.q(rbx_1) * 6
            
            if (*(rdx_3 + (rcx_2 << 3)) == *arg4 && *(rdx_3 + (rcx_2 << 3) + 8) == arg4[1].d
                    && *(rdx_3 + (rcx_2 << 3) + 0x10) == arg4[2]
                    && *(rdx_3 + (rcx_2 << 3) + 0x18) == arg4[3])
                break
            
            rbx_1 = *(rdx_3 + (rcx_2 << 3) + 0x28)
            
            if (rbx_1 == 0xffffffff)
                goto label_14101e588
    
    r12.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        memmove(sx.q(rbx_1) * 0x30 + *arg1, arg4, 0x28)
        int64_t rcx_6 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(*arg1 + sx.q(arg1[6].d) * 0x30) = rcx_6.d
        
        int32_t* rax_11 = rcx_6 * 0x30 + *arg1
        *rax_11 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            rdi = arg1[6].d
        
        rax_11[1] = rdi
        *(arg1 + 0x34) += 1
        rdi_1 = rbx_1
        arg1[6].d = rcx_6.d
        void* rax_12 = *(r10_1 + 0x10)
        
        if (rax_12 != 0)
            r10_1 = rax_12
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_6.d)
        int64_t rcx_7 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_7 << 2)) &= not.d(rol.d(1, rcx_6.b))
    
    if (rbx_1 == 0xffffffff)
        goto label_14101e637

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = r12.b

return arg2
