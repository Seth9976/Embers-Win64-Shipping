// 函数: sub_140a4dfe0
// 地址: 0x140a4dfe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0xa0)
void*** result

if (rax == 0)
    result = nullptr
else
    int16_t* const r9
    
    if (*(arg1 + 0x18) == 0)
        r9 = &data_142d40450
    else
        r9 = *(arg1 + 0x10)
    
    result = sub_140a3bc80(rax, arg1, *(arg1 + 8), r9, arg5, arg6, arg2, arg3, arg4)

if (test_bit(arg4, 8))
    EnterCriticalSection(arg1 + 0x30)
    int64_t rbp_1 = sx.q(*(arg1 + 0x28))
    int32_t rax_4 = (rbp_1 + 1).d
    *(arg1 + 0x28) = rax_4
    
    if (rax_4 s> *(arg1 + 0x2c))
        sub_1405a4d70(arg1 + 0x20)
    
    *(*(arg1 + 0x20) + (rbp_1 << 3)) = result
    
    if (arg1 != -0x30)
        LeaveCriticalSection(arg1 + 0x30)

return result
