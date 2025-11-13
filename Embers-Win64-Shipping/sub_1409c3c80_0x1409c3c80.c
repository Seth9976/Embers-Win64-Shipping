// 函数: sub_1409c3c80
// 地址: 0x1409c3c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r11 = *(arg1 + 0x28)
int64_t rax_2
int64_t rcx

if (arg4 s>= 0)
    rcx = sx.q(arg3) * 5
    rax_2 = *(r11 + 0xe0)

int32_t* rdx

if (arg4 s< 0 || arg4 s>= *(rax_2 + (rcx << 3) + 8))
    rdx = &data_143a1c6b8
else
    rdx = *(rax_2 + (rcx << 3)) + (sx.q(arg4) << 2)

int64_t rax_5 = sx.q(*rdx)

if (rax_5.d == data_143a1c6b8)
    *arg2 = data_143a1c6b4
    return arg2

*arg2 = *(*(r11 + 0x38) + rax_5 * 0x18)
return arg2
