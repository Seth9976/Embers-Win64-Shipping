// 函数: sub_1425fa250
// 地址: 0x1425fa250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
BOOL result = 0
int64_t zmm1 = float.d(performanceCount) f* data_143d796f8 f+ 16777216.0
bool z

if (0 == *(arg1 + 0x1c4))
    *(arg1 + 0x1c4) = 0
    z = true
else
    result = *(arg1 + 0x1c4)
    z = false

if (not(z))
    *(arg1 + 0x258) = zmm1
    return result

if (not(zmm1 f- *(arg1 + 0x258) f<= 0.01))
    *(arg1 + 0x258) = zmm1
    result = TryEnterCriticalSection(arg1 + 0x210)
    
    if (result != 0)
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

return result
