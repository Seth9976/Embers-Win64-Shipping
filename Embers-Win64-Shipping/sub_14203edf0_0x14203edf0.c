// 函数: sub_14203edf0
// 地址: 0x14203edf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0)
    return 0

int512_t zmm3
zmm3.o = arg9
char var_30 = arg12
void* result = sub_1420214f0(arg1, arg2[0x14], arg8, arg4, arg11)
*(result + 0x1f8) &= 0xfd
*(result + 0x1f8) |= arg7 * 2
sub_141f32b40(result, arg2, &data_143f3f280, arg3)
int64_t var_28
int64_t var_18

if (arg6 != 1)
    int32_t rax_5 = arg5[1].d
    var_18 = *arg5
    int32_t var_10_1 = rax_5
    int32_t rax_6 = arg4[1].d
    var_28 = *arg4
    int32_t var_20_1 = rax_6
    sub_141f48a10(result, &var_28, &var_18, 0, 0, 0)
else
    int32_t rax_2 = arg5[1].d
    var_28 = *arg5
    int32_t var_20 = rax_2
    int32_t rax_3 = arg4[1].d
    var_18 = *arg4
    int32_t var_10 = rax_3
    sub_141f4a260(result, &var_18, &var_28, 0, 0, 0)
int512_t zmm1
zmm1.o = arg10
(*(*result + 0x520))(result, zmm1)
return result
