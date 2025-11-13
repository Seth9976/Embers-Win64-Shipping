// 函数: sub_140e33910
// 地址: 0x140e33910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x68))()
int64_t rsi = 0
arg1[5] = 0

if (arg1[6] != 0)
    sub_140a4fbe0(&arg1[4], 0)

arg1[2] = 0

if (arg1[3] != arg3)
    sub_140a4fbe0(&arg1[1], arg3)
    rsi = arg1[2]

int64_t rax_1 = rsi + arg3
arg1[2] = rax_1

if (rax_1 s> arg1[3])
    sub_140a4f990(&arg1[1])

memcpy(arg1[1], arg2, arg3.d)
arg1[7].b = arg6
*(arg1 + 0x39) = arg7
arg1[8].d = arg5
int32_t result
result.b = 1
*(arg1 + 0x3c) = arg4
return result
