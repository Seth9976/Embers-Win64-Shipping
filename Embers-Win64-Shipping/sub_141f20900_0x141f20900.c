// 函数: sub_141f20900
// 地址: 0x141f20900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm0
int128_t zmm6
zmm0, zmm6 = sub_141f435c0(arg1)
char result = *(arg1 + 0x8a)

if ((result & 8) == 0)
    result &= 0xfb
    *(arg1 + 0x8a) = result
else
    result = ((*(*arg1 + 0x3e0))(arg1) << 2 ^ *(arg1 + 0x8a)) & 4
    *(arg1 + 0x8a) ^= result
    
    if ((*(arg1 + 0x8a) & 4) != 0)
        result, zmm0 = sub_141dee770(arg1)

int64_t* rdi = arg1[0x14]

if (rdi != 0)
    int128_t var_18_1 = zmm6
    zmm6 = *(arg1 + 0x26c)
    result = (*(*rdi + 0x5d8))(rdi)
    
    if (not(zmm6.d f<= zmm0))
        *(rdi + 0x114) = zmm6.d

return result
