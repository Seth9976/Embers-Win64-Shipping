// 函数: sub_142c92430
// 地址: 0x142c92430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rax
int512_t zmm2

if (arg3 == 0 && (arg4 == 0 || arg4 == 0x50))
    rax, zmm2 = sub_142c563e0("user=%s", arg2, arg5)
else if (arg4 == 0 || arg4 == 0x50)
    rax, zmm2 = sub_142c563e0("user=%s", arg2, arg5)
else
    int64_t var_18_1 = arg6
    rax, zmm2 = sub_142c563e0("user=%s", arg2, arg5)

if (rax == 0)
    return zx.q((&rax[0x1b]).d)

int64_t r8_1 = -1

do
    r8_1 += 1
while (rax[r8_1] != 0)

int32_t rax_4 = sub_142c75c90(arg1, rax, r8_1, arg7, zmm2, arg8)
data_143ccb8a0(rax)
return zx.q(rax_4)
