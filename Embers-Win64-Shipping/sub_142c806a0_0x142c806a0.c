// 函数: sub_142c806a0
// 地址: 0x142c806a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *arg1

if (arg2 s>= 0x190)
    sub_142c64760(rdi, "Failed FTP upload: %0d", zx.q(arg2), arg4)
    arg1[0xea].d = 0
    return 0x19

*(arg1 + 0x754) = arg3.d

if (*(rdi + 0x5de) == 0)
    return sub_142c7e120(arg1)

arg1[0xea].d = 0
char arg_10
int32_t result
int64_t r8_1
int512_t zmm2
result, r8_1, zmm2 = sub_142c7de70(arg1, &arg_10, arg3, arg4)

if (result != 0)
    return result

if (arg_10 == result.b)
    sub_142c64850(rdi, "Data conn was not available immediately\n", r8_1, zmm2)
    *(arg1 + 0x731) = 1

return 0
