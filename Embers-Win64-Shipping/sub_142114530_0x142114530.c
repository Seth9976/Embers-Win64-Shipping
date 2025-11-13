// 函数: sub_142114530
// 地址: 0x142114530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x1d8))(arg2, &data_1439a9478)
(*(*arg2 + 0x1d8))(arg2, &data_1439a94d8)
int512_t zmm1 = sub_140ce8e10(arg1, arg2)
uint32_t result = arg2[8].d

if (result s>= 0x104)
    sub_1421166e0(nullptr, arg2, arg1 + 0x240, nullptr, zmm1)
    result = arg2[8].d

if (result s< 0x1ae)
    if (*(arg1 + 0x151) == 1)
        result = zx.d(*(arg1 + 0x20a))
    
    if (*(arg1 + 0x151) != 1 || (result.b & 0x20) != 0)
        *(arg1 + 0x20a) &= 0xef
    else
        result.b |= 0x10
        *(arg1 + 0x20a) = result.b

if ((arg2[5].b & 1) != 0)
    result = sub_140b4e7c0(arg2, &data_1439a9478)
    
    if (result s< 4 && *(arg1 + 0x150) == 1)
        *(arg1 + 0x151) = 2

return result
