// 函数: sub_142a28ab0
// 地址: 0x142a28ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = *(arg2 + 0x38)
int32_t rbx = (arg3 << 3).d
int64_t r11 = *(arg2 + 0x40)
int64_t rdi = *(arg2 + 0x48)
int32_t rsi = *(arg2 + 0x24)
int32_t r9 = *(arg2 + 0x10)
uint32_t r8 = arg4 << 3
int32_t rdx_1 = rbx s>> (*(arg1 + 0xc)).b
int32_t rax_2 = r8 s>> (*(arg1 + 8)).b
*(arg1 + 0x18) = r9
*(arg1 + 0x10) = sx.q(rax_2 + rdx_1 * r9) + r10
*(arg1 + 0x90) = sx.q((r8 s>> (*(arg1 + 0x88)).b) + (rbx s>> (*(arg1 + 0x8c)).b) * rsi) + r11
*(arg1 + 0x98) = rsi
int64_t result = sx.q((r8 s>> (*(arg1 + 0x108)).b) + (rbx s>> (*(arg1 + 0x10c)).b) * rsi) + rdi
*(arg1 + 0x110) = result
*(arg1 + 0x118) = rsi
return result
