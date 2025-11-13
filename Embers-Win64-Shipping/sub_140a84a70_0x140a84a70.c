// 函数: sub_140a84a70
// 地址: 0x140a84a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi_1 = zx.q((arg2 + 0x1f) u>> 5)
uint32_t rbx_2 = (*(arg1 + 0x2c) + 0x1f) u>> 5
void* rdi = arg1
int64_t result = sub_1408390d0(arg1, rsi_1.d, rbx_2, 4)

if (rbx_2 == 0)
    return result

void* rax = *(rdi + 0x20)

if (rax != 0)
    rdi = rax

return memset(rdi + (rsi_1 << 2), 0, zx.q(rbx_2 - rsi_1.d) << 2)
