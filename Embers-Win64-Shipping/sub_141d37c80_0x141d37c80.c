// 函数: sub_141d37c80
// 地址: 0x141d37c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg3[2]
void* rcx = &arg3[4]
int64_t var_18 = arg2

if (rax != 0)
    rcx = rax

int64_t result = (*arg3)((*(*rcx + 8))(rcx), &var_18)

if (*arg3 == 0)
    return result

void* rax_3 = arg3[2]
void* rcx_2 = &arg3[4]

if (rax_3 != 0)
    rcx_2 = rax_3

jump(*(*rcx_2 + 0x10))
