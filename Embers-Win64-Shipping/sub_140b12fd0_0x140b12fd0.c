// 函数: sub_140b12fd0
// 地址: 0x140b12fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13
r13.b = 0
int32_t rbp = 1
int64_t* r10 = arg4
int64_t r11 = sx.q(arg3)
int32_t rcx_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rdi_1

if (rcx_1 == 1)
    rdi_1 = arg5
label_140b13138:
    int32_t rdx_8 = arg1[1].d - *(arg1 + 0x34)
    
    if (rdx_8 u>= 4)
        uint32_t rax_13 = rdx_8 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_13 + 8)
        int32_t rcx_8
        
        if (rax_13 == 0xfffffff8)
            rcx_8 = 0x20
        else
            rcx_8 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_13 + 7)
        char r8_4
        
        if (rax_13 == 0xfffffff9)
            r8_4 = 0x20
        else
            r8_4 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_8 << 0x1a s>> 0x1f)).b & (0x20 - r8_4))
    
    int32_t rax_16
    
    if (rdx_8 s> 0)
        rax_16 = arg1[9].d
    
    if (rdx_8 s> 0 && (rax_16 == 0 || rax_16 s< rbp))
        arg1[9].d = rbp
        sub_14092ed80(arg1)
    else
        void* r9_5 = &arg1[7]
        int32_t rax_19 = (arg1[9].d - 1) & r11.d
        *(r10 + 0x24) = rax_19
        void* rdx_9 = *(r9_5 + 8)
        int64_t r8_5 = sx.q(rax_19)
        void* rax_20 = r9_5
        
        if (rdx_9 != 0)
            rax_20 = rdx_9
        
        r10[4].d = *(rax_20 + (((sx.q(arg1[9].d) - 1) & r8_5) << 2))
        void* rax_22 = *(r9_5 + 8)
        
        if (rax_22 != 0)
            r9_5 = rax_22
        
        *(r9_5 + (((sx.q(arg1[9].d) - 1) & r8_5) << 2)) = rdi_1
else
    int32_t r12_1 = -1
    int32_t rbx_1
    
    if (rcx_1 != 0)
        void* rdx = arg1[8]
        void* r9 = &arg1[7]
        
        if (rdx != 0)
            r9 = rdx
        
        rbx_1 = *(r9 + (((sx.q(arg1[9].d) - 1) & r11) << 2))
    
    if (rcx_1 == 0 || rbx_1 == 0xffffffff)
    label_140b13067:
        rbx_1 = -1
    else
        int64_t r8_3 = *arg1
        
        while (true)
            int64_t rdx_1 = sx.q(rbx_1) * 5
            
            if (*(r8_3 + (rdx_1 << 3)) == *arg4)
                break
            
            rbx_1 = *(r8_3 + (rdx_1 << 3) + 0x20)
            
            if (rbx_1 == 0xffffffff)
                goto label_140b13067
    
    r13.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        void* rdi = *arg1 + sx.q(rbx_1) * 0x28
        sub_140596eb0(rdi + 8)
        memmove(rdi, arg4, 0x20)
        int64_t rcx_6 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(*arg1 + sx.q(arg1[6].d) * 0x28) = rcx_6.d
        
        int64_t rax_6 = *arg1
        int64_t rdx_4 = rcx_6 * 5
        *(rax_6 + (rdx_4 << 3)) = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            r12_1 = arg1[6].d
        
        r11 = zx.q(arg3)
        *(rax_6 + (rdx_4 << 3) + 4) = r12_1
        rdi_1 = rbx_1
        *(arg1 + 0x34) += 1
        arg1[6].d = rcx_6.d
        void* rax_7 = *(r10_1 + 0x10)
        
        if (rax_7 != 0)
            r10_1 = rax_7
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_6.d)
        int64_t rcx_7 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_7 << 2)) &= not.d(rol.d(1, rcx_6.b))
        r10 = arg4
    
    if (rbx_1 == 0xffffffff)
        goto label_140b13138

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = r13.b

return arg2
