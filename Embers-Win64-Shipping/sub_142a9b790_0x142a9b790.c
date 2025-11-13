// 函数: sub_142a9b790
// 地址: 0x142a9b790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *arg2

if (result == 0x19)
    *arg2 = 0
else if (result s> 0)
    return result

int32_t rax = sub_141d90190(*(arg1 + 0x78))
int64_t* rcx_1 = *(arg1 + 0x78)
*(arg1 + 0x80) = rax
*(arg1 + 0xb0) = 0
return sub_142a9a320(rcx_1, arg1 + 0x88, arg2)
