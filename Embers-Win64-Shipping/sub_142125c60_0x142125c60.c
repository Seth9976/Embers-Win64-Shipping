// 函数: sub_142125c60
// 地址: 0x142125c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 3)
    arg3 = data_143a30368:0xc.d

if ((*(arg1 + 0xd8) & 1) != 0)
    return *(arg1 + ((sx.q(arg2) + (sx.q(arg3) << 2)) << 3) + 0x398)

int64_t* rcx = *(arg1 + 0xd0)

if (rcx == 0)
    return 0

jump(*(*rcx + 0x2e8))
