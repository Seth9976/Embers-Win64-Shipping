// 函数: sub_1413e94d0
// 地址: 0x1413e94d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax

if (*(arg1 + 0x16f8) s<= 0)
    rax.b = 0
else if (*(*(arg1 + 0x16c8) + 8) s< 3)
    rax.b = *(arg1 + 0x1360) s> 0
else
    rax.b = *(arg1 + 0x1370) != 0

*arg3 = rax.b
char rax_1 = sub_1413e9190(arg1 + 0x61d8, *(arg2 + 0x10), arg4)
*arg6 = rax_1

if (rax_1 == 0)
    void* rax_2 = *(arg2 + 8)
    *arg4 = *(rax_2 + 0x80)
    arg4[1] = *(rax_2 + 0x90)
    arg4[2] = *(rax_2 + 0xa0)
    arg4[3] = *(rax_2 + 0xb0)

void* rax_3 = *(arg2 + 0x80)

if (rax_3 == 0)
    *arg5 = 0
    return arg5

*arg5 = *(rax_3 + 0x4c)
return arg5
