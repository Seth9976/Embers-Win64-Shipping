// 函数: sub_1427f45d0
// 地址: 0x1427f45d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm1 = *(arg2 + 8)
int128_t zmm0 = *(arg2 + 4)
float zmm2 = *(arg2 + 0xc)
int128_t zmm3
zmm3.d = zmm1.d f+ zmm1.d
float zmm5 = zmm3.d
zmm3.d = zmm3.d f* zmm2
zmm5 = zmm5 f* zmm1.d
int128_t zmm11 = *arg2
int128_t zmm10
zmm10.d = zmm11.d f+ zmm11.d
int128_t zmm13
zmm13.d = zmm0.d f+ zmm0.d
zmm11.d = zmm11.d f* zmm10.d
int128_t zmm7
zmm7.d = zmm10.d f* zmm1.d
int128_t zmm6
zmm6.d = zmm10.d f* zmm0.d
int128_t zmm9
zmm9.d = zmm13.d f* zmm1.d
int128_t zmm12
zmm12.d = zmm13.d f* zmm0.d
zmm13.d = zmm13.d f* zmm2
zmm1.d = zmm3.d f+ zmm6.d
zmm6.d = zmm6.d f- zmm3.d
int128_t zmm8
zmm8.d = zmm10.d f* zmm2
zmm0.d = zmm7.d f- zmm13.d
int32_t var_b4 = zmm1.d
int128_t zmm4
zmm4.d = 1f f- zmm11.d
int32_t var_ac = zmm6.d
int32_t var_b0 = zmm0.d
zmm13.d = zmm13.d f+ zmm7.d
zmm0 = zmm9
zmm9.d = zmm9.d f- zmm8.d
zmm0.d = zmm0.d f+ zmm8.d
zmm1 = zmm4
zmm4.d = zmm4.d f- zmm12.d
zmm1.d = zmm1.d f- zmm5
int32_t var_a0 = zmm13.d
int32_t var_9c = zmm9.d
int32_t var_a4 = zmm0.d
int32_t var_98 = zmm4.d
float var_b8 = 1f f- zmm12.d - zmm5
int32_t var_a8 = zmm1.d
sub_1427f3f10(arg1, &var_b8)
return sub_1427f0b10(arg1, &arg2[1]) __tailcall
