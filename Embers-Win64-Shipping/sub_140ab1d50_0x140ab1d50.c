// 函数: sub_140ab1d50
// 地址: 0x140ab1d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg1
int64_t* rax_1 = (*(*rcx + 0x28))(rcx)
int64_t rdx = *rax_1
int64_t result = (*(rdx + 0x50))(rax_1, rdx)

if (result != 0)
    return result

jump(*(**arg1 + 0x10))
