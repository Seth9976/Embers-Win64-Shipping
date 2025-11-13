// 函数: sub_142774650
// 地址: 0x142774650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x28) u> 1)
    sub_142773410(arg1 - 0x88, arg2)
    HANDLE hHandle = *(*(arg1 + 0x18) + 0x80)
    
    if (hHandle != -1 && WaitForSingleObject(hHandle, 0).d == 0)
        ResetEvent(*(*(arg1 + 0x18) + 0x80))
        int32_t rdx_1 = *(arg1 + 0x3c)
        *(arg1 + 0x28) = 1
        *(arg1 + 0x38) = 0
        
        if (*(arg1 + 0x3c) != rdx_1)
            sub_1405c5510(arg1 + 0x30, rdx_1)

void* result
result.b = 1
return result
