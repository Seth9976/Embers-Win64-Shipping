// 函数: sub_1418a18f0
// 地址: 0x1418a18f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
r12.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp = 1
int64_t r10 = sx.q(arg3)
int32_t rdi_1

if (rax_1 == 1)
    rdi_1 = arg5
label_1418a19f2:
    int32_t rdx_7 = arg1[1].d - *(arg1 + 0x34)
    
    if (rdx_7 u>= 4)
        uint32_t rax_6 = rdx_7 u>> 1
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
        char r8_1
        
        if (rax_6 == 0xfffffff9)
            r8_1 = 0x20
        else
            r8_1 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_6 << 0x1a s>> 0x1f)).b & (0x20 - r8_1))
    
    int32_t rax_9
    
    if (rdx_7 s> 0)
        rax_9 = arg1[9].d
    
    if (rdx_7 s> 0 && (rax_9 == 0 || rax_9 s< rbp))
        arg1[9].d = rbp
        sub_140837b00(arg1)
    else
        void* r9_3 = &arg1[7]
        int32_t rax_12 = (arg1[9].d - 1) & r10.d
        arg4[9] = rax_12
        void* rdx_8 = *(r9_3 + 8)
        int64_t r8_2 = sx.q(rax_12)
        void* rax_13 = r9_3
        
        if (rdx_8 != 0)
            rax_13 = rdx_8
        
        arg4[8] = *(rax_13 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2))
        void* rax_15 = *(r9_3 + 8)
        
        if (rax_15 != 0)
            r9_3 = rax_15
        
        *(r9_3 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2)) = rdi_1
else
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r10) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_1418a1986:
        rbx_1 = -1
    else
        int64_t rdx_3 = *arg1
        
        while (true)
            int64_t rcx_1 = sx.q(rbx_1) * 5
            
            if (*(rdx_3 + (rcx_1 << 3)) == *arg4)
                break
            
            rbx_1 = *(rdx_3 + (rcx_1 << 3) + 0x20)
            
            if (rbx_1 == 0xffffffff)
                goto label_1418a1986
    
    r12.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        int64_t rcx_2 = sx.q(rbx_1) * 5
        int64_t rax_4 = *arg1
        int64_t rcx_3 = *(rax_4 + (rcx_2 << 3) + 8)
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        memmove(rax_4 + (rcx_2 << 3), arg4, 0x20)
        sub_1405c3590(arg1, arg5, 1)
        r10 = zx.q(arg3)
        rdi_1 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_1418a19f2

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = r12.b

return arg2
