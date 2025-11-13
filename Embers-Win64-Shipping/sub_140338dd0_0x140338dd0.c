// 函数: sub_140338dd0
// 地址: 0x140338dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = arg3[0].o
int128_t zmm7 = arg7
float zmm8[0x8]
zmm8[0].o = arg6
sub_140338c20(arg1.d)
int32_t rax = data_143b4c6dc
float zmm10[0x8]

if (rax s>= 5)
    arg3[0].o = zmm6
    int64_t k0
    int32_t zmm11[0x4]
    return sub_140326d60(arg1, arg2, arg3[0].o, arg4, k0, zmm8, zmm10, zmm11, arg5, zmm8[0], zmm7.d)

if (rax s>= 3)
    arg3[0].o = zmm6
    return sub_14032af90(arg1, arg2, arg3, arg4, arg5, zmm8[0], zmm7.d)

if (rax s>= 2)
    arg3[0].o = zmm6
    return sub_14032f470(arg1, arg2, arg3[0].o, arg4, zmm10, arg5, zmm8[0], zmm7.d)

if (rax s> 0)
    arg3[0].o = zmm6
    return sub_140333890(arg1, arg2, arg3[0].o, arg4, arg5, zmm8[0], zmm7.d)

if (rax s< 0)
    abort()
    noreturn

arg3[0].o = zmm6
return sub_140337ee0(arg1, arg2, arg3[0].o, arg4, arg5, zmm8[0], zmm7.d)
