// 函数: sub_1420c70e0
// 地址: 0x1420c70e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if (arg2 s< 0x20)
    int32_t rcx = 0
    
    if (arg2 s> 0)
        do
            if (rcx s< 0x20 && (arg1 & 1 << rcx.b) s> 0)
                result.b = 1
                return result
            
            rcx += 1
        while (rcx s< arg2)

result.b = 0
return result
