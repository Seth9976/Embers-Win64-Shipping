// 函数: sub_142af46b0
// 地址: 0x142af46b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s>= 0x1000)
    if (arg2 s< 0x1019)
        jump((&data_14365ce40)[sx.q(arg2 - 0x1000) * 4])
    
    if (arg2 == 0x2000)
        return zx.q(1 << sub_142a53dd0(arg1))
else if (arg2 u<= 0x40)
    return zx.q(sx.d((&data_14365c9f8)[sx.q(arg2) * 2]((sx.q(arg2) << 4) + &data_14365c9f0, 
        zx.q(arg1), zx.q(arg2))))

return 0
