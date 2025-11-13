// 函数: sub_141940dd0
// 地址: 0x141940dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg2)
char temp0 = result.b
result.b = neg.b(result.b)
uint64_t rdx_1 = zx.q(zx.d(arg2) + 5)
uint64_t r8_1 = zx.q((sbb.q(arg3, arg3, temp0 != 0)).d) & 5

if (r8_1 u< rdx_1)
    uint64_t i_1 = rdx_1 - r8_1
    result = (zx.q(r8_1.d) << 7) + 0x78 + arg1
    uint64_t i
    
    do
        *(result - 0x50) = 0
        int32_t rcx = *result
        result += 0x80
        *(result - 0xcc) = rcx u>> 4
        *(result - 0xc8) = 0
        *(result - 0xc4) = *(result - 0x80) u>> 4
        *(result - 0xc0) = 0
        *(result - 0xbc) = *(result - 0x80) u>> 4
        *(result - 0xb8) = 0
        *(result - 0xb4) = *(result - 0x80) u>> 4
        *(result - 0xb0) = 0
        *(result - 0xac) = *(result - 0x80) u>> 4
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
