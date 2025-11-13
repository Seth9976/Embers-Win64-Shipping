// 函数: sub_141ecfe50
// 地址: 0x141ecfe50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int32_t* rax_1 = (*(*arg2 + 0x90))(arg2, &var_b8)
int64_t r9_1 = *arg3
void var_9c
int128_t* rax_2 = (*(r9_1 + 0xa0))(arg3, &var_9c, arg4, r9_1)
int128_t zmm11 = rax_1[4]
int128_t zmm7 = rax_1[5]
zmm11.d = zmm11.d f+ zmm11.d
int128_t zmm10 = rax_1[6]
zmm7.d = zmm7.d f+ zmm7.d
int128_t zmm4 = *(rax_2 + 0xc)
zmm10.d = zmm10.d f+ zmm10.d
arg4 = *(rax_2 + 4)
int128_t zmm12 = *rax_2
int128_t zmm5 = *(rax_2 + 8)
int128_t zmm8
zmm8.d = zmm4.d f* zmm4.d
int128_t zmm9
zmm9.d = arg4.d f* zmm10.d
zmm8.d = zmm8.d f- 0.5f
int128_t zmm6
zmm6.d = zmm5.d f* zmm11.d
zmm9.d = zmm9.d f- zmm5.d f* zmm7.d
float zmm3 = zmm12.d f* zmm11.d + arg4.d f* zmm7.d + zmm5.d f* zmm10.d
zmm9.d = zmm9.d f* zmm4.d
float zmm1 = zmm12.d * zmm3
zmm9.d = zmm9.d f+ zmm8.d f* zmm11.d
zmm5.d = zmm5.d f* zmm3
float zmm0 = zmm12.d
zmm12.d = zmm12.d f* zmm7.d
zmm9.d = zmm9.d f+ zmm1
zmm1 = arg4.d
arg4.d = arg4.d f* zmm11.d
zmm6.d = zmm6.d f- zmm0 f* zmm10.d
zmm12.d = zmm12.d f- arg4.d
zmm0 = zmm8.d
zmm8.d = zmm8.d f* zmm10.d
zmm9.d = zmm9.d f+ rax_2[1].d
zmm6.d = zmm6.d f* zmm4.d
zmm12.d = zmm12.d f* zmm4.d
zmm12.d = zmm12.d f+ zmm8.d
zmm6.d = zmm6.d f+ zmm0 f* zmm7.d
zmm12.d = zmm12.d f+ zmm5.d
zmm6.d = zmm6.d f+ zmm1 * zmm3
zmm12.d = zmm12.d f+ *(rax_2 + 0x18)
zmm6.d = zmm6.d f+ *(rax_2 + 0x14)
float var_c8[0x4]
float* rax_3
int32_t zmm6_1
int32_t zmm9_1
rax_3, zmm6_1, zmm9_1 = sub_1417c7990(rax_2, &var_c8, rax_1)
*arg1 = *rax_3
arg1[1] = rax_3[1]
arg1[2] = rax_3[2]
arg1[3] = rax_3[3]
arg1[4] = zmm9_1
arg1[5] = zmm6_1
arg1[6] = zmm12.d
return arg1
