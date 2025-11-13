// 函数: sub_142a4be90
// 地址: 0x142a4be90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *(arg1 + 8)
int32_t r9 = 0
char* result = *(r10 + 8)

if (*result == 0)
    result = nullptr
else
    int64_t rax_1 = -1
    
    do
        rax_1 += 1
    while (result[rax_1] != 0)
    
    r9 = rax_1.d
    *(r10 + 8) = &result[sx.q(rax_1.d + 1)]

if (arg2 != 0)
    *arg2 = r9

return result
