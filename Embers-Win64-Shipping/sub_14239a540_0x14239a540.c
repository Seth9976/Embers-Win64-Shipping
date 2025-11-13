// 函数: sub_14239a540
// 地址: 0x14239a540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

BOOL result = arg1[0xb].d
int32_t rdi = arg2

if (result != 0)
    void* lpCriticalSection
    int64_t r8_1
    bool cond:3_1
    
    if (arg2 != 0 && (arg2 != 1 || data_143f138f4 != 0))
        lpCriticalSection = &arg1[2]
        
        if (arg2 == 4)
            result, r8_1 = TryEnterCriticalSection(lpCriticalSection)
            rdi = 2
            result.b = result != 0
            cond:3_1 = result.b == 0
            goto label_14239a5a8
        
        EnterCriticalSection(lpCriticalSection)
    label_14239a5b5:
        int64_t rsi
        rsi.b = arg1[0xb].d == 3
        arg1[0xb].d = 3
        int32_t i
        
        do
            if (rsi.b != 0 || *(arg1 + 0x54) != rsi.b)
                r8_1 = 0
            else
                r8_1.b = 1
            
            i, r8_1 = (*(*arg1 + 0x30))(arg1, zx.q(rdi), r8_1)
        while (i == 3)
        
        if (rsi.b == 0)
            arg1[0xb].d = i
        
        return LeaveCriticalSection(lpCriticalSection)
    
    lpCriticalSection = &arg1[2]
    result, r8_1 = TryEnterCriticalSection(lpCriticalSection)
    cond:3_1 = result == 0
label_14239a5a8:
    
    if (not(cond:3_1))
        goto label_14239a5b5

return result
