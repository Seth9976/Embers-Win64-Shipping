// 函数: sub_1429ef570
// 地址: 0x1429ef570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = ((zx.d(*arg3) + 1 + zx.d(arg3[1])) u>> 1).b
*(arg1 + arg2) = ((zx.d(arg3[2]) + 2 + (zx.d(arg3[1]) << 1) + zx.d(*arg3)) u>> 2).b
arg1[1] = ((zx.d(arg3[1]) + zx.d(arg3[2]) + 1) u>> 1).b
*(arg1 + arg2 + 1) = ((zx.d(arg3[3]) + ((zx.d(arg3[2]) + 1) << 1) + zx.d(arg3[1])) u>> 2).b
arg1[2] = ((zx.d(arg3[2]) + zx.d(arg3[3]) + 1) u>> 1).b
*(arg1 + arg2 + 2) = ((zx.d(arg3[4]) + ((zx.d(arg3[3]) + 1) << 1) + zx.d(arg3[2])) u>> 2).b
arg1[3] = ((zx.d(arg3[4]) + zx.d(arg3[3]) + 1) u>> 1).b
*(arg1 + arg2 + 3) = ((zx.d(arg3[5]) + ((zx.d(arg3[4]) + 1) << 1) + zx.d(arg3[3])) u>> 2).b
arg1[4] = ((zx.d(arg3[4]) + zx.d(arg3[5]) + 1) u>> 1).b
*(arg1 + arg2 + 4) = ((zx.d(arg3[6]) + ((zx.d(arg3[5]) + 1) << 1) + zx.d(arg3[4])) u>> 2).b
arg1[5] = ((zx.d(arg3[6]) + zx.d(arg3[5]) + 1) u>> 1).b
int64_t i_1 = 3
int64_t r15 = 2
int32_t r12 = 6
int32_t count_1 = 2
*(arg1 + arg2 + 5) = ((zx.d(arg3[7]) + ((zx.d(arg3[6]) + 1) << 1) + zx.d(arg3[5])) u>> 2).b
arg1[6] = ((zx.d(arg3[6]) + zx.d(arg3[7]) + 1) u>> 1).b
*(arg1 + arg2 + 6) = ((zx.d(arg3[8]) + ((zx.d(arg3[7]) + 1) << 1) + zx.d(arg3[6])) u>> 2).b
arg1[7] = ((zx.d(arg3[8]) + 1 + zx.d(arg3[7])) u>> 1).b
void* rax_18 = arg2 * 2
void* rbx = rax_18 + arg1
*(arg1 + arg2 + 7) = ((zx.d(arg3[9]) + 2 + (zx.d(arg3[8]) << 1) + zx.d(arg3[7])) u>> 2).b
int64_t result
int64_t i

do
    int64_t rbp_1 = sx.q(r12)
    void* rdi_3 = &arg1[r15 s>> 1]
    memcpy(rbx, rdi_3, rbp_1.d)
    uint64_t count = sx.q(count_1)
    memset(neg.q(arg1) + rbx + rbp_1 + arg1, zx.d(arg3[7]), count)
    memcpy(rbx + arg2, rdi_3 + arg2, rbp_1.d)
    result = memset(arg2 - arg1 + rbx + rbp_1 + arg1, zx.d(arg3[7]), count)
    rbx += rax_18
    r15 += 2
    r12 -= 1
    count_1 += 1
    i = i_1
    i_1 -= 1
while (i != 1)
return result
