// 函数: sub_141d37c00
// 地址: 0x141d37c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2
int64_t* result = sub_141d37b40(arg1 + 0x20, arg2)

if (*rbx == 0)
    return result

void* rax = rbx[2]
void* rcx_1 = &rbx[4]

if (rax != 0)
    rcx_1 = rax

jump(*(*rcx_1 + 0x10))
