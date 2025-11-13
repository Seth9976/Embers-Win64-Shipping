// 函数: sub_14101be70
// 地址: 0x14101be70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&arg1[6])
int32_t rax_1 = arg1[0x14].d + 1
int64_t* r14 = *(*(*arg1 + 0x20) + 0x4e8)
arg1[0x14].d = rax_1

if (rax_1 s> *(arg1 + 0xa4))
    sub_1405c4e40(&arg1[0x13])
    rax_1 = arg1[0x14].d

int64_t rdx_2 = sx.q(rax_1) << 5
void* rsi_2 = arg1[0x13] + rdx_2
*(rsi_2 - 0x18) = (*(*r14 + 0x18))(r14, rdx_2)
int32_t rcx_3 = *(arg2 + 0x2c)
*(rsi_2 - 0xc) = rcx_3
*(rsi_2 - 0x10) = *(arg2 + 0x28)
*(rsi_2 - 8) = (*(arg1 + 0x74) << rcx_3.b) - *(arg2 + 0x58)
void* result = *(arg2 + 0x10)

if (*(result + 0x28) != 0)
    *(rsi_2 - 0x20) = result

arg1[0xc].d += 1

if (arg1 == -0x30)
    return result

return LeaveCriticalSection(&arg1[6])
