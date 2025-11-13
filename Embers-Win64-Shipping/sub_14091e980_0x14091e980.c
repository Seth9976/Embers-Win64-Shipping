// 函数: sub_14091e980
// 地址: 0x14091e980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x2e8)
int64_t rsi = sx.q(*(arg1 + 0x318))
int32_t rax = (rsi + 1).d
*(arg1 + 0x318) = rax

if (rax s> *(arg1 + 0x31c))
    sub_14092f860(arg1 + 0x310)

int64_t rsi_1 = rsi * 0xe8
void*** result = rsi_1 + *(arg1 + 0x310)

if (rsi_1 == neg.q(*(arg1 + 0x310)))
    result = nullptr
else
    *result = &data_142e20cf8
    result[1] = *(arg3 + 8)
    void* rax_2 = *(arg3 + 0x10)
    result[2] = rax_2
    
    if (rax_2 != 0)
        *(rax_2 + 8) += 1
    
    sub_140596d10(&result[3], arg3 + 0x18)
    sub_140919960(&result[5], arg3 + 0x28)
    result[0x13] = *(arg3 + 0x98)
    void* rax_4 = *(arg3 + 0xa0)
    result[0x14] = rax_4
    
    if (rax_4 != 0)
        *(rax_4 + 8) += 1
    
    result[0x15].d = *(arg3 + 0xa8)
    *(result + 0xac) = *(arg3 + 0xac)
    *result = &data_142e20d00
    result[0x16] = arg2
    result[0x17].d = 0xffffffff
    *(result + 0xbc) = 0
    __builtin_memset(&result[0x18], 0, 0x24)

if (arg1 != -0x2e8)
    LeaveCriticalSection(arg1 + 0x2e8)

return result
