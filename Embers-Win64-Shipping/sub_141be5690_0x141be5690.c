// 函数: sub_141be5690
// 地址: 0x141be5690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = *(arg1 + 0x178)
int64_t result = sx.q(*(arg1 + 0x180))
int64_t arg_8 = arg2
void* rcx = &r8[result]

if (r8 != rcx)
    while (true)
        result = *r8
        
        if (*(result + 0x408) == arg2)
            break
        
        r8 = &r8[1]
        
        if (r8 == rcx)
            return result
    
    if (r8 != 0 && result != 0)
        *(result + 0x780) = arg3

return result
