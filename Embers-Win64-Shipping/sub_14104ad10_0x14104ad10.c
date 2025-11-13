// 函数: sub_14104ad10
// 地址: 0x14104ad10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2[0xa].b != 0)
    jump(*(*arg1 + 0x750))

void*** rcx_2 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
void* rax_1 = &rcx_2[0xa]

if (rax_1 u> data_143f02bd0)
    sub_140b0e3d0(&data_143f02bc8, 0x58)
    rcx_2 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    rax_1 = &rcx_2[0xa]

data_143f02bac += 1
data_143f02bc8 = rax_1
*data_143f02ba0 = rcx_2
data_143f02ba0 = &rcx_2[1]
return sub_14103f070(rcx_2, arg2) __tailcall
