// 函数: sub_1425b6c30
// 地址: 0x1425b6c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 != 0)
    void* rcx = arg2 + 4
    int64_t* r8 = arg3 - arg2
    int32_t i
    
    do
        *(rcx - 4) = *(r8 + rcx - 4)
        *rcx = *(r8 + rcx)
        *(rcx + 8) = *(r8 + rcx + 8)
        rcx += 0x14
        i = arg4
        arg4 -= 1
    while (i != 1)

int64_t result
result.b = 1
return result
