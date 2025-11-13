// 函数: sub_142b6c310
// 地址: 0x142b6c310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *(arg1 + 0x30)
int32_t arg_8 = 0
char rax = *(r10 + 0xfc)
char rcx

if (rax != 0xc)
    rcx = -1
    
    if (rax == 0xdb)
        rcx = 1
else
    rcx = *(arg1 + 0x4c)

char var_28 = *(arg2 + 2)
uint32_t result = sub_142b6be20(*(r10 + 0x120), rcx, arg1 + 0xfa, sx.d(*(arg1 + 0x11a)), 
    *(arg2 + 0x10), *(arg2 + 0x18) - *(arg2 + 0x10), &arg_8, *(arg1 + 0x3f))
int64_t result_1 = sx.q(result)

if (result s> 0)
    int32_t rsi_1 = sx.d(*(arg1 + 0x11a))
    
    if (result_1.d s< rsi_1)
        uint32_t count = rsi_1 - result_1.d
        memmove(arg1 + 0xfa, arg1 + 0xfa + result_1, count)
        count.b = neg.b(count.b)
        *(arg1 + 0x11a) = count.b
    else
        *(arg2 + 0x10) += sx.q(result_1.d - rsi_1)
        *(arg1 + 0x11a) = 0
    
    int64_t r9_2 = *(arg2 + 0x28)
    void* rcx_3 = *(*(arg1 + 0x30) + 0x120)
    int32_t rax_6 = arg_8
    
    if (rax_6 u> 0x2fffff)
        char var_30
        var_30.q = arg4
        int32_t* var_38
        var_38.d = arg3
        int32_t var_40
        var_40.q = arg2 + 0x30
        return sub_142b6b750(arg1, rcx_3 + sx.q(*(rcx_3 + 0xc)) + ((zx.q(rax_6) & 0x3ffff) << 1), 
            (rax_6 u>> 0x12) - 0xc, arg2 + 0x20, r9_2, var_40, var_38.d, var_30)
    
    return sub_142b6b650(arg1, rax_6 - 0x1f0000, arg2 + 0x20, r9_2, arg2 + 0x30, arg3, arg4)

if (result s>= 0)
    result = memcpy(arg1 + 0x41, arg1 + 0xfa, sx.d(*(arg1 + 0x11b)))
    int32_t rcx_9 = sx.d(*(arg1 + 0x11b))
    int32_t count_1 = sx.d(*(arg1 + 0x11a)) - rcx_9
    *(arg1 + 0x40) = rcx_9.b
    
    if (count_1 s> 0)
        result = memmove(arg1 + 0xfa, arg1 + 0xfa + sx.q(rcx_9.b), count_1)
    
    count_1.b = neg.b(count_1.b)
    *(arg1 + 0x11a) = count_1.b
    *arg4 = 0xa
else
    int64_t r8_8 = sx.q(*(arg1 + 0x11a))
    int32_t r9_4 = neg.d(result_1.d)
    char* rcx_7 = *(arg2 + 0x10)
    
    if (r8_8.d s< r9_4)
        void* rdx_8 = arg1 + 0xfa + r8_8
        uint64_t i_1 = zx.q(r9_4 - r8_8.d)
        uint64_t i
        
        do
            result = zx.d(*rcx_7)
            rcx_7 = &rcx_7[1]
            *rdx_8 = result.b
            rdx_8 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    *(arg2 + 0x10) = rcx_7
    *(arg1 + 0x11a) = r9_4.b

return result
