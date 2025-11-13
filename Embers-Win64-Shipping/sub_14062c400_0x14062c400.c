// 函数: sub_14062c400
// 地址: 0x14062c400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t r15 = 1
int64_t r13 = sx.q(arg3)
int32_t rbx_1

if (rax_1 != 1 && rax_1 != 0)
    void* r8 = &arg1[7]
    void* rcx = arg1[8]
    
    if (rcx != 0)
        r8 = rcx
    
    rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r13) << 2))

if (rax_1 == 1 || rax_1 == 0 || rbx_1 == 0xffffffff)
label_14062c4b3:
    rbx_1 = arg5
label_14062c4bb:
    int32_t r10_2 = arg1[1].d - *(arg1 + 0x34)
    
    if (r10_2 u>= 4)
        uint32_t rdx_5 = r10_2 u>> 1
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rdx_5 + 8)
        uint64_t rflags_2
        char temp0_2
        temp0_2, rflags_2 = _bit_scan_reverse(rdx_5 + 7)
        r15 = 1 << ((0x20 - (0x1f - temp0_2)) & (not.d((0x1f - temp0_1) << 0x1a s>> 0x1f)).b)
    
    int32_t rax_6
    
    if (r10_2 s> 0)
        rax_6 = arg1[9].d
    
    if (r10_2 s> 0 && (rax_6 == 0 || rax_6 s< r15))
        arg1[9].d = r15
        sub_140637440(arg1)
    else
        void* r9_4 = &arg1[7]
        int32_t rax_9 = (arg1[9].d - 1) & r13.d
        *(arg4 + 0x1c) = rax_9
        void* rdx_8 = *(r9_4 + 8)
        int64_t r8_2 = sx.q(rax_9)
        void* rax_10 = r9_4
        
        if (rdx_8 != 0)
            rax_10 = rdx_8
        
        arg4[3].d = *(rax_10 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2))
        void* rax_12 = *(r9_4 + 8)
        
        if (rax_12 != 0)
            r9_4 = rax_12
        
        *(r9_4 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2)) = rbx_1
else
    int64_t rax_2 = *arg1
    
    while (true)
        int64_t rdi_2 = sx.q(rbx_1) << 5
        int16_t* rdx_3
        
        if (arg4[1].d == 0)
            rdx_3 = &data_142d40450
        else
            rdx_3 = *arg4
        
        int16_t* const rcx_1
        
        if (*(rdi_2 + rax_2 + 8) == 0)
            rcx_1 = &data_142d40450
        else
            rcx_1 = *(rdi_2 + rax_2)
        
        if (sub_140a54510(rcx_1, rdx_3) == 0)
            break
        
        rax_2 = *arg1
        rbx_1 = *(rdi_2 + rax_2 + 0x18)
        
        if (rbx_1 == 0xffffffff)
            goto label_14062c4b3
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rbx_1 = arg5
    else
        int64_t* rdi_5 = (sx.q(rbx_1) << 5) + *arg1
        int64_t rcx_7 = *rdi_5
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        memmove(rdi_5, arg4, 0x18)
        sub_1406383b0(arg1, arg5, 1)
    
    if (rbp.b == 0)
        goto label_14062c4bb

*arg2 = rbx_1

if (arg6 != 0)
    *arg6 = rbp.b

return arg2
