// 函数: sub_140d2aba0
// 地址: 0x140d2aba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x58)
int64_t rsi = 0
*(arg1 + 0x80) = 0
*(arg1 + 0x88) = 0
int32_t r14_1 = *(arg1 + 0x10) - *(arg1 + 0x3c)
*(arg1 + 0x10) = 0

if (*(arg1 + 0x14) != 0)
    sub_1405a5130(arg1 + 8, 0)

*(arg1 + 0x38) = 0xffffffff
*(arg1 + 0x3c) = 0
sub_14059a8e0(arg1 + 0x18, 0)
void* result = zx.q(*(arg1 + 0x50))

if (result.d s> 0)
    uint64_t i_1 = zx.q(result.d)
    uint64_t i
    
    do
        void* result_1 = *(arg1 + 0x48)
        result = arg1 + 0x40
        int64_t rdx_3 = (sx.q(*(arg1 + 0x50)) - 1) & rsi
        
        if (result_1 != 0)
            result = result_1
        
        rsi += 1
        *(result + (rdx_3 << 2)) = 0xffffffff
        i = i_1
        i_1 -= 1
    while (i != 1)

if (r14_1 s> 0)
    result = sub_140d2af80(&data_143e1d990, arg1)

if (arg1 == -0x58)
    return result

return LeaveCriticalSection(arg1 + 0x58)
