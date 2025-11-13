// 函数: sub_140e61960
// 地址: 0x140e61960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15
r15.b = 0
int32_t rbp = 1
int64_t r13 = sx.q(arg3)
int32_t rcx_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rdi_3

if (rcx_1 == 1)
    rdi_3 = arg5
label_140e61a48:
    int32_t r8_4 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_4 u>= 4)
        uint32_t rax_3 = r8_4 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_3 + 8)
        int32_t rcx_7
        
        if (rax_3 == 0xfffffff8)
            rcx_7 = 0x20
        else
            rcx_7 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_3 + 7)
        char r9_1
        
        if (rax_3 == 0xfffffff9)
            r9_1 = 0x20
        else
            r9_1 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_7 << 0x1a s>> 0x1f)).b & (0x20 - r9_1))
    
    int32_t rax_6
    
    if (r8_4 s> 0)
        rax_6 = arg1[9].d
    
    if (r8_4 s> 0 && (rax_6 == 0 || rax_6 s< rbp))
        arg1[9].d = rbp
        sub_140e84e10(arg1)
    else
        void* r9_2 = &arg1[7]
        int32_t rax_9 = (arg1[9].d - 1) & r13.d
        *(arg4 + 0x7c) = rax_9
        void* rdx_5 = *(r9_2 + 8)
        int64_t r8_5 = sx.q(rax_9)
        void* rax_10 = r9_2
        
        if (rdx_5 != 0)
            rax_10 = rdx_5
        
        arg4[0xf].d = *(rax_10 + (((sx.q(arg1[9].d) - 1) & r8_5) << 2))
        void* rax_12 = *(r9_2 + 8)
        
        if (rax_12 != 0)
            r9_2 = rax_12
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & r8_5) << 2)) = rdi_3
else
    int32_t rbx_1
    
    if (rcx_1 != 0)
        void* rdx = arg1[8]
        void* r9 = &arg1[7]
        
        if (rdx != 0)
            r9 = rdx
        
        rbx_1 = *(r9 + (((sx.q(arg1[9].d) - 1) & r13) << 2))
    
    if (rcx_1 == 0 || rbx_1 == 0xffffffff)
    label_140e619e7:
        rbx_1 = -1
    else
        int64_t rdx_1 = *arg1
        
        while (true)
            int64_t rcx_3 = sx.q(rbx_1) << 7
            
            if (*(rcx_3 + rdx_1) == *arg4)
                break
            
            rbx_1 = *(rcx_3 + rdx_1 + 0x78)
            
            if (rbx_1 == 0xffffffff)
                goto label_140e619e7
    
    r15.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_3 = arg5
    else
        void* rdi_2 = (sx.q(rbx_1) << 7) + *arg1
        sub_140e53930(rdi_2 + 8)
        memmove(rdi_2, arg4, 0x78)
        sub_1408887c0(arg1, arg5, 1)
        rdi_3 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_140e61a48

*arg2 = rdi_3

if (arg6 != 0)
    *arg6 = r15.b

return arg2
