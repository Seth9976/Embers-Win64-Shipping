// 函数: sub_1425ea510
// 地址: 0x1425ea510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg3 = 0
char* lpMultiByteStr = *arg2
wchar16* lpWideCharStr = nullptr

if (lpMultiByteStr != 0)
    int64_t rax_1 = -1
    
    do
        rax_1 += 1
    while (lpMultiByteStr[rax_1] != 0)
    
    if (rax_1 != 0)
        _configthreadlocale(1)
        int32_t rax_2 = MultiByteToWideChar(0xfde9, 0, lpMultiByteStr, 0xffffffff, nullptr, 0)
        
        if (rax_2 != 0)
            sub_1425f2870(&lpWideCharStr, sx.q(rax_2 + 8))
            sub_1425f2870(&lpWideCharStr, 
                sx.q(MultiByteToWideChar(0xfde9, 0, lpMultiByteStr, 0xffffffff, lpWideCharStr, 
                    rax_2 + 8) - 1))
            wchar16* pv = lpWideCharStr
            *arg1 = 0
            *arg1 = sub_1425ec7a0(pv)
            
            if (pv != 0)
                CoTaskMemFree(pv)
        else
            *arg1 = 0
            *arg1 = sub_1425ec7a0(nullptr)
        
        return arg1

*arg1 = 0
*arg1 = sub_1425ec7a0(nullptr)
return arg1
