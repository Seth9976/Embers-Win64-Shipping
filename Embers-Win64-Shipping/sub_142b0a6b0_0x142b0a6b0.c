// 函数: sub_142b0a6b0
// 地址: 0x142b0a6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = 0

for (void* const i = &data_143668da0; i s< &data_143668dbc; i += 4)
    int32_t r10_1 = *i
    
    if (arg1 - r10_1 u<= 0x7f)
        *arg2 = r10_1
        return zx.q(r9 + 0xf9)
    
    r9 += 1

if (arg1 u>= 0x80)
    if (arg1 u< 0x3400 || arg1 - 0x10000 u< 0x4000 || arg1 - 0x1d000 u<= 0x2fff)
        *arg2 = arg1 & 0x7fffff80
        return zx.q(arg1 u>> 7)
    
    if (arg1 u>= 0xe000 && arg1 != 0xfeff && arg1 u< 0xfff0)
        *arg2 = arg1 & 0x7fffff80
        return zx.q((arg1 - 0xac00) u>> 7)

return 0xffffffff
