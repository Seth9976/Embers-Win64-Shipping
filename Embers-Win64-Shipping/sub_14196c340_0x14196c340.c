// 函数: sub_14196c340
// 地址: 0x14196c340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15
r15.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp = 1
int64_t r13 = sx.q(arg3)
int32_t rdi

if (rax_1 == 1)
    rdi = arg5
label_14196c453:
    int32_t r8_3 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_3 u>= 4)
        uint32_t rax_10 = r8_3 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_10 + 8)
        int32_t rcx_5
        
        if (rax_10 == 0xfffffff8)
            rcx_5 = 0x20
        else
            rcx_5 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_10 + 7)
        char r9
        
        if (rax_10 == 0xfffffff9)
            r9 = 0x20
        else
            r9 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_5 << 0x1a s>> 0x1f)).b & (0x20 - r9))
    
    int32_t rax_13
    
    if (r8_3 s> 0)
        rax_13 = arg1[9].d
    
    if (r8_3 s> 0 && (rax_13 == 0 || rax_13 s< rbp))
        arg1[9].d = rbp
        sub_1419820e0(arg1)
    else
        void* r9_1 = &arg1[7]
        int32_t rax_16 = (arg1[9].d - 1) & r13.d
        arg4[0x1d] = rax_16
        void* rdx_7 = *(r9_1 + 8)
        int64_t r8_4 = sx.q(rax_16)
        void* rax_17 = r9_1
        
        if (rdx_7 != 0)
            rax_17 = rdx_7
        
        arg4[0x1c] = *(rax_17 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2))
        void* rax_19 = *(r9_1 + 8)
        
        if (rax_19 != 0)
            r9_1 = rax_19
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2)) = rdi
else
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r13) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_14196c3fe:
        rbx_1 = -1
    else
        int64_t rdx_3 = *arg1
        
        while (true)
            int32_t* rcx_1 = sx.q(rbx_1) * 0x78
            
            if (*(rcx_1 + rdx_3) == *arg4 && *(rcx_1 + rdx_3 + 4) == arg4[1].b
                    && *(rcx_1 + rdx_3 + 0x48) == *(arg4 + 0x48)
                    && *(rcx_1 + rdx_3 + 0x50) == *(arg4 + 0x50)
                    && *(rcx_1 + rdx_3 + 0x58) == *(arg4 + 0x58)
                    && *(rcx_1 + rdx_3 + 0x60) == *(arg4 + 0x60))
                break
            
            rbx_1 = *(rcx_1 + rdx_3 + 0x70)
            
            if (rbx_1 == 0xffffffff)
                goto label_14196c3fe
    
    r15.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi = arg5
    else
        memmove(sx.q(rbx_1) * 0x78 + *arg1, arg4, 0x70)
        sub_1407c2e90(arg1, arg5, 1)
        rdi = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_14196c453

*arg2 = rdi

if (arg6 != 0)
    *arg6 = r15.b

return arg2
