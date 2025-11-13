// 函数: sub_1426d8120
// 地址: 0x1426d8120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rbx = *(arg1 + 0x20)
void* rax_1
int64_t rax_2
void* rdx

if (rbx != 0)
    rax_1 = sub_1427297d0()
    rdx = *(rbx + 0x10)
    rax_2 = sx.q(*(rax_1 + 0x38))

if (rbx == 0 || rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
    rbx = nullptr

int32_t result = *(arg1 + 0xa0)
uint32_t r8_2 = zx.d(arg2) ^ 1

if (test_bit(result, 8))
    *(arg1 + 0x88) = r8_2.b
    return result

if (rbx != 0 && result.b s>= 0)
    return sub_1426b08f0(arg1, rbx, r8_2, arg3)

return result
