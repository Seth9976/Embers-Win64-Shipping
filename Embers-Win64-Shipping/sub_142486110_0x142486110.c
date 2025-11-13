// 函数: sub_142486110
// 地址: 0x142486110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 != 0)
    void* rcx = arg2 + 0x18
    char* r8 = arg3 - arg2
    int32_t i
    
    do
        *(rcx - 4) = *(r8 + rcx - 4)
        *(rcx - 0xc) = *(r8 + rcx - 0xc)
        char rax_2 = *(r8 + rcx) ^ *rcx
        rcx += 0x58
        *(rcx - 0x58) ^= rax_2 & 1
        *(rcx - 0x40) = *(r8 + rcx - 0x40)
        *(rcx - 0x38) = *(r8 + rcx - 0x38)
        *(rcx - 0x34) = *(r8 + rcx - 0x34)
        *(rcx - 0x2c) = *(r8 + rcx - 0x2c)
        *(rcx - 0x28) = *(r8 + rcx - 0x28)
        *(rcx - 0x24) = *(r8 + rcx - 0x24)
        *(rcx - 0x20) = *(r8 + rcx - 0x20)
        i = arg4
        arg4 -= 1
    while (i != 1)

int32_t result
result.b = 1
return result
