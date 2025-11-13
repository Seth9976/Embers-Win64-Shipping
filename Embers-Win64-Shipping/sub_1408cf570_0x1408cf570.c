// 函数: sub_1408cf570
// 地址: 0x1408cf570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg3)
int32_t rsi = arg4
void* r8_2 = zx.q(arg2) * 0xa0 + *(arg1 + 0x58)
int32_t rax_2 = *(r8_2 + 0x28) - 1

if (rax_2 u<= arg4)
    rsi = rax_2

sub_1408cf420(arg1, zx.q(rbx.d), *(*(r8_2 + 0x20) + (sx.q(rsi) << 3)))
int64_t result = *(arg1 + 0x38)
*((rbx << 6) + result + 2) = rsi.b
return result
