// 函数: sub_140e14fe0
// 地址: 0x140e14fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = data_143e20d08
int64_t* rcx = *(arg1 + 0x910)
uint128_t zmm6

if (rcx == 0)
    zmm6 = 0x3f800000
else
    (*(*rcx + 0xf8))(rcx)
    zmm6 = arg3

(*(*rsi + 0x48))(rsi)
arg3.d = arg3.d f* zmm6.d
*arg2 = arg3.d
*(arg2 + 4) = *(arg1 + 0x790)
return arg2
