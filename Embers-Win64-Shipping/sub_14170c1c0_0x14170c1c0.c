// 函数: sub_14170c1c0
// 地址: 0x14170c1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* r9 = arg1[1]
uint128_t zmm1 = zx.o(*arg3)
uint128_t zmm2 = *(r9 + 0xc)
uint128_t zmm10 = *(r9 + 8)
int128_t zmm11 = *(r9 + 4)
int32_t rax = arg3[1].d
uint128_t zmm4 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
int128_t zmm14 = *r9
uint128_t zmm8 = rax
void* rax_1 = *arg1
int128_t zmm6
zmm6.d = zmm11.d f* zmm8.d
uint128_t zmm9 = zmm1.d
int128_t zmm12 = *(rax_1 + 0x2c)
zmm6.d = zmm6.d f- zmm10.d f* zmm4.d
int128_t zmm13 = *(rax_1 + 0x30)
void* rcx = *(rax_1 + 0x10)
zmm6.d = zmm6.d f+ zmm6.d
uint128_t zmm7
zmm7.d = zmm10.d f* zmm9.d
uint128_t zmm15
zmm15.d = zmm10.d f* zmm6.d
zmm7.d = zmm7.d f- zmm14.d f* zmm8.d
uint128_t zmm3
zmm3.d = zmm2.d f* zmm6.d
zmm7.d = zmm7.d f+ zmm7.d
zmm3.d = zmm3.d f+ zmm9.d
float zmm5 = zmm14.d f* zmm4.d - zmm11.d f* zmm9.d
float zmm0 = zmm14.d
zmm14.d = zmm14.d f* zmm7.d
zmm5 = zmm5 + zmm5
zmm10.d = zmm10.d f* zmm7.d
zmm1.d = zmm2.d f* zmm7.d
zmm2.d = zmm2.d f* zmm5
zmm4.d = zmm4.d f+ zmm1.d
zmm15.d = zmm15.d f- zmm0 * zmm5
zmm0 = zmm11.d
zmm11.d = zmm11.d f* zmm5
zmm8.d = zmm8.d f+ zmm2.d
zmm2 = *(rax_1 + 0x28)
zmm11.d = zmm11.d f- zmm10.d
zmm15.d = zmm15.d f+ zmm4.d
zmm14.d = zmm14.d f- zmm0 f* zmm6.d
zmm11.d = zmm11.d f+ zmm3.d
zmm15.d = zmm15.d f* zmm12.d
zmm14.d = zmm14.d f+ zmm8.d
zmm11.d = zmm11.d f* zmm2.d
zmm14.d = zmm14.d f* zmm13.d

if (zmm11.d f>= 0f)
    zmm10 = *(rcx + 0x1c)
else
    zmm10 = *(rcx + 0x10)

if (zmm15.d f>= 0f)
    zmm1 = *(rcx + 0x20)
else
    zmm1 = *(rcx + 0x14)

if (zmm14.d f>= 0f)
    zmm0 = *(rcx + 0x24)
else
    zmm0 = *(rcx + 0x18)

int128_t* rax_2 = arg1[2]
zmm8 = *(rax_2 + 4)
zmm6 = *(rax_2 + 8)
zmm9 = *rax_2
zmm3 = *(rax_2 + 0xc)
zmm13.d = zmm13.d f* zmm0
zmm12.d = zmm12.d f* zmm1.d
zmm10.d = zmm10.d f* zmm2.d
zmm7.d = zmm8.d f* zmm13.d
zmm2 = zmm8
zmm7.d = zmm7.d f- zmm6.d f* zmm12.d
zmm4.d = zmm9.d f* zmm12.d
zmm7.d = zmm7.d f+ zmm7.d
zmm5 = zmm6.d f* zmm10.d - zmm9.d f* zmm13.d
zmm1.d = zmm3.d f* zmm7.d
zmm4.d = zmm4.d f- zmm8.d f* zmm10.d
zmm8.d = zmm8.d f* zmm7.d
zmm0 = zmm6.d
zmm5 = zmm5 + zmm5
zmm1.d = zmm1.d f+ zmm10.d
zmm6.d = zmm6.d f* zmm7.d
zmm4.d = zmm4.d f+ zmm4.d
zmm2.d = zmm2.d f* zmm4.d
zmm2.d = zmm2.d f- zmm0 * zmm5
zmm0 = zmm9.d
zmm9.d = zmm9.d f* zmm5
zmm2.d = zmm2.d f+ zmm1.d
zmm9.d = zmm9.d f- zmm8.d
zmm1.d = zmm3.d f* zmm5
zmm6.d = zmm6.d f- zmm0 f* zmm4.d
zmm3.d = zmm3.d f* zmm4.d
zmm1.d = zmm1.d f+ zmm12.d
*arg2 = zmm2.d
zmm3.d = zmm3.d f+ zmm13.d
zmm6.d = zmm6.d f+ zmm1.d
zmm9.d = zmm9.d f+ zmm3.d
arg2[1] = zmm6.d
arg2[2] = zmm9.d
return arg2
