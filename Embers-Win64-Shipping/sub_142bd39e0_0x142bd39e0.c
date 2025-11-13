// 函数: sub_142bd39e0
// 地址: 0x142bd39e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm1 = sub_142bd2f50(arg1, arg5, arg6, arg4)
bool cond:0 = arg1[5].b == 0
arg1[0x927].d = arg2
arg1[0x925].d = arg2
*(arg1 + 0x493c) = arg3
*(arg1 + 0x492c) = arg3
*(arg1 + 0x48df) = 1

if (cond:0 || *(arg1[0x91e] + 9) != 0)
    sub_142bd4180(&arg1[2], arg1[0x91c], arg1[0x91d], arg1[0x91e], zmm1, arg6, arg1[0x91f].d, 0)

void* rcx_1 = &arg1[2]
int64_t i_1 = 0x30
void* result = &arg1[0x307]
int64_t i

do
    result += 0x80
    int128_t zmm0 = *rcx_1
    rcx_1 += 0x80
    *(result - 0x80) = zmm0
    *(result - 0x70) = *(rcx_1 - 0x70)
    *(result - 0x60) = *(rcx_1 - 0x60)
    *(result - 0x50) = *(rcx_1 - 0x50)
    *(result - 0x40) = *(rcx_1 - 0x40)
    *(result - 0x30) = *(rcx_1 - 0x30)
    *(result - 0x20) = *(rcx_1 - 0x20)
    *(result - 0x10) = *(rcx_1 - 0x10)
    i = i_1
    i_1 -= 1
while (i != 1)
*result = *rcx_1
*(result + 0x10) = *(rcx_1 + 0x10)
*(result + 0x20) = *(rcx_1 + 0x20)
return result
