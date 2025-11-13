// 函数: sub_142b06ad0
// 地址: 0x142b06ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 8)
int16_t arg_8
int16_t* r8 = &arg_8
void* rax = *(rcx + 0x10)

if (*(rax + 0x12) != 0)
    arg_8 = 0x7d7e
    void arg_a
    r8 = &arg_a
    *(rax + 0x12) = 0

*r8 = **(rcx + 0x28)
return sub_142b6b230(arg1, &arg_8, r8.d - &arg_8 + 1, arg2, arg3)
