// 函数: sub_1429e00e0
// 地址: 0x1429e00e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x3760) != 0)
    int32_t i = 0
    *(arg1 + 0x3760) = 0
    
    if (*(arg1 + 0x3770) s> 0)
        int64_t* rsi_1 = nullptr
        
        do
            ReleaseSemaphore(*(rsi_1 + *(arg1 + 0x3808)), 1, nullptr)
            HANDLE rbp_1 = *(rsi_1 + *(arg1 + 0x3800))
            
            if (WaitForSingleObjectEx(rbp_1, 0xffffffff, 0) == WAIT_OBJECT_0)
                CloseHandle(rbp_1)
            
            i += 1
            rsi_1 = &rsi_1[1]
        while (i s< *(arg1 + 0x3770))
    
    int32_t i_1 = 0
    
    if (*(arg1 + 0x3770) s> 0)
        int64_t* rsi_2 = nullptr
        
        do
            HANDLE hObject = *(rsi_2 + *(arg1 + 0x3808))
            
            if (hObject != 0)
                CloseHandle(hObject)
            
            i_1 += 1
            rsi_2 = &rsi_2[1]
        while (i_1 s< *(arg1 + 0x3770))
    
    if (*(arg1 + 0x3770) != 0)
        HANDLE hObject_1 = *(arg1 + 0x3810)
        
        if (hObject_1 != 0)
            CloseHandle(hObject_1)
    
    sub_1429dde60(*(arg1 + 0x3800))
    void* rcx_5 = *(arg1 + 0x3808)
    *(arg1 + 0x3800) = 0
    sub_1429dde60(rcx_5)
    void* rcx_6 = *(arg1 + 0x37f0)
    *(arg1 + 0x3808) = 0
    sub_1429dde60(rcx_6)
    void* rcx_7 = *(arg1 + 0x37f8)
    *(arg1 + 0x37f0) = 0
    sub_1429dde60(rcx_7)
    int32_t rdx_1 = *(arg1 + 0x1e74)
    *(arg1 + 0x37f8) = 0
    sub_1429e0700(arg1, rdx_1)

return DeleteCriticalSection(arg1 + 0x3798) __tailcall
