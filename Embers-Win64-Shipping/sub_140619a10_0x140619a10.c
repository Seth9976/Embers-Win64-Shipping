// 函数: sub_140619a10
// 地址: 0x140619a10
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
label_140619a99:
    rbx_1 = arg5
label_140619aa1:
    int32_t r10_2 = arg1[1].d - *(arg1 + 0x34)
    
    if (r10_2 u>= 4)
        uint32_t rdx_5 = r10_2 u>> 1
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rdx_5 + 8)
        uint64_t rflags_2
        char temp0_2
        temp0_2, rflags_2 = _bit_scan_reverse(rdx_5 + 7)
        rbp = 1 << ((0x20 - (0x1f - temp0_2)) & (not.d((0x1f - temp0_1) << 0x1a s>> 0x1f)).b)
    
    int32_t rax_5
    
    if (r10_2 s> 0)
        rax_5 = arg1[9].d
    
    if (r10_2 s> 0 && (rax_5 == 0 || rax_5 s< rbp))
        arg1[9].d = rbp
        sub_14061c580(arg1)
    else
        void* r9_5 = &arg1[7]
        int32_t rax_19 = (arg1[9].d - 1) & r13.d
        arg4[0xb] = rax_19
        void* rdx_12 = *(r9_5 + 8)
        int64_t r8_4 = sx.q(rax_19)
        void* rax_20 = r9_5
        
        if (rdx_12 != 0)
            rax_20 = rdx_12
        
        arg4[0xa] = *(rax_20 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2))
        void* rax_22 = *(r9_5 + 8)
        
        if (rax_22 != 0)
            r9_5 = rax_22
        
        *(r9_5 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2)) = rbx_1
else
    int64_t rdx_3 = *arg1
    
    while (true)
        int64_t rcx_2 = sx.q(rbx_1) * 6
        
        if (*(rdx_3 + (rcx_2 << 3)) == *arg4)
            break
        
        rbx_1 = *(rdx_3 + (rcx_2 << 3) + 0x28)
        
        if (rbx_1 == 0xffffffff)
            goto label_140619a99
    
    r14.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rbx_1 = arg5
    else
        void* rsi_3 = sx.q(rbx_1) * 0x30 + rdx_3
        int64_t rcx_8 = *(rsi_3 + 0x18)
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        int64_t rcx_9 = *(rsi_3 + 8)
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        memmove(rsi_3, arg4, 0x28)
        int64_t rcx_11 = sx.q(arg5)
        void* r10_3 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(*arg1 + sx.q(arg1[6].d) * 0x30) = rcx_11.d
        
        int32_t rdx_9 = -1
        int32_t* rax_11 = rcx_11 * 0x30 + *arg1
        *rax_11 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            rdx_9 = arg1[6].d
        
        rax_11[1] = rdx_9
        *(arg1 + 0x34) += 1
        arg1[6].d = rcx_11.d
        void* rax_12 = *(r10_3 + 0x10)
        
        if (rax_12 != 0)
            r10_3 = rax_12
        
        int32_t temp0_3
        int32_t temp1_1
        temp0_3:temp1_1 = sx.q(rcx_11.d)
        int64_t rcx_12 = sx.q((temp1_1 + (temp0_3 & 0x1f)) s>> 5)
        *(r10_3 + (rcx_12 << 2)) &= not.d(rol.d(1, rcx_11.b))
    
    if (r14.b == 0)
        goto label_140619aa1

*arg2 = rbx_1

if (arg6 != 0)
    *arg6 = r14.b

return arg2
