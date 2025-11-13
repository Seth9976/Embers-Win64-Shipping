// 函数: sub_1420c7120
// 地址: 0x1420c7120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if (arg2 s< 0x20)
    int32_t rcx = 0
    
    if (arg2 s> 0)
        while (true)
            if (rcx s>= 0x20 || (arg1 & 1 << rcx.b) s<= 0)
                result.b = 1
                return result
            
            rcx += 1
            
            if (rcx s>= arg2)
                break
            
            continue

result.b = 0
return result
