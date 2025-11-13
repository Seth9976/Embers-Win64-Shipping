// 函数: sub_1425ea640
// 地址: 0x1425ea640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg3 = 0
wchar16* lpWideCharStr = *arg2
PSTR lpMultiByteStr = nullptr

if (lpWideCharStr != 0)
    int64_t rax_1 = -1
    
    do
        rax_1 += 1
    while (lpWideCharStr[rax_1] != 0)
    
    if (rax_1 != 0)
        _configthreadlocale(1)
        int32_t rax_2 =
            WideCharToMultiByte(0xfde9, 0, lpWideCharStr, 0xffffffff, nullptr, 0, nullptr, nullptr)
        
        if (rax_2 != 0)
            sub_1425f27c0(&lpMultiByteStr, sx.q(rax_2 + 8))
            sub_1425f27c0(&lpMultiByteStr, 
                sx.q(WideCharToMultiByte(0xfde9, 0, lpWideCharStr, 0xffffffff, lpMultiByteStr, 
                    rax_2 + 8, nullptr, nullptr) - 1))
            PSTR pv = lpMultiByteStr
            *arg1 = 0
            *arg1 = sub_1425ec740(pv)
            
            if (pv != 0)
                CoTaskMemFree(pv)
        else
            *arg1 = 0
            *arg1 = sub_1425ec740(nullptr)
        
        return arg1

*arg1 = 0
*arg1 = sub_1425ec740(nullptr)
return arg1
