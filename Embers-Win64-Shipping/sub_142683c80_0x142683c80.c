// 函数: sub_142683c80
// 地址: 0x142683c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1 = *(arg1 + 0x140) f/ *(arg1 + 0xdc)
float zmm0 = -0.5f - (zmm1 + zmm1)
int32_t rbp_2 = neg.d(int.d(zmm0) s>> 1)
int128_t zmm0_1 = sub_142631fe0(arg2, zx.q(*(arg1 + 0x100)), *arg3, zmm0)
int512_t zmm0_2 = sub_142631b70(arg2, *(arg1 + 0xfc), *(arg1 + 0x100), *arg3, zmm0_1)
char result = (*(arg1 + 0x12c)).b
uint64_t rdx_2

if ((result & 8) != 0)
    if ((result & 0x20) == 0)
        return result
    
    if ((result & 0x10) != 0 && (*(arg1 + 0x14) & 8) != 0)
        return sub_142632260(arg2, rbp_2, *arg3, zmm0_2)
    
    rdx_2 = zx.q(rbp_2)
else
    rdx_2 = zx.q(*(arg1 + 0xfc))

return sub_142632150(arg2, rdx_2, *arg3)
