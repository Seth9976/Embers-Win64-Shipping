// 函数: sub_1428dc960
// 地址: 0x1428dc960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)

if (arg2 == 0 && arg3 == 0)
    arg2 = data_143b85a90
    arg3 = data_143fecc4c

*(arg1 + 0x90) = 0
*(arg1 + 0x1c) = arg3.w
*(arg1 + 0x14) = arg2

if (arg2 == 0)
    return 1

if (arg2 - 0x388 u> 2)
    sub_1428a5670(0x24, 0x68, 0x78, "crypto\rand\drbg_lib.c", 0x72)
    return 0

int32_t rax_1 = sub_142925510(arg1)

if (rax_1 == 0)
    sub_1428a5670(rax_1 + 0x24, rax_1 + 0x68, rax_1 + 0x6b, "crypto\rand\drbg_lib.c", 0x7f)

return zx.q(rax_1)
