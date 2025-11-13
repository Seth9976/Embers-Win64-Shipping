// 函数: sub_140cb8dc0
// 地址: 0x140cb8dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8_6 = sx.q(*(arg1 + 0x1f0))
int64_t rax = *(arg1 + 0x1e8)
int64_t r11 = sx.q(arg2)
int32_t rax_1 = *(rax + (r8_6 << 2) - 4)
*(rax + (r8_6 << 2) - 4) = zx.d(rax_1.b + 1) ^ zx.d(rax_1.b) ^ rax_1
int64_t r8_2 = sx.q(*(arg1 + 0x1f0))
int64_t rdx = *(arg1 + 0x1e8)
char result = (*(rdx + (r8_2 << 2) - 4)).b - 1
*(rdx + (r11 << 2)) = (r8_2.d - r11.d) << 8 | zx.d(result)
return result
