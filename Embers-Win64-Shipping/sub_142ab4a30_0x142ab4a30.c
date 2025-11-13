// 函数: sub_142ab4a30
// 地址: 0x142ab4a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t _Px_1 = arg2

if (*(arg1 + 0x40) != 0)
    sub_142a7dcd0(*(arg1 + 0x30))
    *(arg1 + 0x30) = 0
    *(arg1 + 0x40) = 0

*(arg1 + 0x30) = 0
*(arg1 + 0xc) = 0
*(arg1 + 0x14) = 0
*(arg1 + 0x18) = 0
*(arg1 + 0x20) = 0

if (_dsign(_Px_1.q) != 0)
    *(arg1 + 0x14) |= data_143ccaf50
    _Px_1 ^= data_142d8e3c0

double _Px = _Px_1.q

if (_dtest(&_Px) == 2)
    *(arg1 + 0x14) |= data_143ccaf52
    return arg1

_Px = _Px_1.q

if (_dtest(&_Px) s> 0)
    *(arg1 + 0x14) |= data_143ccaf51
    return arg1

_Px_1.q f- 0.0

if (is_unordered.q(_Px_1.q, 0.0) || not(_Px_1.q f== 0.0))
    sub_142ab2dd0(arg1, _Px_1.q)
    sub_142ab3280(arg1)

return arg1
