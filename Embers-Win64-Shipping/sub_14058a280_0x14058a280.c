// 函数: sub_14058a280
// 地址: 0x14058a280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = arg1[1]
int64_t r8 = *arg1
int64_t rcx_2 = (rsi - r8) s>> 3

if (arg2 u< rcx_2)
    arg1[1] = r8 + (arg2 << 3)
    return 

if (arg2 u<= rcx_2)
    return 

if (arg2 u> (arg1[2] - r8) s>> 3)
    sub_14058bc70(arg1, arg2)
    return 

int64_t count = (arg2 - rcx_2) << 3
memset(rsi, 0, count)
arg1[1] = count + rsi
