// 函数: sub_1405bf230
// 地址: 0x1405bf230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg1[0x3f]

if (rax != 0)
    *(rax + 0x30) = 0
    arg1[0x3f] = 0

int64_t* rcx = arg1[0x3e]

if (rcx != 0)
    (*(*rcx + 0x3a0))(rcx, 0)
    arg1[0x3e] = 0

return sub_141f42e90(arg1, arg2) __tailcall
