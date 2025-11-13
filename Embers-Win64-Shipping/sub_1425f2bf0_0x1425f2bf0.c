// 函数: sub_1425f2bf0
// 地址: 0x1425f2bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = data_143f70bc0

if (result == 0)
    void*** result_2 = j_sub_140a82f30(0xe8)
    void*** result_1 = result_2
    
    if (result_2 == 0)
        result_1 = nullptr
    else
        *result_1 = &data_14344aac0
        result_1[1] = &data_14344aac8
        result_1[2] = &data_14344aad0
        InitializeCriticalSection(&result_1[3])
        SetCriticalSectionSpinCount(&result_1[3], 0xfa0)
        result_1[8] = 0
        result_1[9] = 0
        InitializeCriticalSection(&result_1[0xa])
        SetCriticalSectionSpinCount(&result_1[0xa], 0xfa0)
        InitializeCriticalSection(&result_1[0xf])
        SetCriticalSectionSpinCount(&result_1[0xf], 0xfa0)
        __builtin_memset(&result_1[0x14], 0, 0x32)
        *(result_1 + 0xd4) = 0
        result_1[0x1b].d = 0
        *(result_1 + 0xdc) = 0
        *(result_1 + 0xdc)
        result_1[0x1c].d = 0
    
    result = result_1
    data_143f70bc0 = result_1

return result
