// 函数: sub_14209b890
// 地址: 0x14209b890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_140ce3290(arg1)
int32_t i = 0

if (arg1[0x14].d s> 0)
    result = 0
    
    do
        int64_t rcx = arg1[0x13]
        
        if (not(0.00100000005f f<= *(result + rcx + 0x18)))
            *(result + rcx + 0x18) = 0x3f800000
        
        i += 1
        result += 0x20
    while (i s< arg1[0x14].d)

return result
