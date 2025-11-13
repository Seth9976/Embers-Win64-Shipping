// 函数: sub_141a45470
// 地址: 0x141a45470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
r12.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp = 1
int64_t r13 = sx.q(arg3)
int32_t rdi_1

if (rax_1 == 1)
    rdi_1 = arg5
label_141a45576:
    int32_t r8_3 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_3 u>= 4)
        uint32_t rax_8 = r8_3 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8 + 8)
        int32_t rcx_6
        
        if (rax_8 == 0xfffffff8)
            rcx_6 = 0x20
        else
            rcx_6 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_8 + 7)
        char r9
        
        if (rax_8 == 0xfffffff9)
            r9 = 0x20
        else
            r9 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_6 << 0x1a s>> 0x1f)).b & (0x20 - r9))
    
    int32_t rax_11
    
    if (r8_3 s> 0)
        rax_11 = arg1[9].d
    
    if (r8_3 s> 0 && (rax_11 == 0 || rax_11 s< rbp))
        arg1[9].d = rbp
        sub_141a5fc10(arg1)
    else
        void* r9_1 = &arg1[7]
        int32_t rax_14 = (arg1[9].d - 1) & r13.d
        arg4[0x11] = rax_14
        void* rdx_7 = *(r9_1 + 8)
        int64_t r8_4 = sx.q(rax_14)
        void* rax_15 = r9_1
        
        if (rdx_7 != 0)
            rax_15 = rdx_7
        
        arg4[0x10] = *(rax_15 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2))
        void* rax_17 = *(r9_1 + 8)
        
        if (rax_17 != 0)
            r9_1 = rax_17
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2)) = rdi_1
else
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r13) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_141a4550b:
        rbx_1 = -1
    else
        int64_t rdx_3 = *arg1
        
        while (true)
            int64_t rcx_1 = sx.q(rbx_1) * 9
            
            if (*(rdx_3 + (rcx_1 << 3) + 4) == arg4[1] && *(rdx_3 + (rcx_1 << 3)) == *arg4
                    && *(rdx_3 + (rcx_1 << 3) + 8) == arg4[2])
                break
            
            rbx_1 = *(rdx_3 + (rcx_1 << 3) + 0x40)
            
            if (rbx_1 == 0xffffffff)
                goto label_141a4550b
    
    r12.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        int64_t rcx_2 = sx.q(rbx_1) * 9
        int64_t rax_6 = *arg1
        int64_t rcx_3 = *(rax_6 + (rcx_2 << 3) + 0x30)
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        memmove(rax_6 + (rcx_2 << 3), arg4, 0x40)
        sub_1407c2d20(arg1, arg5, 1)
        rdi_1 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_141a45576

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = r12.b

return arg2
