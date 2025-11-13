// 函数: sub_1423eb800
// 地址: 0x1423eb800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm1 = *arg3
uint64_t var_48 = 0
int32_t var_40 = 0
int32_t rax = arg3[1].d
int128_t var_38 = *arg4
int128_t var_28 = zmm1
int32_t var_18 = rax
char rax_1 = sub_1423eb610(arg1, &var_48, &var_28, &var_38, arg5)

if (rax_1 != 0)
    memcpy(arg2, var_48, var_40 << 4)

if (var_48 != 0)
    sub_140a74f90(var_48)

return zx.q(rax_1)
