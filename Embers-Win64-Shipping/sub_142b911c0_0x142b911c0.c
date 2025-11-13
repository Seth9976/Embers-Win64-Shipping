// 函数: sub_142b911c0
// 地址: 0x142b911c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = *arg1
char* rax = sub_142b9b880(rsi, arg3, ".AppleDouble/")

if (rax == 0)
    return zx.q((&rax[0x40]).d)

int32_t rax_2 = sub_142b9b7d0(arg1, rax, arg5, arg2)

if (rax_2 != 0)
    (*(rsi + 0x10))(rsi, rax)
else
    *arg4 = rax

return zx.q(rax_2)
