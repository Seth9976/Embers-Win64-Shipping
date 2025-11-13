// 函数: sub_140ad9660
// 地址: 0x140ad9660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_38
sub_140ad9b20(arg2, &var_38)
float var_48
int32_t zmm7_1 = sub_140ad9b20(arg3, &var_48)
float zmm1[0x4] = var_38
uint32_t zmm2[0x4] = var_48
uint32_t zmm0[0x4] = zmm1
zmm0[0] = zmm0[0] f- zmm2[0]

if (not(__andps_xmmxud_memxud(zmm0, data_142d3f770)[0] f<= 180f))
    if (zmm2[0] f<= zmm1[0])
        zmm2[0] = zmm2[0] f+ 360f
    else
        zmm1[0] = zmm1[0] + 360f

zmm2[0] = zmm2[0] f- zmm1[0]
zmm2[0] = zmm2[0] f* zmm7_1
zmm2[0] = zmm2[0] f+ zmm1[0]
float zmm0_1
float zmm6
float zmm7_2
zmm0_1, zmm6, zmm7_2 = sub_140a454f0(zmm2, 0x43b40000)

if (not(zmm0_1 >= 0f))
    zmm0_1 = zmm0_1 + zmm6

float var_58 = zmm0_1
int32_t var_4c = 0x3f800000
int32_t var_44
float var_34
int32_t var_54 = (var_44 f- var_34) f* zmm7_2 f+ var_34
float var_40
float var_30
float var_50 = (var_40 - var_30) * zmm7_2 + var_30
sub_140ad9100(&var_58, arg1)
arg1[3] = (*(arg3 + 0xc) f- *(arg2 + 0xc)) * zmm7_2 f+ *(arg2 + 0xc)
return arg1
