// 函数: sub_142a4be60
// 地址: 0x142a4be60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rdx = **(arg1 + 8)
int32_t result = 0

while (*rdx != 0)
    result += 1
    int64_t rcx = -1
    
    do
        rcx += 1
    while (rdx[rcx] != 0)
    
    rdx = &rdx[1 + rcx]

return result
