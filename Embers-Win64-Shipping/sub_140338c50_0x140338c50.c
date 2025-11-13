// 函数: sub_140338c50
// 地址: 0x140338c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = arg3[0].o
int128_t zmm7 = arg8
float zmm9[0x8]
zmm9[0].o = arg7
int32_t zmm8[0x4] = arg6
sub_140338c20(arg1.d)
int32_t rax = data_143b4c6dc

if (rax s>= 5)
    arg3[0].o = zmm6
    int64_t k0
    float zmm11[0x8]
    int32_t zmm12[0x4]
    return sub_140326130(arg1, arg2, arg3, arg4, k0, zmm9, zmm11, zmm12, arg5, zmm8[0], zmm9[0], 
        zmm7.d)

if (rax s>= 3)
    arg3[0].o = zmm6
    return sub_14032a2f0(arg1, arg2, arg3, arg4, arg5, zmm8[0], zmm9[0], zmm7.d)

if (rax s>= 2)
    arg3[0].o = zmm6
    return sub_14032e790(arg1, arg2, arg3[0].o, arg4, zmm8, arg5, zmm8[0], zmm9[0], zmm7.d)

if (rax s> 0)
    arg3[0].o = zmm6
    return sub_140332bf0(arg1, arg2, arg3[0].o, arg4, arg5, zmm8[0], zmm9[0], zmm7.d)

if (rax s< 0)
    abort()
    noreturn

arg3[0].o = zmm6
return sub_1403371b0(arg1, arg2, arg3[0].o, arg4, arg5, zmm8[0], zmm9[0], zmm7.d)
