// 函数: sub_140aa6950
// 地址: 0x140aa6950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
r12.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp = 1
int64_t r13 = sx.q(arg3)
int32_t rdi

if (rax_1 == 1)
    rdi = arg5
label_140aa6a37:
    int32_t r8_3 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_3 u>= 4)
        uint32_t rax_4 = r8_3 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_4 + 8)
        int32_t rcx_7
        
        if (rax_4 == 0xfffffff8)
            rcx_7 = 0x20
        else
            rcx_7 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_4 + 7)
        char r9
        
        if (rax_4 == 0xfffffff9)
            r9 = 0x20
        else
            r9 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_7 << 0x1a s>> 0x1f)).b & (0x20 - r9))
    
    int32_t rax_7
    
    if (r8_3 s> 0)
        rax_7 = arg1[9].d
    
    if (r8_3 s> 0 && (rax_7 == 0 || rax_7 s< rbp))
        arg1[9].d = rbp
        sub_140abe180(arg1)
    else
        void* r9_1 = &arg1[7]
        int32_t rax_10 = (arg1[9].d - 1) & r13.d
        *(arg4 + 0x1c) = rax_10
        void* rdx_7 = *(r9_1 + 8)
        int64_t r8_4 = sx.q(rax_10)
        void* rax_11 = r9_1
        
        if (rdx_7 != 0)
            rax_11 = rdx_7
        
        arg4[3].d = *(rax_11 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2))
        void* rax_13 = *(r9_1 + 8)
        
        if (rax_13 != 0)
            r9_1 = rax_13
        
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
    label_140aa69e2:
        rbx_1 = -1
    else
        int64_t rdx_3 = *arg1
        
        while (true)
            int64_t rcx_2 = sx.q(rbx_1) << 5
            
            if (*(rcx_2 + rdx_3 + 8) == arg4[1] && *(rcx_2 + rdx_3) == *arg4)
                break
            
            rbx_1 = *(rcx_2 + rdx_3 + 0x18)
            
            if (rbx_1 == 0xffffffff)
                goto label_140aa69e2
    
    r12.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi = arg5
    else
        memmove((sx.q(rbx_1) << 5) + *arg1, arg4, 0x18)
        sub_1405c36f0(arg1, arg5, 1)
        rdi = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_140aa6a37

*arg2 = rdi

if (arg6 != 0)
    *arg6 = r12.b

return arg2
