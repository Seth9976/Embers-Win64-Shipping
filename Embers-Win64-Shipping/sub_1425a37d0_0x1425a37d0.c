// 函数: sub_1425a37d0
// 地址: 0x1425a37d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 != 0)
    void* rcx = arg2 + 0x18
    char* r8 = arg3 - arg2
    int32_t i
    
    do
        *(rcx - 4) = *(r8 + rcx - 4)
        *(rcx - 0xc) = *(r8 + rcx - 0xc)
        char rax_2 = *(r8 + rcx) ^ *rcx
        rcx += 0x40
        *(rcx - 0x40) ^= rax_2 & 1
        *(rcx - 0x28) = *(r8 + rcx - 0x28)
        *(rcx - 0x20) = *(r8 + rcx - 0x20)
        *(rcx - 0x1c) = *(r8 + rcx - 0x1c)
        i = arg4
        arg4 -= 1
    while (i != 1)

int32_t result
result.b = 1
return result
