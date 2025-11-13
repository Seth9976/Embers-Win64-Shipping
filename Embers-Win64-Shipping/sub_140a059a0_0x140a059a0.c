// 函数: sub_140a059a0
// 地址: 0x140a059a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_141f219e0(arg1)

if (arg1[0x88] != 0)
    result = sub_140d23dc0(arg1, 0x30)
    
    if (result.b != 0)
        result = arg1[0x88]
        *(result + 8) |= 1

return result
