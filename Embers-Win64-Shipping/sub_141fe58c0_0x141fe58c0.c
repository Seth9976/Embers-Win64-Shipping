// 函数: sub_141fe58c0
// 地址: 0x141fe58c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = 0
float arg_20
sub_141fdf430(arg1 + 0x38, &arg_20, arg2, &arg_8)
float zmm2_1

if (arg4 != 0)
    int32_t rax_2 = *(arg4 + 4) * 0xbb38435 + 0x3619636b
    *(arg4 + 4) = rax_2
    arg_8.d = rax_2 u>> 9 | 0x3f800000
    zmm2_1 = arg_8.d - 1f
else
    zmm2_1 = sub_140a50670()

return (arg5 - arg_20) * zmm2_1 + arg_20
