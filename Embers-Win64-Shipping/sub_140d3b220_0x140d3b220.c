// 函数: sub_140d3b220
// 地址: 0x140d3b220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15
r15.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp = 1
int64_t r13 = sx.q(arg3)
int32_t rdi_3

if (rax_1 == 1)
    rdi_3 = arg5
label_140d3b307:
    int32_t r8_2 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_2 u>= 4)
        uint32_t rax_5 = r8_2 u>> 1
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
        char r9_1
        
        if (rax_5 == 0xfffffff9)
            r9_1 = 0x20
        else
            r9_1 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_5 << 0x1a s>> 0x1f)).b & (0x20 - r9_1))
    
    int32_t rax_8
    
    if (r8_2 s> 0)
        rax_8 = arg1[9].d
    
    if (r8_2 s> 0 && (rax_8 == 0 || rax_8 s< rbp))
        arg1[9].d = rbp
        sub_1405c0690(arg1)
    else
        void* r9_2 = &arg1[7]
        int32_t rax_11 = (arg1[9].d - 1) & r13.d
        *(arg4 + 0x1c) = rax_11
        void* rdx_6 = *(r9_2 + 8)
        int64_t r8_3 = sx.q(rax_11)
        void* rax_12 = r9_2
        
        if (rdx_6 != 0)
            rax_12 = rdx_6
        
        arg4[3].d = *(rax_12 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2))
        void* rax_14 = *(r9_2 + 8)
        
        if (rax_14 != 0)
            r9_2 = rax_14
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2)) = rdi_3
else
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r13) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_140d3b2a7:
        rbx_1 = -1
    else
        int64_t rcx_1 = *arg1
        
        while (true)
            int64_t rax_3 = sx.q(rbx_1) << 5
            
            if (*(rax_3 + rcx_1) == *arg4)
                break
            
            rbx_1 = *(rax_3 + rcx_1 + 0x18)
            
            if (rbx_1 == 0xffffffff)
                goto label_140d3b2a7
    
    r15.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_3 = arg5
    else
        void* rdi_2 = (sx.q(rbx_1) << 5) + *arg1
        sub_140d3a1f0(rdi_2)
        memmove(rdi_2, arg4, 0x18)
        sub_1405c36f0(arg1, arg5, 1)
        rdi_3 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_140d3b307

*arg2 = rdi_3

if (arg6 != 0)
    *arg6 = r15.b

return arg2
