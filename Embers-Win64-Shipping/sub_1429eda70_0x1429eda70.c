// 函数: sub_1429eda70
// 地址: 0x1429eda70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t* rax = arg1 + arg2
*arg1 = ((zx.d(*arg3) + zx.d(arg3[-1]) + 1) u>> 1).b
arg1[1] = ((zx.d(arg3[1]) + 1 + zx.d(*arg3)) u>> 1).b
arg1[2] = ((zx.d(arg3[1]) + zx.d(arg3[2]) + 1) u>> 1).b
arg1[3] = ((zx.d(arg3[2]) + zx.d(arg3[3]) + 1) u>> 1).b
arg1[4] = ((zx.d(arg3[3]) + zx.d(arg3[4]) + 1) u>> 1).b
arg1[5] = ((zx.d(arg3[5]) + zx.d(arg3[4]) + 1) u>> 1).b
arg1[6] = ((zx.d(arg3[5]) + zx.d(arg3[6]) + 1) u>> 1).b
arg1[7] = ((zx.d(arg3[6]) + zx.d(arg3[7]) + 1) u>> 1).b
*rax = ((zx.d(*arg3) + ((zx.d(arg3[-1]) + 1) << 1) + zx.d(*arg4)) u>> 2).b
rax[1] = ((zx.d(arg3[-1]) + ((zx.d(*arg3) + 1) << 1) + zx.d(arg3[1])) u>> 2).b
rax[2] = ((zx.d(*arg3) + ((zx.d(arg3[1]) + 1) << 1) + zx.d(arg3[2])) u>> 2).b
uint8_t* r9_4 = arg2 * 2
rax[3] = ((zx.d(arg3[3]) + ((zx.d(arg3[2]) + 1) << 1) + zx.d(arg3[1])) u>> 2).b
rax[4] = ((zx.d(arg3[4]) + ((zx.d(arg3[3]) + 1) << 1) + zx.d(arg3[2])) u>> 2).b
rax[5] = ((zx.d(arg3[3]) + ((zx.d(arg3[4]) + 1) << 1) + zx.d(arg3[5])) u>> 2).b
rax[6] = ((zx.d(arg3[4]) + ((zx.d(arg3[5]) + 1) << 1) + zx.d(arg3[6])) u>> 2).b
rax[7] = ((zx.d(arg3[7]) + ((zx.d(arg3[6]) + 1) << 1) + zx.d(arg3[5])) u>> 2).b
void* rax_1 = rax + arg2
*rax_1 = ((zx.d(arg4[1]) + ((zx.d(*arg4) + 1) << 1) + zx.d(arg3[-1])) u>> 2).b
*(rax_1 + arg2) = ((zx.d(arg4[2]) + ((zx.d(arg4[1]) + 1) << 1) + zx.d(*arg4)) u>> 2).b
*(r9_4 + rax_1) = ((zx.d(arg4[1]) + ((zx.d(arg4[2]) + 1) << 1) + zx.d(arg4[3])) u>> 2).b
*(arg2 * 3 + rax_1) = ((zx.d(arg4[2]) + ((zx.d(arg4[3]) + 1) << 1) + zx.d(arg4[4])) u>> 2).b
*(rax_1 + (arg2 << 2)) = ((zx.d(arg4[5]) + ((zx.d(arg4[4]) + 1) << 1) + zx.d(arg4[3])) u>> 2).b
int64_t i_1 = 6
*(arg2 * 5 + rax_1) = ((zx.d(arg4[6]) + ((zx.d(arg4[5]) + 1) << 1) + zx.d(arg4[4])) u>> 2).b
void* result = rax_1 - r9_4 + 2
int64_t i

do
    *(r9_4 + result - 1) = *(result - 2)
    *(r9_4 + result) = *(result - 1)
    *(r9_4 + result + 1) = *result
    *(r9_4 + result + 2) = *(result + 1)
    *(r9_4 + result + 3) = *(result + 2)
    *(result + (arg2 << 1) + 4) = *(result + 3)
    *(r9_4 + result + 5) = *(result + 4)
    result += arg2
    i = i_1
    i_1 -= 1
while (i != 1)
return result
