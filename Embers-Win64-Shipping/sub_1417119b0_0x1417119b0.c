// 函数: sub_1417119b0
// 地址: 0x1417119b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* r9 = arg1[1]
uint128_t zmm1 = zx.o(*arg3)
void* rcx = *arg1
uint128_t zmm6 = *(r9 + 0xc)
uint128_t zmm9 = *(r9 + 8)
uint128_t zmm11 = *(r9 + 4)
int32_t rax = arg3[1].d
uint128_t zmm3 = zmm11
uint128_t zmm13 = *r9
float zmm4 = zmm1.q.d
uint128_t zmm7 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
uint128_t zmm0
zmm0.d = zmm9.d f* zmm7.d
int128_t zmm12 = rax
void* rax_1 = *(rcx + 0x10)
uint128_t zmm10
zmm10.d = zmm11.d f* zmm12.d
uint128_t zmm8
zmm8.d = zmm9.d f* zmm4
int128_t zmm15 = *(rax_1 + 0x20)
zmm10.d = zmm10.d f- zmm0.d
int128_t zmm14 = *(rax_1 + 0x1c)
zmm0.d = zmm13.d f* zmm12.d
zmm8.d = zmm8.d f- zmm0.d
zmm0.d = zmm11.d f* zmm4
zmm10.d = zmm10.d f+ zmm10.d
float zmm5 = zmm13.d f* zmm7.d f- zmm0.d
zmm0 = zmm9
zmm9.d = zmm9.d f* zmm10.d
zmm8.d = zmm8.d f+ zmm8.d
zmm1.d = zmm6.d f* zmm10.d
zmm5 = zmm5 + zmm5
zmm11.d = zmm11.d f* zmm10.d
zmm0.d = zmm0.d f* zmm8.d
zmm4 = zmm4 f+ zmm1.d
zmm1 = *(rax_1 + 0x24)
zmm3.d = zmm3.d f* zmm5
float zmm2 = zmm6.d f* zmm8.d
zmm3.d = zmm3.d f- zmm0.d
zmm6.d = zmm6.d f* zmm5
zmm0 = zmm13
zmm13.d = zmm13.d f* zmm8.d
zmm0.d = zmm0.d f* zmm5
zmm3.d = zmm3.d f+ zmm4
zmm13.d = zmm13.d f- zmm11.d
zmm11 = *(rcx + 0x30)
zmm9.d = zmm9.d f- zmm0.d
zmm12.d = zmm12.d f+ zmm6.d
zmm3.d = zmm3.d f* *(rcx + 0x28)
zmm9.d = zmm9.d f+ zmm2 f+ zmm7.d
zmm2 = *(rcx + 0x2c)
zmm13.d = zmm13.d f+ zmm12.d
zmm3.d = zmm3.d f* zmm14.d
zmm9.d = zmm9.d f* zmm2
zmm13.d = zmm13.d f* zmm11.d
zmm9.d = zmm9.d f* zmm15.d
zmm13.d = zmm13.d f* zmm1.d
zmm3.d = zmm3.d f+ zmm9.d
zmm3.d = zmm3.d f+ zmm13.d
uint64_t var_b8
int32_t var_b0_1

if (zmm3.d f< 0f)
    var_b8 = *(rax_1 + 0x10)
    var_b0_1 = *(rax_1 + 0x18)
else
    zmm0 = *(rax_1 + 0x28)
    zmm14.d = zmm14.d f* zmm0.d
    zmm15.d = zmm15.d f* zmm0.d
    zmm14.d = zmm14.d f+ *(rax_1 + 0x10)
    zmm1.d = zmm1.d f* zmm0.d
    zmm15.d = zmm15.d f+ *(rax_1 + 0x14)
    zmm1.d = zmm1.d f+ *(rax_1 + 0x18)
    var_b8.d = zmm14.d
    var_b8:4.d = zmm15.d
    var_b0_1 = zmm1.d

zmm10 = *(rcx + 0x28)
zmm1 = zx.o(var_b8)
zmm2 = zmm2 f* _mm_shuffle_ps(zmm1, zmm1, 0x55).d
uint128_t* rax_4 = arg1[2]
zmm11.d = zmm11.d f* var_b0_1
zmm10.d = zmm10.d f* zmm1.d
zmm8 = *(rax_4 + 4)
zmm6 = *(rax_4 + 8)
zmm9 = *rax_4
zmm3 = *(rax_4 + 0xc)
zmm0.d = zmm6.d f* zmm2
zmm4 = zmm9.d * zmm2
float arg_8 = zmm2
zmm2 = zmm8.d
zmm7.d = zmm8.d f* zmm11.d
zmm7.d = zmm7.d f- zmm0.d
zmm0.d = zmm9.d f* zmm11.d
zmm5 = zmm6.d f* zmm10.d f- zmm0.d
zmm0.d = zmm8.d f* zmm10.d
zmm7.d = zmm7.d f+ zmm7.d
zmm4 = zmm4 f- zmm0.d
zmm0 = zmm6
zmm1.d = zmm3.d f* zmm7.d
zmm5 = zmm5 + zmm5
zmm6.d = zmm6.d f* zmm7.d
zmm1.d = zmm1.d f+ zmm10.d
zmm8.d = zmm8.d f* zmm7.d
zmm4 = zmm4 + zmm4
zmm0.d = zmm0.d f* zmm5
zmm2 = zmm2 * zmm4 f- zmm0.d
zmm0 = zmm9
zmm9.d = zmm9.d f* zmm5
zmm0.d = zmm0.d f* zmm4
zmm2 = zmm2 f+ zmm1.d
zmm9.d = zmm9.d f- zmm8.d
zmm1.d = zmm3.d f* zmm5
zmm6.d = zmm6.d f- zmm0.d
zmm3.d = zmm3.d f* zmm4
zmm1.d = zmm1.d f+ arg_8
*arg2 = zmm2
zmm3.d = zmm3.d f+ zmm11.d
zmm6.d = zmm6.d f+ zmm1.d
zmm9.d = zmm9.d f+ zmm3.d
arg2[1] = zmm6.d
arg2[2] = zmm9.d
return arg2
