// 函数: sub_140b89600
// 地址: 0x140b89600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(sub_1406daa50(arg1, arg2))

if (rsi.d == 0xffffffff)
    return 0

int64_t* rbx_2 = (rsi << 4) + *arg1
int64_t rcx = *rbx_2

if (rcx != 0)
    sub_140a74f90(rcx)

memmove(rbx_2, &rbx_2[2], (arg1[1].d - rsi.d - 1) << 4)
arg1[1].d -= 1
return 1
