// 函数: sub_140852320
// 地址: 0x140852320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx

if (arg5 == 0)
    rbx = ((zx.q(arg1[8].d) << 1) + 3).d
else
    rbx = 0

void* rdx_4

if (arg4 == 0)
    rdx_4 = *(*arg1 + (sx.q(rbx + arg3) << 3))
else
    int64_t rax_2
    int64_t rdx
    rdx:rax_2 = muls.dp.q(0x7878787878787879, arg4 - arg1[4])
    int64_t rdx_1 = rdx s>> 7
    rdx_4 =
        *(*arg1 + (sx.q(rdx_1.d + (rdx_1 u>> 0x3f).d + (arg3 - 3) * arg1[8].d + rbx) << 3) + 0x18)

*arg2 = rdx_4

if (rdx_4 != 0)
    *(rdx_4 + 8) += 1

return arg2
