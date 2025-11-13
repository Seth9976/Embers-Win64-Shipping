// 函数: sub_142c32090
// 地址: 0x142c32090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((zx.d(arg1[2]) << 8) + zx.d(arg1[3]) u> arg2 || arg2 u> (zx.d(*arg1) << 8) + zx.d(arg1[1]))
    return 0

int64_t rdx_1 = zx.q(arg1[5]) + (zx.q(arg1[4]) << 8) + arg3
int128_t* result = rdx_1 + (zx.q(arg2 - (zx.d(arg1[2]) << 8) - zx.d(arg1[3])) << 2)

if (result u>= rdx_1)
    return result

return &data_14369a5d0
