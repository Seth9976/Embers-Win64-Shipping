// 函数: sub_14060eb50
// 地址: 0x14060eb50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rsi = 1
int64_t r12 = sx.q(arg3)
int32_t rbx_1

if (rax_1 != 1 && rax_1 != 0)
    void* r8 = &arg1[7]
    void* rcx = arg1[8]
    
    if (rcx != 0)
        r8 = rcx
    
    rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r12) << 2))

if (rax_1 == 1 || rax_1 == 0 || rbx_1 == 0xffffffff)
label_14060ebd6:
    rbx_1 = arg5
label_14060ebde:
    int32_t r10_2 = arg1[1].d - *(arg1 + 0x34)
    
    if (r10_2 u>= 4)
        uint32_t rdx_5 = r10_2 u>> 1
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rdx_5 + 8)
        uint64_t rflags_2
        char temp0_2
        temp0_2, rflags_2 = _bit_scan_reverse(rdx_5 + 7)
        rsi = 1 << ((0x20 - (0x1f - temp0_2)) & (not.d((0x1f - temp0_1) << 0x1a s>> 0x1f)).b)
    
    int32_t rax_5
    
    if (r10_2 s> 0)
        rax_5 = arg1[9].d
    
    if (r10_2 s> 0 && (rax_5 == 0 || rax_5 s< rsi))
        arg1[9].d = rsi
        sub_1406101e0(arg1)
    else
        void* r9_6 = &arg1[7]
        int32_t rax_18 = (arg1[9].d - 1) & r12.d
        arg4[4] = rax_18
        void* rdx_11 = *(r9_6 + 8)
        int64_t r8_4 = sx.q(rax_18)
        void* rax_19 = r9_6
        
        if (rdx_11 != 0)
            rax_19 = rdx_11
        
        arg4[3] = *(rax_19 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2))
        void* rax_21 = *(r9_6 + 8)
        
        if (rax_21 != 0)
            r9_6 = rax_21
        
        *(r9_6 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2)) = rbx_1
else
    int64_t rdx_3 = *arg1
    
    while (true)
        int64_t rcx_1 = sx.q(rbx_1) * 5
        
        if (*(rdx_3 + (rcx_1 << 2)) == *arg4)
            break
        
        rbx_1 = *(rdx_3 + (rcx_1 << 2) + 0xc)
        
        if (rbx_1 == 0xffffffff)
            goto label_14060ebd6
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rbx_1 = arg5
    else
        memmove(rdx_3 + sx.q(rbx_1) * 0x14, arg4, 0xc)
        int64_t rcx_9 = sx.q(arg5)
        void* r10_3 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(*arg1 + sx.q(arg1[6].d) * 0x14) = rcx_9.d
        
        int32_t* r9_5 = *arg1 + rcx_9 * 0x14
        int32_t rax_10 = -1
        *r9_5 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            rax_10 = arg1[6].d
        
        r9_5[1] = rax_10
        *(arg1 + 0x34) += 1
        arg1[6].d = rcx_9.d
        void* rax_11 = *(r10_3 + 0x10)
        
        if (rax_11 != 0)
            r10_3 = rax_11
        
        int32_t temp0_3
        int32_t temp1_1
        temp0_3:temp1_1 = sx.q(rcx_9.d)
        int64_t rcx_10 = sx.q((temp1_1 + (temp0_3 & 0x1f)) s>> 5)
        *(r10_3 + (rcx_10 << 2)) &= not.d(rol.d(1, rcx_9.b))
    
    if (rbp.b == 0)
        goto label_14060ebde

*arg2 = rbx_1

if (arg6 != 0)
    *arg6 = rbp.b

return arg2
