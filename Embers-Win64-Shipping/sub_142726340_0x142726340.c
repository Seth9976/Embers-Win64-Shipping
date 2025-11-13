// 函数: sub_142726340
// 地址: 0x142726340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 != 0)
    void* rcx = arg2 + 0x10
    int64_t* r8 = arg3 - arg2
    int32_t i
    
    do
        *(rcx - 8) = *(r8 + rcx - 8)
        *rcx = *(r8 + rcx)
        *(rcx + 8) = *(r8 + rcx + 8)
        *(rcx + 0x10) = *(r8 + rcx + 0x10)
        *(rcx + 0x18) = *(r8 + rcx + 0x18)
        *(rcx + 0x20) = *(r8 + rcx + 0x20)
        rcx += 0x38
        i = arg4
        arg4 -= 1
    while (i != 1)

int32_t result
result.b = 1
return result
