// 函数: sub_141d37d40
// 地址: 0x141d37d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg2[2]
void* rcx = &arg2[4]

if (rax != 0)
    rcx = rax

int64_t result = (*arg2)((*(*rcx + 8))(rcx))

if (*arg2 == 0)
    return result

void* rax_3 = arg2[2]
void* rcx_2 = &arg2[4]

if (rax_3 != 0)
    rcx_2 = rax_3

jump(*(*rcx_2 + 0x10))
