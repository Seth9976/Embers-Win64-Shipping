// 函数: sub_142bf3c40
// 地址: 0x142bf3c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r9 = zx.q(arg2)
void* const result

if (*(*(arg1 + 0x40) + (r9 << 3) + 0x120) == (&data_14369a420)[r9])
    int64_t rcx = *(arg1 + 0x10)
    
    if (rcx != 0 && rcx != &data_14369a0e0)
        result = sub_142bf3c40(rcx)
    
    if (rcx == 0 || rcx == &data_14369a0e0 || result.b == 0)
        result.b = 0
        return result

result.b = 1
return result
