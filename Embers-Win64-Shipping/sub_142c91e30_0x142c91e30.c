// 函数: sub_142c91e30
// 地址: 0x142c91e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *arg1
int64_t rbx = arg2

if (arg2 == 0)
    rbx = zx.q(*(rsi + 0x18)) + arg1[2]

(*(rsi + 0x10))(rbx, arg1[1])
(*(rsi + 8))(arg1[2], rbx, zx.q(*(rsi + 0x20)))
(*(rsi + 0x10))(rbx, arg1[2])
data_143ccb8a0(arg1)
return 0
