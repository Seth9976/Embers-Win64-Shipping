// 函数: sub_141acd170
// 地址: 0x141acd170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t* r8_1 = arg1[2]
uint64_t result = zx.q(arg2)
int16_t r8

if (result.d s>= r8_1[1].d)
    r8 = -1
else
    result = *r8_1
    r8 = *(result + (zx.q(arg2) << 1))

if (r8 != 0xffff)
    result = *arg1
    uint64_t rcx = zx.q(r8)
    *(result + (rcx << 3)) = arg3
    *(result + (rcx << 3) + 4) = 1

return result
