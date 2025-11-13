// 函数: sub_1408ad790
// 地址: 0x1408ad790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg1
int64_t* zmm0 = *arg5
int32_t arg_8 = arg1
arg5 = zmm0
int128_t result_1
int128_t zmm7
int128_t zmm8
int512_t zmm10
result_1, zmm7, zmm8, zmm10 = sub_1408b26b0(&arg_8, &arg5)
int128_t result = result_1
float zmm11 = 1f
zmm10.o = arg3

if (arg4 s> 1)
    int128_t var_28_1 = zmm7
    uint64_t i_1 = zx.q(arg4 - 1)
    zmm7 = arg5:4.d
    int128_t var_38_1 = zmm8
    zmm8 = arg5.d
    uint64_t i
    
    do
        zmm8.d = zmm8.d f* arg2.d
        rbx += 1
        zmm7.d = zmm7.d f* arg2.d
        arg_8 = rbx
        arg5.d = zmm8.d
        arg5:4.d = zmm7.d
        float zmm9
        float zmm10_1
        result_1, result, zmm7, zmm8, zmm9, zmm10_1, zmm11 = sub_1408b26b0(&arg_8, &arg5)
        result_1.d = result_1.d f* zmm9
        zmm11 = zmm11 + zmm10_1
        result_1.d = result_1.d f+ 1f
        result.d = result.d f* result_1.d
        i = i_1
        i_1 -= 1
    while (i != 1)

result.d = result.d f/ zmm11
return result
