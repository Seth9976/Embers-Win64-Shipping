// 函数: sub_1406991c0
// 地址: 0x1406991c0
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
label_14069927e:
    rbx_1 = arg5
label_140699286:
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
        sub_1406a47d0(arg1)
    else
        void* r9_4 = &arg1[7]
        int32_t rax_20 = (arg1[9].d - 1) & r13.d
        *(arg4 + 0x9c) = rax_20
        void* rdx_12 = *(r9_4 + 8)
        int64_t r8_4 = sx.q(rax_20)
        void* rax_21 = r9_4
        
        if (rdx_12 != 0)
            rax_21 = rdx_12
        
        arg4[0x13].d = *(rax_21 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2))
        void* rax_23 = *(r9_4 + 8)
        
        if (rax_23 != 0)
            r9_4 = rax_23
        
        *(r9_4 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2)) = rbx_1
else
    int64_t rcx_1 = *arg1
    
    while (true)
        int64_t rsi_2 = sx.q(rbx_1) * 0xa0
        int16_t* rdx_3
        
        if (arg4[1].d == 0)
            rdx_3 = &data_142d40450
        else
            rdx_3 = *arg4
        
        int16_t* const rcx_2
        
        if (*(rsi_2 + rcx_1 + 8) == 0)
            rcx_2 = &data_142d40450
        else
            rcx_2 = *(rsi_2 + rcx_1)
        
        if (sub_140a54510(rcx_2, rdx_3) == 0)
            break
        
        rcx_1 = *arg1
        rbx_1 = *(rsi_2 + rcx_1 + 0x98)
        
        if (rbx_1 == 0xffffffff)
            goto label_14069927e
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rbx_1 = arg5
    else
        int64_t* rsi_5 = sx.q(rbx_1) * 0xa0 + *arg1
        sub_140691a20(&rsi_5[2])
        int64_t rcx_9 = *rsi_5
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        memmove(rsi_5, arg4, 0x98)
        int64_t rcx_11 = sx.q(arg5)
        void* r10_3 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(sx.q(arg1[6].d) * 0xa0 + *arg1) = rcx_11.d
        
        int32_t rdx_9 = -1
        int32_t* rax_12 = rcx_11 * 0xa0 + *arg1
        *rax_12 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            rdx_9 = arg1[6].d
        
        rax_12[1] = rdx_9
        *(arg1 + 0x34) += 1
        arg1[6].d = rcx_11.d
        void* rax_13 = *(r10_3 + 0x10)
        
        if (rax_13 != 0)
            r10_3 = rax_13
        
        int32_t temp0_3
        int32_t temp1_1
        temp0_3:temp1_1 = sx.q(rcx_11.d)
        int64_t rcx_12 = sx.q((temp1_1 + (temp0_3 & 0x1f)) s>> 5)
        *(r10_3 + (rcx_12 << 2)) &= not.d(rol.d(1, rcx_11.b))
    
    if (rbp.b == 0)
        goto label_140699286

*arg2 = rbx_1

if (arg6 != 0)
    *arg6 = rbp.b

return arg2
