// 函数: sub_1429eeca0
// 地址: 0x1429eeca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = ((zx.d(*arg4) + zx.d(arg4[1]) + 1) u>> 1).b
uint8_t* rbx = arg2 * 5
uint8_t* r10_3 = arg2 * 3
uint8_t* r8_3 = arg2 * 6
arg1[arg2] = ((zx.d(arg4[2]) + 1 + zx.d(arg4[1])) u>> 1).b
arg1[arg2 << 1] = ((zx.d(arg4[2]) + zx.d(arg4[3]) + 1) u>> 1).b
*(r10_3 + arg1) = ((zx.d(arg4[4]) + zx.d(arg4[3]) + 1) u>> 1).b
arg1[arg2 << 2] = ((zx.d(arg4[4]) + zx.d(arg4[5]) + 1) u>> 1).b
*(rbx + arg1) = ((zx.d(arg4[6]) + zx.d(arg4[5]) + 1) u>> 1).b
*(r8_3 + arg1) = ((zx.d(arg4[7]) + zx.d(arg4[6]) + 1) u>> 1).b
char* r9_4 = arg2 * 7
*(r9_4 + arg1) = arg4[7]
arg1[1] = ((zx.d(*arg4) + ((zx.d(arg4[1]) + 1) << 1) + zx.d(arg4[2])) u>> 2).b
arg1[arg2 + 1] = ((zx.d(arg4[3]) + ((zx.d(arg4[2]) + 1) << 1) + zx.d(arg4[1])) u>> 2).b
arg1[(arg2 << 1) + 1] = ((zx.d(arg4[4]) + ((zx.d(arg4[3]) + 1) << 1) + zx.d(arg4[2])) u>> 2).b
*(r10_3 + arg1 + 1) = ((zx.d(arg4[5]) + ((zx.d(arg4[4]) + 1) << 1) + zx.d(arg4[3])) u>> 2).b
arg1[(arg2 << 2) + 1] = ((zx.d(arg4[6]) + ((zx.d(arg4[5]) + 1) << 1) + zx.d(arg4[4])) u>> 2).b
*(rbx + arg1 + 1) = ((zx.d(arg4[5]) + ((zx.d(arg4[6]) + 1) << 1) + zx.d(arg4[7])) u>> 2).b
*(r8_3 + arg1 + 1) = ((zx.d(arg4[6]) + 2 + (zx.q(arg4[7]) * 3).d) u>> 2).b
int64_t rdx_37 = 6
*(r9_4 + arg1 + 1) = arg4[7]
*(r9_4 + &arg1[2]) = arg4[7]
*(r9_4 + &arg1[2] + 1) = arg4[7]
*(r9_4 + &arg1[2] + 2) = arg4[7]
*(r9_4 + &arg1[2] + 3) = arg4[7]
*(r9_4 + &arg1[2] + 4) = arg4[7]
*(r9_4 + &arg1[2] + 5) = arg4[7]
void* result = &r9_4[-1] + &arg1[2]
int64_t temp0_1

do
    *(1 - arg2 + result) = *(result - 1)
    *(2 - arg2 + result) = *result
    *(3 - arg2 + result) = *(result + 1)
    *(4 - arg2 + result) = *(result + 2)
    *(5 - arg2 + result) = *(result + 3)
    *(6 - arg2 + result) = *(result + 4)
    result += neg.q(arg2)
    temp0_1 = rdx_37
    rdx_37 -= 1
while (temp0_1 - 1 s>= 0)
return result
