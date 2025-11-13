// 函数: sub_140a61110
// 地址: 0x140a61110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax = j_sub_140a82f30(0x60)
struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rbx_1

if (rax == 0)
    rbx_1 = nullptr
else
    rbx_1 = sub_140a611a0(rax, *arg2, arg3, arg4)

*arg1 = rbx_1
void*** rax_2 = j_sub_140a82f30(0x18)

if (rax_2 != 0)
    rax_2[1].d = 1
    *rax_2 = &data_142e63310
    *(rax_2 + 0xc) = 1
    rax_2[2] = rbx_1

arg1[1] = rax_2
return arg1
