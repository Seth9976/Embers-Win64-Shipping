// 函数: sub_140d05440
// 地址: 0x140d05440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx_1 = *arg2
int64_t result

if (arg3 == 0)
    result.b = rcx_1 == 0
    return result

int64_t rdx = *arg3

if (rcx_1 == rdx)
    result = 0
    int64_t rcx
    
    if (rcx_1 == 0)
        rcx = 0
    else
        rcx = arg2[1]
    
    if (rdx != 0)
        result = arg3[1]
    
    if (rcx == result)
        result.b = 1
        return result

result.b = 0
return result
