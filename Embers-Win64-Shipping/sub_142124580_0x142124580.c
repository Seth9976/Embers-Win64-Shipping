// 函数: sub_142124580
// 地址: 0x142124580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *arg1
int32_t result = 0

if (r8 != 0)
    void* rcx = &arg1[1]
    
    do
        if (*rcx == arg2)
            return result
        
        result += 1
        rcx += 4
    while (result u< r8)

return -1
