// 函数: sub_141f4cf10
// 地址: 0x141f4cf10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result_1 = *(arg1 + 0x719)
char result = result_1
char rdi = not.b(result_1) & 1

if (rdi == 0 && (result_1 & 1) != 0)
    int64_t* rcx = *(arg1 + 0x658)
    
    if (rcx != 0)
        sub_141e05a00(rcx, 0)
        result = *(arg1 + 0x719)

result = (result & 0xfe) | rdi
*(arg1 + 0x719) = result
return result
