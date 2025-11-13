// 函数: sub_141ed0030
// 地址: 0x141ed0030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm2 = *(arg1 + 0x14)
int128_t zmm5 = arg1[1].d
int128_t zmm3 = arg1[2].d
int128_t zmm4 = *(arg1 + 0x1c)
int128_t zmm0
zmm0.d = zmm2.d f* zmm4.d
int128_t zmm9 = *(arg1 + 0x18)
int128_t zmm6
zmm6.d = zmm5.d f* zmm3.d
float zmm1 = zmm9.d f* zmm2.d
zmm6.d = zmm6.d f- zmm0.d
int128_t zmm10 = *(arg1 + 0xc)
int128_t zmm11 = *arg1
zmm0.d = zmm10.d f* zmm3.d
zmm2.d = zmm10.d f* zmm4.d
zmm1 = zmm1 f- zmm0.d
int128_t zmm12 = *(arg1 + 8)
int128_t zmm13 = *(arg1 + 4)
zmm0.d = zmm9.d f* zmm5.d
zmm6.d = zmm6.d f* zmm11.d
zmm2.d = zmm2.d f- zmm0.d
zmm6.d = zmm6.d f+ zmm1 f* zmm13.d
zmm2.d = zmm2.d f* zmm12.d
zmm6.d = zmm6.d f+ zmm2.d

if (zmm6.d f== 0f)
    *arg2 = 5.2635442471208903e-315
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0x3f800000
    *(arg2 + 0x18) = 0
    arg2[8] = 0x3f800000
else
    zmm2.d = zmm13.d f* zmm3.d
    int128_t zmm8
    zmm8.d = 1f f/ zmm6.d
    zmm6 = zmm4
    zmm4 = *(arg1 + 0x14)
    zmm0.d = zmm4.d f* zmm6.d
    zmm1 = zmm5.d f* zmm3.d f- zmm0.d
    zmm0.d = zmm12.d f* zmm6.d
    zmm2.d = zmm2.d f- zmm0.d
    zmm0.d = zmm12.d f* zmm5.d
    *arg2 = zmm1 f* zmm8.d
    zmm2.d = zmm2.d f* zmm8.d
    arg2[1] = (zmm2 ^ 0x80000000).d
    zmm1 = zmm13.d f* zmm4.d f- zmm0.d
    zmm2.d = zmm3.d f* zmm10.d
    zmm0.d = zmm4.d f* zmm9.d
    zmm2.d = zmm2.d f- zmm0.d
    zmm0.d = zmm12.d f* zmm9.d
    arg2[2] = zmm1 f* zmm8.d
    zmm2.d = zmm2.d f* zmm8.d
    zmm1 = zmm11.d f* zmm3.d f- zmm0.d
    zmm12.d = zmm12.d f* zmm10.d
    arg2[3] = (zmm2 ^ 0x80000000).d
    zmm0.d = zmm11.d f* zmm4.d
    zmm0.d = zmm0.d f- zmm12.d
    zmm2.d = zmm11.d f* zmm6.d
    arg2[4] = zmm1 f* zmm8.d
    zmm11.d = zmm11.d f* zmm5.d
    zmm0.d = zmm0.d f* zmm8.d
    arg2[5] = (zmm0 ^ 0x80000000).d
    zmm0.d = zmm5.d f* zmm9.d
    zmm1 = zmm6.d f* zmm10.d f- zmm0.d
    zmm0.d = zmm13.d f* zmm9.d
    zmm13.d = zmm13.d f* zmm10.d
    zmm2.d = zmm2.d f- zmm0.d
    zmm11.d = zmm11.d f- zmm13.d
    arg2[6] = zmm1 f* zmm8.d
    zmm2.d = zmm2.d f* zmm8.d
    zmm11.d = zmm11.d f* zmm8.d
    arg2[7] = (zmm2 ^ 0x80000000).d
    arg2[8] = zmm11.d

return arg2
