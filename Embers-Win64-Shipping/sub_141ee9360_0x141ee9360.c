// 函数: sub_141ee9360
// 地址: 0x141ee9360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax_3

if (((arg1[1].d u>> 4).b & 1) == 0)
    int64_t* rcx = arg1[4]
    rax_3 = (*(*rcx + 0xd0))(rcx)

int64_t rdi

if (((arg1[1].d u>> 4).b & 1) != 0 || rax_3 != 0)
    rdi.b = 1
else
    rdi.b = 0

if ((*(*arg1 + 0xf0))(arg1) == 0 && rdi.b != 0 && sub_140ce24f0(arg1) != 0)
    return true

return false
