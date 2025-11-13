// 函数: sub_1419f0110
// 地址: 0x1419f0110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x58)
*(arg1 + 0x80) = arg2
void var_18

if (arg1 + 0x88 != &var_18)
    int64_t rcx_1 = *(arg1 + 0x88)
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    *(arg1 + 0x88) = 0
    *(arg1 + 0x90) = 0

int32_t rsi = *(arg1 + 0x10)
int32_t rdi_2 = *(arg1 + 0x3c)
int32_t result = sub_1408fa6d0(arg1 + 8, *(arg1 + 0x80))

if (rsi - rdi_2 s> 0)
    result = *(arg1 + 0x10)
    
    if (result == *(arg1 + 0x3c))
        result = sub_140d2af80(&data_143e1d990, arg1)

if (arg1 == -0x58)
    return result

return LeaveCriticalSection(arg1 + 0x58)
