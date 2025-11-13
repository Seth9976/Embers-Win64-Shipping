// 函数: sub_1405e1880
// 地址: 0x1405e1880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
r12.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp = 1
int64_t r13 = sx.q(arg3)
int32_t rdi_6

if (rax_1 == 1)
    rdi_6 = arg5
label_1405e197d:
    int32_t r8_2 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_2 u>= 4)
        uint32_t rax_5 = r8_2 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_5 + 8)
        int32_t rcx_6
        
        if (rax_5 == 0xfffffff8)
            rcx_6 = 0x20
        else
            rcx_6 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_5 + 7)
        char r9
        
        if (rax_5 == 0xfffffff9)
            r9 = 0x20
        else
            r9 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_6 << 0x1a s>> 0x1f)).b & (0x20 - r9))
    
    int32_t rax_8
    
    if (r8_2 s> 0)
        rax_8 = arg1[9].d
    
    if (r8_2 s> 0 && (rax_8 == 0 || rax_8 s< rbp))
        arg1[9].d = rbp
        sub_1405e34c0(arg1)
    else
        void* r9_1 = &arg1[7]
        int32_t rax_11 = (arg1[9].d - 1) & r13.d
        arg4[0xf] = rax_11
        void* rdx_7 = *(r9_1 + 8)
        int64_t r8_3 = sx.q(rax_11)
        void* rax_12 = r9_1
        
        if (rdx_7 != 0)
            rax_12 = rdx_7
        
        arg4[0xe] = *(rax_12 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2))
        void* rax_14 = *(r9_1 + 8)
        
        if (rax_14 != 0)
            r9_1 = rax_14
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2)) = rdi_6
else
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r13) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_1405e1913:
        rbx_1 = -1
    else
        int64_t rax_2 = *arg1
        
        while (true)
            int64_t rdi_2 = sx.q(rbx_1) << 6
            
            if (sub_1405dfda0(rdi_2 + rax_2, arg4) != 0)
                break
            
            rax_2 = *arg1
            rbx_1 = *(rdi_2 + rax_2 + 0x38)
            
            if (rbx_1 == 0xffffffff)
                goto label_1405e1913
    
    r12.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_6 = arg5
    else
        void* rdi_5 = (sx.q(rbx_1) << 6) + *arg1
        sub_140a1d5c0(rdi_5 + 0x18)
        sub_140a1d5c0(rdi_5 + 8)
        memmove(rdi_5, arg4, 0x38)
        sub_1405c37b0(arg1, arg5, 1)
        rdi_6 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_1405e197d

*arg2 = rdi_6

if (arg6 != 0)
    *arg6 = r12.b

return arg2
