// 函数: sub_14062c600
// 地址: 0x14062c600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi
rsi.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp = 1
int64_t r15 = sx.q(arg3)

if (rax_1 == 1)
    goto label_14062c6c2

int32_t rbx_1

if (rax_1 != 0)
    void* r8 = &arg1[7]
    void* rcx = arg1[8]
    
    if (rcx != 0)
        r8 = rcx
    
    rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r15) << 2))

if (rax_1 == 0 || rbx_1 == 0xffffffff)
label_14062c6bf:
    rsi.b = 0
label_14062c6c2:
    rbx_1 = arg5
label_14062c6ca:
    int32_t r10_2 = arg1[1].d - *(arg1 + 0x34)
    
    if (r10_2 u>= 4)
        uint32_t rdx_6 = r10_2 u>> 1
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rdx_6 + 8)
        uint64_t rflags_2
        char temp0_2
        temp0_2, rflags_2 = _bit_scan_reverse(rdx_6 + 7)
        rbp = 1 << ((0x20 - (0x1f - temp0_2)) & (not.d((0x1f - temp0_1) << 0x1a s>> 0x1f)).b)
    
    int32_t rax_7
    
    if (r10_2 s> 0)
        rax_7 = arg1[9].d
    
    if (r10_2 s> 0 && (rax_7 == 0 || rax_7 s< rbp))
        arg1[9].d = rbp
        sub_140637680(arg1)
    else
        void* r9_4 = &arg1[7]
        int32_t rax_12 = (arg1[9].d - 1) & r15.d
        *(arg4 + 0x24) = rax_12
        void* rdx_10 = *(r9_4 + 8)
        int64_t r8_2 = sx.q(rax_12)
        void* rax_13 = r9_4
        
        if (rdx_10 != 0)
            rax_13 = rdx_10
        
        arg4[4].d = *(rax_13 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2))
        void* rax_15 = *(r9_4 + 8)
        
        if (rax_15 != 0)
            r9_4 = rax_15
        
        *(r9_4 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2)) = rbx_1
else
    int64_t rdx_3 = *arg1
    
    while (true)
        rsi = sx.q(rbx_1) * 0x28
        int16_t* rax_3
        
        if (arg4[1].d == 0)
            rax_3 = &data_142d40450
        else
            rax_3 = *arg4
        
        int16_t* const rcx_2
        
        if (*(rsi + rdx_3 + 8) == 0)
            rcx_2 = &data_142d40450
        else
            rcx_2 = *(rsi + rdx_3)
        
        if (sub_140a54510(rcx_2, rax_3) == 0)
            break
        
        rdx_3 = *arg1
        rbx_1 = *(rsi + rdx_3 + 0x20)
        
        if (rbx_1 == 0xffffffff)
            goto label_14062c6bf
    
    rsi.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rbx_1 = arg5
    else
        int64_t rcx_6 = sx.q(rbx_1) * 5
        int64_t rax_9 = *arg1
        int64_t rcx_7 = *(rax_9 + (rcx_6 << 3))
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        memmove(rax_9 + (rcx_6 << 3), arg4, 0x20)
        sub_140638470(arg1, arg5, 1)
        r15 = zx.q(arg3)
    
    if (rsi.b == 0)
        goto label_14062c6ca

*arg2 = rbx_1

if (arg6 != 0)
    *arg6 = rsi.b

return arg2
