// 函数: sub_1418c4ff0
// 地址: 0x1418c4ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = EnterCriticalSection(arg1 + 0x28)
int32_t i = 0

if (*(arg1 + 0x10) s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        result = *(arg1 + 8)
        void* rcx_1 = *(rsi_1 + result)
        
        if (rcx_1 != arg2)
            result = sub_1418c4d80(rcx_1)
        
        i += 1
        rsi_1 = &rsi_1[1]
    while (i s< *(arg1 + 0x10))

if (arg1 == -0x28)
    return result

return LeaveCriticalSection(arg1 + 0x28) __tailcall
