// 函数: sub_142a46080
// 地址: 0x142a46080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rdx = *(arg1 + 0x78)
int32_t result = 0

while (*rdx != 0)
    result += 1
    int64_t rcx = -1
    
    do
        rcx += 1
    while (rdx[rcx] != 0)
    
    rdx = &rdx[1 + rcx]

return result
