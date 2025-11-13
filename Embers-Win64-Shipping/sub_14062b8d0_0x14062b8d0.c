// 函数: sub_14062b8d0
// 地址: 0x14062b8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2 = arg1[0xf]
float zmm3 = arg1[0xe]
float zmm4 = arg1[7]
float zmm1 = arg1[3]
float zmm5 = arg1[0xb]
int128_t zmm6 = arg1[6]
int128_t zmm7 = arg1[0xa]
int128_t zmm9 = arg1[0xd]
int128_t zmm10 = arg1[1]
int128_t zmm11 = arg1[2]
int128_t zmm8
zmm8.d = zmm11.d f* zmm2
int128_t zmm12
zmm12.d = zmm7.d f* zmm2
int128_t zmm14 = arg1[9]
int128_t zmm13
zmm13.d = zmm6.d f* zmm2
zmm12.d = zmm12.d f- zmm5 * zmm3
int128_t zmm15
zmm15.d = zmm6.d f* zmm5
zmm2 = zmm12.d
zmm12.d = zmm12.d f* zmm10.d
zmm13.d = zmm13.d f- zmm4 * zmm3
zmm15.d = zmm15.d f- zmm4 f* zmm7.d
float zmm0 = zmm1 * zmm3
zmm3 = zmm11.d
zmm11.d = zmm11.d f* zmm4
zmm4 = arg1[5]
zmm8.d = zmm8.d f- zmm0
zmm0 = zmm1 f* zmm7.d
zmm11.d = zmm11.d f- zmm1 f* zmm6.d
zmm1 = zmm15.d f* zmm9.d
zmm3 = zmm3 * zmm5 - zmm0
zmm15.d = zmm15.d f* zmm10.d
zmm0 = zmm13.d
zmm13.d = zmm13.d f* zmm10.d
zmm2 = zmm2 * zmm4 - zmm0 f* zmm14.d
zmm0 = zmm8.d f* zmm14.d
zmm8.d = zmm8.d f* zmm4
zmm12.d = zmm12.d f- zmm0
zmm13.d = zmm13.d f- zmm8.d
zmm0 = zmm11.d f* zmm9.d
zmm12.d = zmm12.d f+ zmm3 f* zmm9.d
zmm15.d = zmm15.d f- zmm3 * zmm4
zmm11.d = zmm11.d f* zmm14.d
zmm13.d = zmm13.d f+ zmm0
zmm12.d = zmm12.d f* arg1[4]
zmm15.d = zmm15.d f+ zmm11.d
zmm13.d = zmm13.d f* arg1[8]
zmm15.d = zmm15.d f* arg1[0xc]
return (zmm2 + zmm1) * *arg1 f- zmm12.d f+ zmm13.d f- zmm15.d
