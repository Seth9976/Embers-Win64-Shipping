// 函数: sub_142c90f80
// 地址: 0x142c90f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

PSTR result = nullptr

if (arg1 != 0)
    int32_t rax_1 = WideCharToMultiByte(0xfde9, 0, arg1, 0xffffffff, nullptr, 0, nullptr, nullptr)
    int64_t rsi_1 = sx.q(rax_1)
    
    if (rax_1 s> 0)
        PSTR lpMultiByteStr = data_143ccb898(rsi_1 * 2)
        result = lpMultiByteStr
        
        if (lpMultiByteStr != 0 && WideCharToMultiByte(0xfde9, 0, arg1, 0xffffffff, lpMultiByteStr, 
                rsi_1.d, nullptr, nullptr) == 0)
            data_143ccb8a0(result)
            return nullptr

return result
