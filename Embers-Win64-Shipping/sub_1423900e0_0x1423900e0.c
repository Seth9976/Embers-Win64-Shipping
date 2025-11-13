// 函数: sub_1423900e0
// 地址: 0x1423900e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x580)
int64_t rax_1

if (arg2 != 0)
    rax_1 = sx.q(*(arg2 + 0x34))

int64_t* result

if (arg2 == 0 || rax_1.d s< 0 || rax_1.d s>= *(arg1 + 0x18))
    result = nullptr
else
    int64_t* result_1 = rax_1 * 0xd8 + *(arg1 + 0x10)
    result = nullptr
    
    if (*result_1 == arg2)
        result = result_1

if (arg1 != -0x580)
    LeaveCriticalSection(arg1 + 0x580)

return result
