// 函数: sub_14240c5a0
// 地址: 0x14240c5a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi
rsi.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp = 1
int64_t r13 = sx.q(arg3)
int32_t rdi_1

if (rax_1 == 1)
    rdi_1 = arg5
label_14240c6a2:
    int32_t r8_2 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_2 u>= 4)
        uint32_t rax_6 = r8_2 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_6 + 8)
        int32_t rcx_6
        
        if (rax_6 == 0xfffffff8)
            rcx_6 = 0x20
        else
            rcx_6 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_6 + 7)
        char r9
        
        if (rax_6 == 0xfffffff9)
            r9 = 0x20
        else
            r9 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_6 << 0x1a s>> 0x1f)).b & (0x20 - r9))
    
    int32_t rax_9
    
    if (r8_2 s> 0)
        rax_9 = arg1[9].d
    
    if (r8_2 s> 0 && (rax_9 == 0 || rax_9 s< rbp))
        arg1[9].d = rbp
        sub_141fc32e0(arg1)
    else
        void* r9_1 = &arg1[7]
        int32_t rax_12 = (arg1[9].d - 1) & r13.d
        *(arg4 + 0xc) = rax_12
        void* rdx_7 = *(r9_1 + 8)
        int64_t r8_3 = sx.q(rax_12)
        void* rax_13 = r9_1
        
        if (rdx_7 != 0)
            rax_13 = rdx_7
        
        arg4[1].d = *(rax_13 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2))
        void* rax_15 = *(r9_1 + 8)
        
        if (rax_15 != 0)
            r9_1 = rax_15
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2)) = rdi_1
else
    int64_t rdi = *arg4
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r13) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_14240c644:
        rbx_1 = -1
    else
        int64_t rax_2 = *arg1
        
        while (true)
            rsi = sx.q(rbx_1) << 4
            int64_t arg_8 = rdi
            int64_t arg_10 = *(rsi + rax_2)
            
            if (sub_14077a170(&arg_10, &arg_8) != 0)
                break
            
            rax_2 = *arg1
            rbx_1 = *(rsi + rax_2 + 8)
            
            if (rbx_1 == 0xffffffff)
                goto label_14240c644
    
    rsi.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        memmove((sx.q(rbx_1) << 4) + *arg1, arg4, 8)
        sub_140906230(arg1, arg5, 1)
        rdi_1 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_14240c6a2

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = rsi.b

return arg2
