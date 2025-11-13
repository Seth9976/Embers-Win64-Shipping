// 函数: sub_1423c1290
// 地址: 0x1423c1290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 0x38)
int32_t result = *(rdx + 0xb8)

if (result f> 0.000999999931f)
    return result

char rax_1 = *(rdx + 0xd4)
uint32_t rax_5

if (rax_1 != 0)
    rax_5 = zx.d(rax_1)
else
    rax_5 = (zx.d(*(rdx + 0xd5)) & 1) << 3 | 2

if (rax_5 - 9 u> 1 && (*(rdx + 0xd5) & 2) == 0)
    return 0x400ccccd

return 0x3f800000
