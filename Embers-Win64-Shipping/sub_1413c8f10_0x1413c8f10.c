// 函数: sub_1413c8f10
// 地址: 0x1413c8f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *arg1
char r14 = arg1[2].b
int64_t** rbx = arg1[1]
int64_t rbp = sx.q(*(rsi + 0x16f8))
int32_t rax = (rbp + 1).d
*(rsi + 0x16f8) = rax

if (rax s> *(rsi + 0x16fc))
    sub_1405a4d70(rsi + 0x16f0)

*(*(rsi + 0x16f0) + (rbp << 3)) = rbx

if (r14 != 0)
    *(rsi + 0x16e8) = rbx

return sub_14228f1d0(*rbx, rsi + 0x1310) __tailcall
