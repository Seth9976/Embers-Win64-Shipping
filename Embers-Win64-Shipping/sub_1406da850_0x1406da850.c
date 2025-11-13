// 函数: sub_1406da850
// 地址: 0x1406da850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi
rsi.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rdi = 1
int64_t rbp = sx.q(arg3)
int32_t rbx_1

if (rax_1 == 1)
label_1406da8c8:
    rbx_1 = arg5
label_1406da8d0:
    int32_t r11_2 = arg1[1].d - *(arg1 + 0x34)
    
    if (r11_2 u>= 4)
        uint32_t rdx_5 = r11_2 u>> 1
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rdx_5 + 8)
        uint64_t rflags_2
        char temp0_2
        temp0_2, rflags_2 = _bit_scan_reverse(rdx_5 + 7)
        rdi = 1 << ((0x20 - (0x1f - temp0_2)) & (not.d((0x1f - temp0_1) << 0x1a s>> 0x1f)).b)
    
    int32_t rax_5
    
    if (r11_2 s> 0)
        rax_5 = arg1[9].d
    
    if (r11_2 s> 0 && (rax_5 == 0 || rax_5 s< rdi))
        arg1[9].d = rdi
        sub_1406dcb10(arg1)
    else
        void* r9_6 = &arg1[7]
        int32_t rax_18 = (arg1[9].d - 1) & rbp.d
        arg4[2] = rax_18
        void* rdx_10 = *(r9_6 + 8)
        int64_t r8_4 = sx.q(rax_18)
        void* rax_19 = r9_6
        
        if (rdx_10 != 0)
            rax_19 = rdx_10
        
        arg4[1] = *(rax_19 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2))
        void* rax_21 = *(r9_6 + 8)
        
        if (rax_21 != 0)
            r9_6 = rax_21
        
        *(r9_6 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2)) = rbx_1
else
    int32_t r9 = *arg4
    
    if (rax_1 == 0)
        goto label_1406da8c8
    
    void* r8 = &arg1[7]
    void* rcx = arg1[8]
    
    if (rcx != 0)
        r8 = rcx
    
    rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & rbp) << 2))
    
    if (rbx_1 == 0xffffffff)
        goto label_1406da8c8
    
    int64_t rdx_3 = *arg1
    
    while (true)
        int64_t rcx_1 = sx.q(rbx_1) * 3
        
        if (*(rdx_3 + (rcx_1 << 2)) == r9)
            break
        
        rbx_1 = *(rdx_3 + (rcx_1 << 2) + 4)
        
        if (rbx_1 == 0xffffffff)
            goto label_1406da8c8
    
    rsi.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rbx_1 = arg5
    else
        void* r11_3 = &arg1[2]
        *(rdx_3 + sx.q(rbx_1) * 0xc) = r9
        int64_t rcx_8 = sx.q(arg5)
        
        if (*(arg1 + 0x34) != 0)
            *(*arg1 + sx.q(arg1[6].d) * 0xc) = rcx_8.d
        
        int32_t* r9_5 = *arg1 + rcx_8 * 0xc
        int32_t rax_10 = -1
        *r9_5 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            rax_10 = arg1[6].d
        
        r9_5[1] = rax_10
        *(arg1 + 0x34) += 1
        arg1[6].d = rcx_8.d
        void* rax_11 = *(r11_3 + 0x10)
        
        if (rax_11 != 0)
            r11_3 = rax_11
        
        int32_t temp0_3
        int32_t temp1_1
        temp0_3:temp1_1 = sx.q(rcx_8.d)
        int64_t rcx_9 = sx.q((temp1_1 + (temp0_3 & 0x1f)) s>> 5)
        *(r11_3 + (rcx_9 << 2)) &= not.d(rol.d(1, rcx_8.b))
    
    if (rsi.b == 0)
        goto label_1406da8d0

*arg2 = rbx_1

if (arg6 != 0)
    *arg6 = rsi.b

return arg2
