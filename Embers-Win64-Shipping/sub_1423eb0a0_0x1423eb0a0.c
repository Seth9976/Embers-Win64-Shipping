// 函数: sub_1423eb0a0
// 地址: 0x1423eb0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg2 + 0x278)
*(rax + 0x11b) &= 0x7f

if (*(arg2 + 0x1c0) s> 0)
    if (*(arg2 + 0x1d8) != u"Current map change still in progress")
        int32_t rdi_1 = 0
        bool cond:0_1 = *(arg2 + 0x1e4) == 0x25
        *(arg2 + 0x1e0) = 0
        
        if (not(cond:0_1))
            sub_1405947f0(arg2 + 0x1d8, 0x25)
            rdi_1 = *(arg2 + 0x1e0)
        
        *(arg2 + 0x1e0) = rdi_1 + 0x25
        
        if (rdi_1 + 0x25 s> *(arg2 + 0x1e4))
            sub_140594770(arg2 + 0x1d8)
        
        void* rcx_11 = *(arg2 + 0x1d8)
        __builtin_memcpy(rcx_11, u"Current map change still in prog", 0x40)
        *(rcx_11 + 0x40) = 0x73007300650072
        *(rcx_11 + 0x48) = 0
    
    wchar16 const* const rax_9
    rax_9.b = 0
    return rax_9

*(arg2 + 0x1c0) = 0

if (*(arg2 + 0x1c4) s<= 0xffffffff)
    sub_140638c50(arg2 + 0x1b8, 0)

int64_t rsi = sx.q(arg3[1].d)

if (rsi.d != 0)
    int32_t rax_1 = *(arg2 + 0x1c0)
    int32_t rdx = rax_1 + rsi.d
    
    if (rdx s> *(arg2 + 0x1c4))
        sub_140638c50(arg2 + 0x1b8, rdx)
        rax_1 = *(arg2 + 0x1c0)
    
    memcpy(*(arg2 + 0x1b8) + (sx.q(rax_1) << 3), *arg3, (rsi << 3).d)
    *(arg2 + 0x1c0) += rsi.d

void* rsi_1 = *(arg2 + 0x278)

if (rsi_1 != 0 && rsi_1 + 0x580 != arg3)
    int64_t rbp_1 = sx.q(arg3[1].d)
    int64_t r14_1 = *arg3
    int32_t r8_2 = *(rsi_1 + 0x58c)
    *(rsi_1 + 0x588) = rbp_1.d
    
    if (rbp_1.d != 0 || r8_2 != 0)
        sub_1405c4a00(rsi_1 + 0x580, rbp_1.d, r8_2)
        memcpy(*(rsi_1 + 0x580), r14_1, (rbp_1 << 3).d)
    else
        *(rsi_1 + 0x58c) = 0

int64_t rbp_2 = 0
int64_t* r14_2 = *(arg2 + 0x1b8)
uint64_t r12_1 = sx.q(*(arg2 + 0x1c0)) << 3 u>> 3

if (r14_2 u> &r14_2[sx.q(*(arg2 + 0x1c0))])
    r12_1 = 0

if (r12_1 != 0)
    do
        int64_t rbx_1 = *(arg2 + 0xb0)
        int64_t arg_10 = *r14_2
        int64_t var_48 = 0
        int32_t var_40_1 = 0
        void*** rax_6 = sub_1405978f0(0x20, &var_48)
        
        if (rax_6 != 0)
            *rax_6 = &data_143343488
            rax_6[1] = sub_1423d23b0
            rax_6[2] = rbx_1
            rax_6[3] = sub_140a387b0()
            *rax_6 = &data_1433434e0
        
        int64_t var_38
        sub_140bcb5c0(sub_140b63b70(&arg_10, &var_38), &var_48, 0, 0, 0xffffffff)
        int64_t rcx_8 = var_38
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        r14_2 = &r14_2[1]
        rbp_2 += 1
    while (rbp_2 != r12_1)

void* rax_4
rax_4.b = 1
return rax_4
