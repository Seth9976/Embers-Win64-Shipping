// 函数: sub_141a2eb00
// 地址: 0x141a2eb00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
void* const i

if (arg3.d != 0xffffffff)
    i = ((sx.q(*(*(arg2 + 0x20) + sx.q(arg3.d) * 0xc)) + sx.q((arg3 u>> 0x20).d)) << 5)
        + *(arg2 + 0x30)
else if ((arg3 u>> 0x20).d != 0)
    i = nullptr
else if (arg3.d == 0xffffffff)
    i = arg2
else
    i = ((sx.q(*(*(arg2 + 0x20) + sx.q(arg3.d) * 0xc)) + sx.q((arg3 u>> 0x20).d)) << 5)
        + *(arg2 + 0x30)

arg1[1] = i
arg1[2].d = 0

while (i != 0)
    int64_t rcx_2 = sx.q(*(i + 0x1c))
    int64_t* rcx_6
    
    if (rcx_2.d == 0xffffffff)
        int64_t var_18 = 0
        rcx_6 = &var_18
        int32_t var_10_1 = 0
    else
        int64_t rdx = rcx_2 * 3
        int64_t rcx_3 = *(arg2 + 0x40)
        int32_t var_20_1 = *(rcx_3 + (rdx << 2) + 4)
        int64_t var_28
        rcx_6 = &var_28
        var_28 = sx.q(*(rcx_3 + (rdx << 2))) * 0x1c + *(arg2 + 0x50)
    
    if (_mm_bsrli_si128(*rcx_6, 8).d s> 0)
        break
    
    if (*(i + 0x10) != 0xffffffff || *(i + 0x14) == 0)
        int64_t rdx_3 = *(i + 0x10)
        
        if (rdx_3.d == 0xffffffff)
            i = arg2
        else
            i = ((sx.q(*(*(arg2 + 0x20) + sx.q(rdx_3.d) * 0xc)) + sx.q((rdx_3 u>> 0x20).d)) << 5)
                + *(arg2 + 0x30)
    else
        i = nullptr
    
    arg1[1] = i
    arg1[2].d = 0

return arg1
