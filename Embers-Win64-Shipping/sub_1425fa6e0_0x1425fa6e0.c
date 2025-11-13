// 函数: sub_1425fa6e0
// 地址: 0x1425fa6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

BOOL result = TryEnterCriticalSection(arg1 + 0x210)

if (result == 0)
    return result

int16_t* const rcx_1 = &data_142d40450
int16_t* rdx

if (arg2[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *arg2

if (*(arg1 + 0x28) != 0)
    rcx_1 = *(arg1 + 0x20)

if (sub_140a54510(rcx_1, rdx) == 0)
    void var_18
    
    if (arg1 + 0x248 != &var_18)
        int64_t rcx_2 = *(arg1 + 0x248)
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        *(arg1 + 0x248) = 0
        *(arg1 + 0x250) = 0
    
    *(arg1 + 0x1c4)
    *(arg1 + 0x1c4) = 1

return LeaveCriticalSection(arg1 + 0x210)
