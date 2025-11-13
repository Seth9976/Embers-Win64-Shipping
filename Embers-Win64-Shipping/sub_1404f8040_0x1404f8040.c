// 函数: sub_1404f8040
// 地址: 0x1404f8040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x18)
void*** rbx

if (rax == 0)
    rbx = nullptr
else
    rbx = sub_141b4a8b0(rax, nullptr)

void*** rax_2 = j_sub_140a82f30(0x18)

if (rax_2 != 0)
    rax_2[1].d = 1
    *rax_2 = &data_142e4cf50
    *(rax_2 + 0xc) = 1
    rax_2[2] = rbx

data_143f2dd38 = rbx
data_143f2dd40 = rax_2
return atexit(sub_142cf56f0) __tailcall
