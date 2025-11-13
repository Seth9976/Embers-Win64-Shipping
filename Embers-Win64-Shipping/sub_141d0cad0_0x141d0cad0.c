// 函数: sub_141d0cad0
// 地址: 0x141d0cad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi_1 = zx.q((arg2 + 0x1f) u>> 5)
uint32_t rbx_2 = (*(arg1 + 0xc) + 0x1f) u>> 5
void* result = sub_140a30eb0(arg1, zx.q(rsi_1.d), rbx_2, 4, 0)

if (rbx_2 == 0)
    return result

void* rcx = *arg1

if ((rcx.b & 1) != 0)
    rcx = (rcx s>> 1) + arg1

return memset(rcx + (rsi_1 << 2), 0, zx.q(rbx_2 - rsi_1.d) << 2)
