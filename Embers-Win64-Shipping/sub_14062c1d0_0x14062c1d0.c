// 函数: sub_14062c1d0
// 地址: 0x14062c1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14
r14.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp = 1
int64_t r13 = sx.q(arg3)
int32_t rbx_1

if (rax_1 != 1 && rax_1 != 0)
    void* r8 = &arg1[7]
    void* rcx = arg1[8]
    
    if (rcx != 0)
        r8 = rcx
    
    rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r13) << 2))

if (rax_1 == 1 || rax_1 == 0 || rbx_1 == 0xffffffff)
label_14062c256:
    rbx_1 = arg5
label_14062c25e:
    int32_t r10_2 = arg1[1].d - *(arg1 + 0x34)
    
    if (r10_2 u>= 4)
        uint32_t rdx_4 = r10_2 u>> 1
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rdx_4 + 8)
        uint64_t rflags_2
        char temp0_2
        temp0_2, rflags_2 = _bit_scan_reverse(rdx_4 + 7)
        rbp = 1 << ((0x20 - (0x1f - temp0_2)) & (not.d((0x1f - temp0_1) << 0x1a s>> 0x1f)).b)
    
    int32_t rax_6
    
    if (r10_2 s> 0)
        rax_6 = arg1[9].d
    
    if (r10_2 s> 0 && (rax_6 == 0 || rax_6 s< rbp))
        arg1[9].d = rbp
        sub_1406371c0(arg1)
    else
        void* r9_7 = &arg1[7]
        int32_t rax_16 = (arg1[9].d - 1) & r13.d
        *(arg4 + 0x1c) = rax_16
        void* rdx_10 = *(r9_7 + 8)
        int64_t r8_5 = sx.q(rax_16)
        void* rax_17 = r9_7
        
        if (rdx_10 != 0)
            rax_17 = rdx_10
        
        arg4[3].d = *(rax_17 + (((sx.q(arg1[9].d) - 1) & r8_5) << 2))
        void* rax_19 = *(r9_7 + 8)
        
        if (rax_19 != 0)
            r9_7 = rax_19
        
        *(r9_7 + (((sx.q(arg1[9].d) - 1) & r8_5) << 2)) = rbx_1
else
    int64_t rcx_1 = *arg1
    
    while (true)
        int64_t rax_3 = sx.q(rbx_1) << 5
        
        if (*(rax_3 + rcx_1) == *arg4)
            break
        
        rbx_1 = *(rax_3 + rcx_1 + 0x18)
        
        if (rbx_1 == 0xffffffff)
            goto label_14062c256
    
    r14.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rbx_1 = arg5
    else
        void* rsi_3 = (sx.q(rbx_1) << 5) + rcx_1
        int64_t rcx_7 = *(rsi_3 + 8)
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        memmove(rsi_3, arg4, 0x18)
        int64_t rcx_9 = sx.q(arg5)
        void* r10_3 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *((sx.q(arg1[6].d) << 5) + *arg1) = rcx_9.d
        
        int32_t rax_8 = -1
        int32_t* r8_4 = (rcx_9 << 5) + *arg1
        *r8_4 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            rax_8 = arg1[6].d
        
        r8_4[1] = rax_8
        *(arg1 + 0x34) += 1
        arg1[6].d = rcx_9.d
        void* rax_9 = *(r10_3 + 0x10)
        
        if (rax_9 != 0)
            r10_3 = rax_9
        
        int32_t temp0_3
        int32_t temp1_1
        temp0_3:temp1_1 = sx.q(rcx_9.d)
        int64_t rcx_10 = sx.q((temp1_1 + (temp0_3 & 0x1f)) s>> 5)
        *(r10_3 + (rcx_10 << 2)) &= not.d(rol.d(1, rcx_9.b))
    
    if (r14.b == 0)
        goto label_14062c25e

*arg2 = rbx_1

if (arg6 != 0)
    *arg6 = r14.b

return arg2
