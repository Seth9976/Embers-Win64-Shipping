// 函数: sub_142826a04
// 地址: 0x142826a04
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = arg2[1] + 0x18
void* var_18 = rax_1
int64_t r8_1 = *arg2 + *(rax_1 + 0x18)
int64_t rax_5 = *(*(rax_1 + 8) + ((r8_1 u>> 4 & (*(rax_1 + 0x10) - 1)) << 3))
void* rcx
rcx.b = *((zx.q(r8_1.d) & 0xf) + rax_5)
rcx.b -= 4
char temp0 = rcx.b
rcx.b = neg.b(rcx.b)
return zx.q(sbb.d(rax_5.d, rax_5.d, temp0 != 0))
