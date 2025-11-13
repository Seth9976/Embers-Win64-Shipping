// 函数: sub_140aa3690
// 地址: 0x140aa3690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140abd990(arg1 + 0x10)
uint32_t rcx_1 = zx.d(*(arg1 + 0x28))

if (rcx_1 == 0)
    sub_140abd990(arg1 + 0x10)
    int64_t* rcx_6 = *(arg1 + 0x10)
    sub_140a8e690(arg2, (*(*rcx_6 + 0x10))(rcx_6))
    return arg2

if (rcx_1 != 1)
    *arg2 = 0
    arg2[1] = 0
    return arg2

sub_140abd990(arg1 + 0x10)
int64_t* rcx_3 = *(arg1 + 0x10)
sub_140a8ef80(arg2, (*(*rcx_3 + 0x10))(rcx_3))
return arg2
