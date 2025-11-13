// 函数: sub_140039160
// 地址: 0x140039160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm7 = arg10
int64_t r14
r14.b = arg8
float zmm9[0x4] = arg7
int128_t zmm8 = arg6
sub_140038bf0(arg1.d)
int32_t rax = data_1439b8f70

if (rax s>= 5)
    int64_t k0
    return sub_140006390(arg1, zx.q(arg2), arg3, arg4, k0, zmm8.d, zmm9[0], r14.b, arg9, zmm7.d, 
        arg11)

if (rax s>= 3)
    return sub_140011680(arg1, zx.q(arg2), arg3, arg4, arg5, zmm8.d, zmm9[0], r14.b, arg9, zmm7.d, 
        arg11)

if (rax s>= 2)
    int32_t zmm12[0x4]
    return sub_14001c9b0(arg1, zx.q(arg2), arg3, arg4, zmm12, zmm8.d, zmm9[0], r14.b, arg9, zmm7.d, 
        arg11)

if (rax s> 0)
    float zmm5[0x4]
    float zmm10[0x4]
    float zmm13[0x4]
    return sub_140028350(arg1, zx.q(arg2), arg3, arg4, zmm5, zmm9, zmm10, zmm13, zmm8.d, zmm9[0], 
        r14.b, arg9, zmm7.d, arg11)

if (rax s>= 0)
    return sub_140034400(arg1, zx.q(arg2), arg3, arg4, zmm8.d, zmm9[0], r14.b, arg9, zmm7.d, arg11)

abort()
noreturn
