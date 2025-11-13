// 函数: sub_142580090
// 地址: 0x142580090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 != 0)
    void* rcx = arg2 + 0x6c
    char* r8 = arg3 - arg2
    int32_t i
    
    do
        *(rcx - 4) = *(r8 + rcx - 4)
        *rcx = *(r8 + rcx)
        *(rcx + 1) = *(r8 + rcx + 1)
        rcx += 0x70
        i = arg4
        arg4 -= 1
    while (i != 1)

return 1
