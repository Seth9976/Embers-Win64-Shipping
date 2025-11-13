// 函数: sub_141f6a680
// 地址: 0x141f6a680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = (*(*arg1 + 0x860))()
void* rax_2

if (rax_1 != 0)
    rax_2 = sub_140cdb8f0(*(rax_1 + 0x10), arg4)

if (rax_1 == 0 || rax_2 == 0)
    *arg2 = 0
    arg2[1].d = 0
else
    int64_t* rcx_2 = sx.q(*(rax_2 + 0x4c)) + rax_1
    int64_t var_28 = 0
    int32_t var_20_1 = 0
    sub_141a1d730(rcx_2, arg2, arg3, &var_28)

return arg2
