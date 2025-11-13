// 函数: sub_141fe9880
// 地址: 0x141fe9880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *arg1
int32_t r8 = *(result + 0x1c)
int32_t rdx = *(result + 0x20)

if (*(result + 0x18) s>= r8)
    r8 = *(result + 0x18)

if (r8 s>= rdx)
    rdx = r8

result.b = rdx s> 0
return result
