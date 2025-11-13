// 函数: sub_140ffa1c0
// 地址: 0x140ffa1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi = zx.q(arg3)

if (arg4 != 0)
    arg3.b = 1
    sub_140fdf350(arg1 - 0x18, *(arg4 + 0x20), arg3.b)
    void* rdx_1 = *(arg4 + 0x20)
    int32_t rax = *(arg1 + 0x40e8)
    *(rdx_1 + 0x10) = 1
    *(rdx_1 + 0xc) = rax

if (*(arg1 + ((rsi + 0x4e2) << 3)) != arg4)
    sub_14081d930(arg1 + ((rsi + 0x4e2) << 3), arg4)
    *(arg1 + 0x2798) = 1
