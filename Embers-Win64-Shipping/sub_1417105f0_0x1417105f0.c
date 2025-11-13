// 函数: sub_1417105f0
// 地址: 0x1417105f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* r9 = arg1[1]
uint128_t zmm1 = zx.o(*arg3)
uint128_t zmm7 = *(r9 + 8)
uint128_t zmm10 = *r9
uint128_t zmm11 = *(r9 + 4)
float zmm5 = zmm1.q.d
uint128_t zmm9
zmm9.d = zmm7.d f* zmm5
int128_t zmm13 = arg3[1].d
void* rax_1 = *arg1
uint128_t zmm12
zmm12.d = zmm11.d f* zmm13.d
uint128_t zmm8 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
int128_t zmm15 = *(rax_1 + 0x20)
int128_t zmm14 = *(rax_1 + 0x1c)
uint64_t zmm0
zmm0.d = zmm7.q.d f* zmm8.d
uint128_t zmm6
zmm6.d = zmm10.d f* zmm8.d
zmm12.d = zmm12.d f- zmm0.d
zmm0.d = zmm10.q.d f* zmm13.d
zmm9.d = zmm9.d f- zmm0.d
zmm0.d = zmm11.q.d f* zmm5
zmm12.d = zmm12.d f+ zmm12.d
zmm6.d = zmm6.d f- zmm0.d
zmm0 = *(r9 + 0xc)
zmm9.d = zmm9.d f+ zmm9.d
zmm1.d = zmm12.d f* zmm0.d
zmm6.d = zmm6.d f+ zmm6.d
zmm1.d = zmm1.d f+ zmm5
uint128_t zmm4
zmm4.d = zmm6.d f* zmm0.d
float zmm2 = zmm9.d f* zmm0.d f+ zmm8.d
zmm0.d = zmm9.q.d f* zmm7.d
zmm13.d = zmm13.d f+ zmm4.d
zmm9.d = zmm9.d f* zmm10.d
float zmm3 = zmm6.d f* zmm11.d f- zmm0.d
zmm6.d = zmm6.d f* zmm10.d
zmm0 = zmm12.q
zmm12.d = zmm12.d f* zmm11.d
zmm0.d = zmm0.d f* zmm7.d
zmm3 = zmm3 f+ zmm1.d
zmm1 = *(rax_1 + 0x24)
zmm9.d = zmm9.d f- zmm12.d
zmm0.d = zmm0.d f- zmm6.d
zmm0.d = zmm0.d f+ zmm2
zmm9.d = zmm9.d f+ zmm13.d
zmm0.d = zmm0.d f* zmm15.d
zmm9.d = zmm9.d f* zmm1.d
uint64_t var_b8
int32_t var_b0_1

if (zmm3 f* zmm14.d f+ zmm0.d f+ zmm9.d < 0f)
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

zmm1 = zx.o(var_b8)
float var_b8_1 = zmm1.d
zmm7 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
uint128_t* rax_4 = arg1[2]
zmm11 = var_b0_1
zmm10 = *(rax_4 + 4)
zmm8 = *(rax_4 + 8)
zmm12 = *rax_4
zmm4 = *(rax_4 + 0xc)
zmm0.d = zmm8.q.d f* zmm7.d
zmm9.d = zmm10.d f* zmm11.d
zmm6.d = zmm8.d f* var_b8_1
zmm2 = zmm10.d
zmm9.d = zmm9.d f- zmm0.d
zmm0.d = zmm12.q.d f* zmm11.d
zmm9.d = zmm9.d f+ zmm9.d
zmm6.d = zmm6.d f- zmm0.d
zmm0.d = zmm10.q.d f* var_b8_1
zmm1.d = zmm4.d f* zmm9.d
zmm5 = zmm12.d f* zmm7.d f- zmm0.d
zmm10.d = zmm10.d f* zmm9.d
zmm0 = zmm8.q
zmm6.d = zmm6.d f+ zmm6.d
zmm1.d = zmm1.d f+ var_b8_1
zmm8.d = zmm8.d f* zmm9.d
zmm5 = zmm5 + zmm5
zmm0.d = zmm0.d f* zmm6.d
zmm2 = zmm2 * zmm5 f- zmm0.d
zmm0 = zmm12.q
zmm12.d = zmm12.d f* zmm6.d
zmm0.d = zmm0.d f* zmm5
zmm2 = zmm2 f+ zmm1.d
zmm12.d = zmm12.d f- zmm10.d
zmm1.d = zmm4.d f* zmm6.d
zmm8.d = zmm8.d f- zmm0.d
zmm1.d = zmm1.d f+ zmm7.d
zmm4.d = zmm4.d f* zmm5
*arg2 = zmm2
zmm4.d = zmm4.d f+ zmm11.d
zmm8.d = zmm8.d f+ zmm1.d
zmm12.d = zmm12.d f+ zmm4.d
arg2[1] = zmm8.d
arg2[2] = zmm12.d
return arg2
