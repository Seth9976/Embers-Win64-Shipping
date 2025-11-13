// 函数: sub_141e89970
// 地址: 0x141e89970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = EnterCriticalSection(arg1 + 0x48)
void* rdx = *(arg1 + 0x18)

if (arg2 != rdx)
    if (*(arg1 + 0x20) == arg2)
        *(arg1 + 0x20) = *(arg2 + 0x30)
    
    result = *(arg2 + 0x38)
    void* rcx_1 = *(arg2 + 0x30)
    *(arg1 + 0x18) = arg2
    *(arg2 + 0x30) = 0
    *(arg2 + 0x38) = rdx
    
    if (rdx != 0)
        *(rdx + 0x30) = arg2
    
    if (result != rcx_1)
        if (result != 0)
            *(result + 0x30) = rcx_1
        
        if (rcx_1 != 0)
            *(rcx_1 + 0x38) = result

if (arg1 == -0x48)
    return result

return LeaveCriticalSection(arg1 + 0x48)
