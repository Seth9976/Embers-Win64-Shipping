// 函数: sub_141ba5230
// 地址: 0x141ba5230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi
rsi.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp = 1
int64_t r13 = sx.q(arg3)
int32_t rdi_4

if (rax_1 == 1)
    rdi_4 = arg5
label_141ba534b:
    int32_t r8_2 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_2 u>= 4)
        uint32_t rax_7 = r8_2 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_7 + 8)
        int32_t rcx_5
        
        if (rax_7 == 0xfffffff8)
            rcx_5 = 0x20
        else
            rcx_5 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_7 + 7)
        char r9
        
        if (rax_7 == 0xfffffff9)
            r9 = 0x20
        else
            r9 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_5 << 0x1a s>> 0x1f)).b & (0x20 - r9))
    
    int32_t rax_10
    
    if (r8_2 s> 0)
        rax_10 = arg1[9].d
    
    if (r8_2 s> 0 && (rax_10 == 0 || rax_10 s< rbp))
        arg1[9].d = rbp
        sub_1417f3bd0(arg1)
    else
        void* r9_1 = &arg1[7]
        int32_t rax_13 = (arg1[9].d - 1) & r13.d
        *(arg4 + 0x1c) = rax_13
        void* rdx_7 = *(r9_1 + 8)
        int64_t r8_3 = sx.q(rax_13)
        void* rax_14 = r9_1
        
        if (rdx_7 != 0)
            rax_14 = rdx_7
        
        arg4[3].d = *(rax_14 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2))
        void* rax_16 = *(r9_1 + 8)
        
        if (rax_16 != 0)
            r9_1 = rax_16
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2)) = rdi_4
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
    label_141ba52d4:
        rbx_1 = -1
    else
        int64_t rax_2 = *arg1
        
        while (true)
            rsi = sx.q(rbx_1) << 5
            int64_t arg_8 = rdi
            int64_t arg_10 = *(rsi + rax_2)
            
            if (sub_14077a170(&arg_10, &arg_8) != 0)
                break
            
            rax_2 = *arg1
            rbx_1 = *(rsi + rax_2 + 0x18)
            
            if (rbx_1 == 0xffffffff)
                goto label_141ba52d4
    
    rsi.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_4 = arg5
    else
        void* rdi_3 = (sx.q(rbx_1) << 5) + *arg1
        int64_t* rcx_2 = *(rdi_3 + 0x10)
        
        if (rcx_2 != 0)
            int32_t temp2_1 = *(rcx_2 + 0xc)
            *(rcx_2 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rcx_2 + 8))(rcx_2, 1)
        
        memmove(rdi_3, arg4, 0x18)
        sub_1405c36f0(arg1, arg5, 1)
        rdi_4 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_141ba534b

*arg2 = rdi_4

if (arg6 != 0)
    *arg6 = rsi.b

return arg2
