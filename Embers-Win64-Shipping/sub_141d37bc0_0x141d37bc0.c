// 函数: sub_141d37bc0
// 地址: 0x141d37bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = sub_141d37b40(arg2 + 0x3c0, arg3)

if (*arg3 == 0)
    return result

void* rax = arg3[2]
void* rcx_1 = &arg3[4]

if (rax != 0)
    rcx_1 = rax

jump(*(*rcx_1 + 0x10))
