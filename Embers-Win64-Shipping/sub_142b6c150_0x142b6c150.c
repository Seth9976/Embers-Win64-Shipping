// 函数: sub_142b6c150
// 地址: 0x142b6c150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = *(arg2 + 2)
int64_t r11 = *(arg2 + 0x10)
int32_t r9 = sx.d(*(arg1 + 0x119))
char rax_1 = *(arg1 + 0x3f)
int32_t rdx = *(arg1 + 0xd0)
void* rcx_1 = *(*(arg1 + 0x30) + 0x120)
int32_t r10_2 = ((*(arg2 + 0x18) - r11) s>> 1).d
int32_t arg_8 = 0
uint32_t result = sub_142b6bba0(rcx_1, rdx, arg1 + 0xd4, r9, r11, r10_2, &arg_8, rax_1, rax)

if (result s>= 2)
    int32_t rsi_1 = sx.d(*(arg1 + 0x119))
    
    if (result - 2 s< rsi_1)
        int32_t rsi_2 = rsi_1 - (result - 2)
        sub_142a8bcd0(arg1 + 0xd4, arg1 + ((sx.q(result - 2) + 0x6a) << 1), rsi_2)
        rsi_2.b = neg.b(rsi_2.b)
        *(arg1 + 0x119) = rsi_2.b
    else
        *(arg2 + 0x10) += sx.q(result - 2 - rsi_1) * 2
        *(arg1 + 0x119) = 0
    
    void* rdx_2 = *(arg1 + 0x30)
    int32_t r8_2 = arg_8
    char var_30
    var_30.q = arg4
    *(arg1 + 0xd0) = 0xffffffff
    int32_t* var_38
    var_38.d = arg3
    int32_t var_40
    var_40.q = arg2 + 0x30
    return sub_142b6c020(arg1, *(rdx_2 + 0x120), r8_2, arg2 + 0x20, *(arg2 + 0x28), var_40, 
        var_38.d, var_30)

if (result s>= 0)
    if (result == 1)
        *(arg1 + 0x5f) = result.b
    
    *(arg1 + 0x54) = *(arg1 + 0xd0)
    result.b = neg.b(*(arg1 + 0x119))
    *(arg1 + 0xd0) = 0xffffffff
    *(arg1 + 0x119) = result.b
    *arg4 = 0xa
else
    int64_t r8_3 = sx.q(*(arg1 + 0x119))
    int16_t* rcx_4 = *(arg2 + 0x10)
    int32_t r9_2 = 0xfffffffe - result
    
    if (r8_3.d s< r9_2)
        void* rdx_5 = arg1 + 0xd4 + (r8_3 << 1)
        uint64_t i_1 = zx.q(r9_2 - r8_3.d)
        uint64_t i
        
        do
            result = zx.d(*rcx_4)
            rcx_4 = &rcx_4[1]
            *rdx_5 = result.w
            rdx_5 += 2
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    *(arg2 + 0x10) = rcx_4
    *(arg1 + 0x119) = r9_2.b

return result
