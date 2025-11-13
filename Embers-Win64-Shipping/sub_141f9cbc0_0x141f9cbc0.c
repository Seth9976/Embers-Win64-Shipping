// 函数: sub_141f9cbc0
// 地址: 0x141f9cbc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = 0
*(arg1 + 0x78) = 0

if (*(arg1 + 0x7c) != 0)
    sub_1413f6f70(arg1 + 0x70, 0)

sub_141453140(arg1 + 8, 0)
*(arg1 + 0x60) = 0

if (*(arg1 + 0x64) != 0)
    sub_1405dadb0(arg1 + 0x58, 0)

int64_t r14 = sx.q(*(arg1 + 0x78))
int32_t rax = arg2[1].d

if (rax s> r14.d)
    *(arg1 + 0x78) = rax
    int32_t i_2 = rax - r14.d
    
    if (rax s> *(arg1 + 0x7c))
        sub_1405c50f0(arg1 + 0x70)
    
    int16_t* rcx_5 = r14 * 0x1c + *(arg1 + 0x70)
    
    if (i_2 != 0)
        int32_t i
        
        do
            *rcx_5 = 0
            rcx_5[1].b = 0
            __builtin_memset(&rcx_5[2], 0, 0x18)
            rcx_5 = &rcx_5[0xe]
            i = i_2
            i_2 -= 1
        while (i != 1)
else if (rax s< r14.d)
    int32_t rcx_6 = r14.d
    
    if (rcx_6 != rax)
        *(arg1 + 0x78) = r14.d - (rcx_6 - rax)
        sub_1405c5460(arg1 + 0x70)

int32_t r14_2 = arg2[1].d
sub_141f9cf00(arg1 + 0x58, r14_2, 1)

if (r14_2 s> *(arg1 + 0x10) - *(arg1 + 0x3c))
    sub_14090a510(arg1 + 8, r14_2)
    int32_t rax_7
    
    if (r14_2 u< 4)
        rax_7 = 1
    else
        uint32_t rax_4 = r14_2 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_4 + 8)
        int32_t rcx_11
        
        if (rax_4 == 0xfffffff8)
            rcx_11 = 0x20
        else
            rcx_11 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_4 + 7)
        
        if (rax_4 == 0xfffffff9)
            rax_7 = 1
        else
            rax_7 = 1 << ((not.d(rcx_11 << 0x1a s>> 0x1f)).b & (0x20 - (0x1f - temp0_3)))
    
    int32_t rcx_16 = *(arg1 + 0x50)
    
    if (rcx_16 == 0 || rcx_16 s< rax_7)
        *(arg1 + 0x50) = rax_7
        sub_140908c40(arg1 + 8)

int32_t r12 = 0

if (r14_2 s> 0)
    do
        int32_t rbx_3 = data_143a2d8ec + 1
        data_143a2d8ec = rbx_3
        int32_t var_48
        sub_14090a150(arg1 + 8, &var_48)
        int32_t rax_8 = var_48
        int32_t* var_40
        *var_40 = rbx_3
        var_40[1] = r12
        var_40[2] = 0xffffffff
        void arg_10
        sub_141f86230(arg1 + 8, &arg_10, rbx_3, var_40, rax_8, nullptr)
        r12 += 1
    while (r12 s< r14_2)

if (arg2[1].d s> 0)
    int64_t rdx_6 = 0
    
    do
        int64_t rax_9 = *arg2
        rdx_6 += 0x1c
        int64_t rcx_21 = *(arg1 + 0x70)
        i_1 += 1
        *(rdx_6 + rcx_21 - 0x1c) = *(rdx_6 + rax_9 - 0x1c)
        *(rdx_6 + rcx_21 - 0xc) = *(rdx_6 + rax_9 - 0xc)
        *(rdx_6 + rcx_21 - 4) = *(rdx_6 + rax_9 - 4)
    while (i_1 s< arg2[1].d)

return sub_141f814e0(arg1, (zx.o(0)).q.d) __tailcall
