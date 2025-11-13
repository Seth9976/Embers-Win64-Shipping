// 函数: sub_1429ee6f0
// 地址: 0x1429ee6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = ((zx.d(*arg4) + zx.d(arg3[-1]) + 1) u>> 1).b
uint8_t* r8 = arg2 * 3
uint8_t* r10_4 = arg2 * 5
arg1[arg2] = ((zx.d(*arg4) + zx.d(arg4[1]) + 1) u>> 1).b
uint8_t* r9_3 = arg2 * 6
arg1[arg2 << 1] = ((zx.d(arg4[1]) + zx.d(arg4[2]) + 1) u>> 1).b
*(r8 + arg1) = ((zx.d(arg4[2]) + zx.d(arg4[3]) + 1) u>> 1).b
arg1[arg2 << 2] = ((zx.d(arg4[3]) + zx.d(arg4[4]) + 1) u>> 1).b
*(r10_4 + arg1) = ((zx.d(arg4[4]) + zx.d(arg4[5]) + 1) u>> 1).b
*(r9_3 + arg1) = ((zx.d(arg4[5]) + zx.d(arg4[6]) + 1) u>> 1).b
uint8_t* r11_3 = arg2 * 7
*(r11_3 + arg1) = ((zx.d(arg4[6]) + 1 + zx.d(arg4[7])) u>> 1).b
arg1[1] = ((zx.d(*arg3) + 2 + (zx.d(arg3[-1]) << 1) + zx.d(*arg4)) u>> 2).b
arg1[arg2 + 1] = ((zx.d(arg4[1]) + 2 + (zx.d(*arg4) << 1) + zx.d(arg3[-1])) u>> 2).b
arg1[(arg2 << 1) + 1] = ((zx.d(arg4[2]) + 2 + (zx.d(arg4[1]) << 1) + zx.d(*arg4)) u>> 2).b
*(r8 + arg1 + 1) = ((zx.d(arg4[3]) + 2 + (zx.d(arg4[2]) << 1) + zx.d(arg4[1])) u>> 2).b
arg1[(arg2 << 2) + 1] = ((zx.d(arg4[4]) + 2 + (zx.d(arg4[3]) << 1) + zx.d(arg4[2])) u>> 2).b
*(r10_4 + arg1 + 1) = ((zx.d(arg4[5]) + 2 + (zx.d(arg4[4]) << 1) + zx.d(arg4[3])) u>> 2).b
*(r9_3 + arg1 + 1) = ((zx.d(arg4[6]) + 2 + (zx.d(arg4[5]) << 1) + zx.d(arg4[4])) u>> 2).b
*(r11_3 + arg1 + 1) = ((zx.d(arg4[7]) + 2 + (zx.d(arg4[6]) << 1) + zx.d(arg4[5])) u>> 2).b
arg1[2] = ((zx.d(arg3[-1]) + 2 + (zx.d(*arg3) << 1) + zx.d(arg3[1])) u>> 2).b
arg1[3] = ((zx.d(arg3[2]) + 2 + (zx.d(arg3[1]) << 1) + zx.d(*arg3)) u>> 2).b
arg1[4] = ((zx.d(arg3[1]) + 2 + (zx.d(arg3[2]) << 1) + zx.d(arg3[3])) u>> 2).b
arg1[5] = ((zx.d(arg3[2]) + 2 + (zx.d(arg3[3]) << 1) + zx.d(arg3[4])) u>> 2).b
arg1[6] = ((zx.d(arg3[5]) + 2 + (zx.d(arg3[4]) << 1) + zx.d(arg3[3])) u>> 2).b
arg1[7] = ((zx.d(arg3[6]) + 2 + (zx.d(arg3[5]) << 1) + zx.d(arg3[4])) u>> 2).b
void* rbx_2 = &arg1[2 + arg2]
int64_t i_1 = 7
void* result = rbx_2 - arg2 - 1
int64_t i

do
    *rbx_2 = *(result - 1)
    rbx_2 += arg2
    *(arg2 + result + 2) = *result
    *(arg2 + result + 3) = *(result + 1)
    *(arg2 + result + 4) = *(result + 2)
    *(arg2 + result + 5) = *(result + 3)
    *(arg2 + result + 6) = *(result + 4)
    result += arg2
    i = i_1
    i_1 -= 1
while (i != 1)
return result
