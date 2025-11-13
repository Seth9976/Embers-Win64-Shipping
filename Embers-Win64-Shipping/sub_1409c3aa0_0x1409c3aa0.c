// 函数: sub_1409c3aa0
// 地址: 0x1409c3aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x28)
int64_t r10 = sx.q(arg4)
int64_t r8 = sx.q(arg3) * 5
int64_t rax_1 = rcx[0x1c]
int32_t r11 = *(rax_1 + (r8 << 3) + 8)

if (r10.d s>= r11)
    *arg2 = data_143a1c6bc
    return arg2

int64_t r8_2 = *(rax_1 + (r8 << 3))
int64_t r9 = rcx[7]
int32_t rbx = *(r9 + sx.q(*(r8_2 + (r10 << 2))) * 0x18)
sub_141cdf680(rcx, arg2, rbx, 
    *(r9 + sx.q(*(r8_2 + (sx.q(mods.dp.d(sx.q((r10 + 1).d), r11)) << 2))) * 0x18))
int64_t rax_8 = sx.q(*arg2)

if (rax_8.d != data_143a1c6bc)
    int64_t rcx_1
    rcx_1.b = *(*(*(arg1 + 0x28) + 0x70) + rax_8 * 0x18) == rbx
    *arg5 = rcx_1.b

return arg2
