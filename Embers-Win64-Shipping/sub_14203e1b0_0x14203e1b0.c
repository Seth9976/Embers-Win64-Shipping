// 函数: sub_14203e1b0
// 地址: 0x14203e1b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 0

int64_t* rax_1
char r8
char r9
rax_1, r8, r9 = sub_141fe6490(arg2, arg3)
int512_t zmm2
zmm2.o = arg4
char var_30 = arg7
char var_38 = 0
int64_t var_40 = 0
int32_t var_48 = arg6.d
int64_t* result
int512_t zmm1
int128_t zmm6_1
result, zmm1, zmm6_1 = sub_1420225f0(arg1, rax_1, r8, r9)

if (result != 0)
    zmm1.o = zmm6_1
    (*(*result + 0x530))(result, zmm1)

return result
