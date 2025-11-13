// 函数: sub_140d05340
// 地址: 0x140d05340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
int64_t rsi

if (arg2 == 0)
    rsi = 0
else
    rsi = (*(*arg1 + 0x140))()

if (arg3 != 0)
    rbx = (*(*arg1 + 0x140))(arg1, arg3)

int64_t result
result.b = rsi == rbx
return result
