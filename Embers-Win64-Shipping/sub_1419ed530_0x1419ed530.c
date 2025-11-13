// 函数: sub_1419ed530
// 地址: 0x1419ed530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15
r15.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp = 1
int64_t r13 = sx.q(arg3)
int32_t rdi

if (rax_1 == 1)
    rdi = arg5
label_1419ed625:
    int32_t r8_3 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_3 u>= 4)
        uint32_t rax_8 = r8_3 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8 + 8)
        int32_t rcx_7
        
        if (rax_8 == 0xfffffff8)
            rcx_7 = 0x20
        else
            rcx_7 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_8 + 7)
        char r9_1
        
        if (rax_8 == 0xfffffff9)
            r9_1 = 0x20
        else
            r9_1 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_7 << 0x1a s>> 0x1f)).b & (0x20 - r9_1))
    
    int32_t rax_11
    
    if (r8_3 s> 0)
        rax_11 = arg1[9].d
    
    if (r8_3 s> 0 && (rax_11 == 0 || rax_11 s< rbp))
        arg1[9].d = rbp
        sub_1419efd00(arg1)
    else
        void* r9_2 = &arg1[7]
        int32_t rax_14 = (arg1[9].d - 1) & r13.d
        *(arg4 + 0x14) = rax_14
        void* rdx_7 = *(r9_2 + 8)
        int64_t r8_4 = sx.q(rax_14)
        void* rax_15 = r9_2
        
        if (rdx_7 != 0)
            rax_15 = rdx_7
        
        arg4[2].d = *(rax_15 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2))
        void* rax_17 = *(r9_2 + 8)
        
        if (rax_17 != 0)
            r9_2 = rax_17
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2)) = rdi
else
    int64_t r9 = *arg4
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r13) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_1419ed5cc:
        rbx_1 = -1
    else
        int64_t r8_1 = *arg1
        
        while (true)
            int64_t rcx_1 = sx.q(rbx_1) * 3
            int64_t rcx_2 = *(r8_1 + (rcx_1 << 3))
            
            if (rcx_2.d == r9.d && (rcx_2 u>> 0x20).d == (r9 u>> 0x20).d)
                break
            
            rbx_1 = *(r8_1 + (rcx_1 << 3) + 0x10)
            
            if (rbx_1 == 0xffffffff)
                goto label_1419ed5cc
    
    r15.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi = arg5
    else
        memmove(*arg1 + sx.q(rbx_1) * 0x18, arg4, 0x10)
        sub_1405c3640(arg1, arg5, 1)
        rdi = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_1419ed625

*arg2 = rdi

if (arg6 != 0)
    *arg6 = r15.b

return arg2
