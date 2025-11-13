// 函数: sub_140a47f80
// 地址: 0x140a47f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x48)
int64_t* result_1 = *(arg1 + 0x70)
int64_t* result

if (result_1 != 0)
    int64_t rax_1 = *result_1
    *(arg1 + 0x70) = rax_1
    
    if (rax_1 == 0)
        *(arg1 + 0x78) = 0
    
    result = result_1
else
    result = nullptr

if (arg1 != -0x48)
    LeaveCriticalSection(arg1 + 0x48)

return result
