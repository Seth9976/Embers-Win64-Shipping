// 函数: sub_140038d90
// 地址: 0x140038d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm8[0x4] = arg4
int128_t zmm7 = arg3[0].o
int128_t zmm6 = arg2[0].o
int128_t zmm9 = arg7
int64_t rbp
rbp.b = arg5
sub_140038bf0(arg1.d)
int32_t rax = data_1439b8f70

if (rax s>= 5)
    arg2[0].o = zmm6
    arg3[0].o = zmm7
    int64_t k0
    return sub_140005900(arg1, arg2, arg3[0].o, zmm8, k0, rbp.b, arg6, zmm9.d, arg8)

if (rax s>= 3)
    arg2[0].o = zmm6
    arg3[0].o = zmm7
    return sub_140010b80(arg1, arg2[0].o, arg3, zmm8, zmm8, rbp.b, arg6, zmm9.d, arg8)

if (rax s>= 2)
    arg2[0].o = zmm6
    arg3[0].o = zmm7
    int32_t zmm10[0x4]
    return sub_14001bdf0(arg1, arg2[0].o, arg3, zmm8, zmm10, rbp.b, arg6, zmm9.d, arg8)

if (rax s> 0)
    arg2[0].o = zmm6
    arg3[0].o = zmm7
    return sub_140027770(arg1, arg2[0].o, arg3[0].o, zmm8, rbp.b, arg6, zmm9.d, arg8)

if (rax s< 0)
    abort()
    noreturn

arg2[0].o = zmm6
arg3[0].o = zmm7
return sub_1400337f0(arg1, arg2[0].o, arg3[0].o, zmm8, rbp.b, arg6, zmm9.d, arg8)
