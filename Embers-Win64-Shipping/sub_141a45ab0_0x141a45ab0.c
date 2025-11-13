// 函数: sub_141a45ab0
// 地址: 0x141a45ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15
r15.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp = 1
int64_t r13 = sx.q(arg3)
int32_t rdi_2

if (rax_1 == 1)
    rdi_2 = arg5
label_141a45bb0:
    int32_t r8_3 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_3 u>= 4)
        uint32_t rax_5 = r8_3 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_5 + 8)
        int32_t rcx_5
        
        if (rax_5 == 0xfffffff8)
            rcx_5 = 0x20
        else
            rcx_5 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_5 + 7)
        char r9
        
        if (rax_5 == 0xfffffff9)
            r9 = 0x20
        else
            r9 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_5 << 0x1a s>> 0x1f)).b & (0x20 - r9))
    
    int32_t rax_8
    
    if (r8_3 s> 0)
        rax_8 = arg1[9].d
    
    if (r8_3 s> 0 && (rax_8 == 0 || rax_8 s< rbp))
        arg1[9].d = rbp
        sub_141a60020(arg1)
    else
        void* r9_1 = &arg1[7]
        int32_t rax_11 = (arg1[9].d - 1) & r13.d
        arg4[0x3d] = rax_11
        void* rdx_7 = *(r9_1 + 8)
        int64_t r8_4 = sx.q(rax_11)
        void* rax_12 = r9_1
        
        if (rdx_7 != 0)
            rax_12 = rdx_7
        
        arg4[0x3c] = *(rax_12 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2))
        void* rax_14 = *(r9_1 + 8)
        
        if (rax_14 != 0)
            r9_1 = rax_14
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2)) = rdi_2
else
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r13) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_141a45b4c:
        rbx_1 = -1
    else
        int64_t rdx_3 = *arg1
        
        while (true)
            int32_t* rcx_1 = sx.q(rbx_1) * 0xf8
            
            if (*(rcx_1 + rdx_3) == *arg4)
                break
            
            rbx_1 = *(rcx_1 + rdx_3 + 0xf0)
            
            if (rbx_1 == 0xffffffff)
                goto label_141a45b4c
    
    r15.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_2 = arg5
    else
        void* rdi_1 = sx.q(rbx_1) * 0xf8 + *arg1
        sub_141a33080(rdi_1 + 8)
        memmove(rdi_1, arg4, 0xf0)
        sub_141a61cd0(arg1, arg5, 1)
        rdi_2 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_141a45bb0

*arg2 = rdi_2

if (arg6 != 0)
    *arg6 = r15.b

return arg2
