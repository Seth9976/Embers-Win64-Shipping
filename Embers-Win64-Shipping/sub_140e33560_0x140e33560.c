// 函数: sub_140e33560
// 地址: 0x140e33560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 s<= 0 || arg2 == 0)
    int64_t rax
    rax.b = 0
    return rax

(*(*arg1 + 0x68))()
int64_t rsi = 0
arg1[2] = 0

if (arg1[3] != 0)
    sub_140a4fbe0(&arg1[1], 0)

arg1[5] = 0

if (arg1[6] != arg3)
    sub_140a4fbe0(&arg1[4], arg3)
    rsi = arg1[5]

int64_t rax_2 = rsi + arg3
arg1[5] = rax_2

if (rax_2 s> arg1[6])
    sub_140a4f990(&arg1[4])

memcpy(arg1[4], arg2, arg3.d)
int64_t rax_3
rax_3.b = 1
return rax_3
