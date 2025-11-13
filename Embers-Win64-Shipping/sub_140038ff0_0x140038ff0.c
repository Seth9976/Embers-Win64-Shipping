// 函数: sub_140038ff0
// 地址: 0x140038ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm8 = arg4[0].o
float zmm7[0x4] = arg3[0].o
int128_t zmm6 = arg2[0].o
int128_t zmm9 = arg7
int64_t rbp
rbp.b = arg5
sub_140038bf0(arg1.d)
int32_t rax = data_1439b8f70

if (rax s>= 5)
    arg2[0].o = zmm6
    arg3[0].o = zmm7
    arg4[0].o = zmm8
    int64_t k0
    return sub_1400069f0(arg1, arg2, arg3, arg4[0].o, k0, rbp.b, arg6, zmm9.d, arg8)

if (rax s>= 3)
    arg2[0].o = zmm6
    arg3[0].o = zmm7
    arg4[0].o = zmm8
    return sub_140011d20(arg1, arg2[0].o, arg3[0].o, arg4, rbp.b, arg6, zmm9.d, arg8)

if (rax s>= 2)
    arg2[0].o = zmm6
    arg3[0].o = zmm7
    arg4[0].o = zmm8
    int32_t zmm12[0x4]
    return sub_14001d0c0(arg1, arg2, arg3[0].o, arg4[0].o, zmm12, rbp.b, arg6, zmm9.d, arg8)

if (rax s> 0)
    arg2[0].o = zmm6
    arg3[0].o = zmm7
    arg4[0].o = zmm8
    return sub_140028a90(arg1, arg2[0].o, arg3[0].o, arg4[0].o, zmm7, rbp.b, arg6, zmm9.d, arg8)

if (rax s< 0)
    abort()
    noreturn

arg2[0].o = zmm6
arg3[0].o = zmm7
arg4[0].o = zmm8
return sub_140034b40(arg1, arg2[0].o, arg3[0].o, arg4[0].o, rbp.b, arg6, zmm9.d, arg8)
