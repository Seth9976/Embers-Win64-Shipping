// 函数: sub_142a8bb50
// 地址: 0x142a8bb50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 s< 0xffffffff)
    return 0

int32_t r8 = 0

if (arg2 s< 0)
    for (int16_t i = *arg1; i != 0; i = *arg1)
        arg1 = &arg1[1]
        r8 += 1
        
        if ((zx.d(i) & 0xfffffc00) == 0xd800 && (zx.d(*arg1) & 0xfffffc00) == 0xdc00)
            arg1 = &arg1[1]
else if (arg2 s> 0)
    do
        r8 += 1
        int64_t rax_5
        
        if ((zx.d(*arg1) & 0xfffffc00) != 0xd800 || arg2 s< 2
                || (zx.d(arg1[1]) & 0xfffffc00) != 0xdc00)
            arg2 -= 1
            rax_5 = 2
        else
            arg2 -= 2
            rax_5 = 4
        
        arg1 += rax_5
    while (arg2 s> 0)

return zx.q(r8)
