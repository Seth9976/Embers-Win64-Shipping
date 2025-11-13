// 函数: sub_141910730
// 地址: 0x141910730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = data_143eff600
EnterCriticalSection(rdi + 0x15bd0)
int64_t rsi = sx.q(*(rdi + 0x15bc8))
int32_t rax = (rsi + 1).d
*(rdi + 0x15bc8) = rax

if (rax s> *(rdi + 0x15bcc))
    sub_1405a4d70(rdi + 0x15bc0)

int64_t result = *(rdi + 0x15bc0)
*(result + (rsi << 3)) = arg1

if (rdi == -0x15bd0)
    return result

return LeaveCriticalSection(rdi + 0x15bd0)
