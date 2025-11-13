// 函数: sub_140d0bd30
// 地址: 0x140d0bd30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi_2 = zx.q((arg1[1].d + 0x1f) u>> 5)
int64_t rcx = 4

if (*(arg1 + 0xc) + 0x1f u>= 0x20 || rsi_2 u> 4)
    rcx = rsi_2 + 0x10 + ((rsi_2 * 3) u>> 3)

uint32_t rbx_1 = (sub_140a846a0(rcx << 2, 0) u>> 2).d

if (rsi_2.d s> rbx_1)
    rbx_1 = 0x7fffffff

uint64_t rsi_4 = zx.q((arg2 + 0x1f) u>> 5)
*(arg1 + 0xc) = rbx_1 << 5
void* result = sub_140a30eb0(arg1, zx.q(rsi_4.d), rbx_1, 4, 0)

if (rbx_1 == 0 || rbx_1 u<= rsi_4.d)
    return result

void* rcx_6 = *arg1

if ((rcx_6.b & 1) != 0)
    rcx_6 = (rcx_6 s>> 1) + arg1

return memset(rcx_6 + (rsi_4 << 2), 0, zx.q(rbx_1 - rsi_4.d) << 2)
