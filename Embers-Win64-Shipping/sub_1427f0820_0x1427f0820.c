// 函数: sub_1427f0820
// 地址: 0x1427f0820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
void* rax_1 = (*(*arg1 + 0xf0))(arg1, &var_98)
int128_t zmm2 = *(arg2 + 4)
int128_t zmm4 = *(arg2 + 0xc)
int128_t zmm12 = *arg2
int128_t zmm5 = *(arg2 + 8)
int128_t zmm6 = *(rax_1 + 0x14)
int128_t zmm10 = *(rax_1 + 0x10)
zmm6.d = zmm6.d f+ zmm6.d
int128_t zmm9 = *(rax_1 + 0x18)
zmm10.d = zmm10.d f+ zmm10.d
zmm9.d = zmm9.d f+ zmm9.d
int128_t zmm7
zmm7.d = zmm4.d f* zmm4.d
zmm7.d = zmm7.d f- 0.5f
int128_t zmm1
zmm1.d = zmm5.d f* zmm9.d
int128_t zmm11
zmm11.d = zmm2.d f* zmm9.d
int128_t zmm8
zmm8.d = zmm5.d f* zmm10.d
int128_t zmm3
zmm3.d = zmm12.d f* zmm10.d
zmm3.d = zmm3.d f+ zmm2.d f* zmm6.d
zmm11.d = zmm11.d f- zmm5.d f* zmm6.d
zmm3.d = zmm3.d f+ zmm1.d
zmm11.d = zmm11.d f* zmm4.d
zmm1.d = zmm12.d f* zmm3.d
zmm11.d = zmm11.d f+ zmm7.d f* zmm10.d
zmm5.d = zmm5.d f* zmm3.d
float zmm0 = zmm12.d
zmm12.d = zmm12.d f* zmm6.d
zmm11.d = zmm11.d f+ zmm1.d
zmm1 = zmm2
zmm2.d = zmm2.d f* zmm10.d
zmm8.d = zmm8.d f- zmm0 f* zmm9.d
zmm1.d = zmm1.d f* zmm3.d
zmm12.d = zmm12.d f- zmm2.d
zmm0 = zmm7.d
zmm7.d = zmm7.d f* zmm9.d
zmm11.d = zmm11.d f+ arg2[1].d
zmm2 = arg5
zmm8.d = zmm8.d f* zmm4.d
zmm12.d = zmm12.d f* zmm4.d
zmm8.d = zmm8.d f+ zmm0 f* zmm6.d
zmm0 = zmm2.d f* *(arg4 + 4)
zmm12.d = zmm12.d f+ zmm7.d
zmm8.d = zmm8.d f+ zmm1.d
zmm1.d = zmm2.d f* *arg4
zmm2.d = zmm2.d f* *(arg4 + 8)
zmm12.d = zmm12.d f+ zmm5.d
zmm8.d = zmm8.d f+ *(arg2 + 0x14)
zmm12.d = zmm12.d f+ *(arg2 + 0x18)
*arg7 = zmm1.d
arg7[1] = zmm0
arg7[2] = zmm2.d
zmm6.d = (*arg3).d f- zmm11.d
zmm3 = *(arg4 + 8)
zmm1 = *arg4
zmm4.d = (*(arg3 + 4)).d f- zmm8.d
zmm8 = *(arg4 + 4)
zmm2.d = (*(arg3 + 8)).d f- zmm12.d
zmm0 = zmm8.d
zmm8.d = zmm8.d f* zmm6.d
zmm7.d = zmm3.d f* zmm4.d
zmm5.d = zmm1.d f* zmm2.d
zmm7.d = zmm7.d f- zmm0 f* zmm2.d
zmm3.d = zmm3.d f* zmm6.d
zmm1.d = zmm1.d f* zmm4.d
zmm5.d = zmm5.d f- zmm3.d
zmm7.d = zmm7.d f* arg6
zmm8.d = zmm8.d f- zmm1.d
zmm5.d = zmm5.d f* arg6
*arg8 = zmm7.d
zmm8.d = zmm8.d f* arg6
arg8[1] = zmm5.d
arg8[2] = zmm8.d
return arg6
