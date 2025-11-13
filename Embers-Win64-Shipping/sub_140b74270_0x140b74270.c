// 函数: sub_140b74270
// 地址: 0x140b74270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (*(arg1 + 0x70) == 0 && *(arg1 + 0x71) != 0)
    uint32_t numberOfBytesTransferred = 0
    
    if (GetOverlappedResult(*(arg1 + 8), arg1 + 0x50, &numberOfBytesTransferred, 1) == 0)
        if (GetLastError().d != 0x26)
            result.b = 0
            return result
        
        *(arg1 + 0x70) = 1
    else
        *(arg1 + 0x20) += zx.q(numberOfBytesTransferred)
        result = *(arg1 + 0x20)
        *(arg1 + 0x71) = 0
        *(arg1 + 0x60) = result.d
        *(arg1 + 0x64) = (result u>> 0x20).d
        
        if (result u>= *(arg1 + 0x10))
            *(arg1 + 0x70) = 1

result.b = 1
return result
