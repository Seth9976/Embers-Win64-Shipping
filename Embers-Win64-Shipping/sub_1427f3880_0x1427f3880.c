// 函数: sub_1427f3880
// 地址: 0x1427f3880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x128))(arg2, arg1)
void var_38
int128_t* rax_2 = (*(*arg2 + 0x138))(arg2, &var_38)
int128_t zmm3 = arg3[2]
float zmm4 = arg3[1]
float zmm2 = *arg3
int128_t zmm7
zmm7.d = zmm3.d f* *(rax_2 + 4)
int128_t zmm8 = *rax_2
float zmm5 = zmm2 f* *(rax_2 + 8)
zmm7.d = zmm7.d f- zmm4 f* *(rax_2 + 8)
float zmm0 = zmm8.d
zmm8.d = zmm8.d f* zmm4
zmm7.d = zmm7.d f+ *arg1
zmm8.d = zmm8.d f- zmm2 f* *(rax_2 + 4)
*arg1 = zmm7.d
zmm8.d = zmm8.d f+ arg1[2]
zmm5 = zmm5 - zmm0 f* zmm3.d f+ arg1[1]
arg1[2] = zmm8.d
arg1[1] = zmm5
return arg1
