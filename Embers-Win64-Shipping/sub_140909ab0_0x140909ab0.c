// 函数: sub_140909ab0
// 地址: 0x140909ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *arg2
*arg2 = *(r8 + 0x10)
void* rax_1 = *(r8 + 0x10)

if (*(rax_1 + 0x19) == 0)
    *(rax_1 + 8) = arg2

*(r8 + 8) = arg2[1]
void* rax_3 = *arg1

if (arg2 == *(rax_3 + 8))
    *(rax_3 + 8) = r8
    *(r8 + 0x10) = arg2
    arg2[1] = r8
    return rax_3

void** rax_4 = arg2[1]

if (arg2 != rax_4[2])
    *rax_4 = r8
    *(r8 + 0x10) = arg2
    arg2[1] = r8
    return rax_4

rax_4[2] = r8
*(r8 + 0x10) = arg2
arg2[1] = r8
return rax_4
