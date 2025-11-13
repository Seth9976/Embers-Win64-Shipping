// 函数: sub_142c90ed0
// 地址: 0x142c90ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

wchar16* result = nullptr

if (arg1 != 0)
    int32_t rax_1 = MultiByteToWideChar(0xfde9, MB_ERR_INVALID_CHARS, arg1, 0xffffffff, nullptr, 0)
    int64_t rsi_1 = sx.q(rax_1)
    
    if (rax_1 s> 0)
        wchar16* lpWideCharStr = data_143ccb898(rsi_1 * 2)
        result = lpWideCharStr
        
        if (lpWideCharStr != 0
                && MultiByteToWideChar(0xfde9, 0, arg1, 0xffffffff, lpWideCharStr, rsi_1.d) == 0)
            data_143ccb8a0(result)
            return 0

return result
