// 函数: sub_1421f87f0
// 地址: 0x1421f87f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce3290(arg1)
float zmm0 = arg1[0xe].d
float zmm2 = 180f

if (zmm0 <= 180f)
    zmm2 = zmm0
    
    if (not(zmm0 >= 0f))
        arg1[0xe].d = 0
        zmm2 = (zx.o(0)).d
else
    arg1[0xe].d = 0x43340000

float zmm1 = 1f - zmm2 * 0.00555555569f
*(arg1 + 0x74) = zmm1 + zmm1 - 1f
int32_t result = sub_140cdd6a0(arg1)

if (result s< 0x1ab)
    arg1[8].d &= 0xfffffffd

return result
