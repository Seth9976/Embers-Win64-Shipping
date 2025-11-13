// 函数: sub_140532120
// 地址: 0x140532120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = j_sub_140a82f30(0x10)
int64_t* rbx = rax

if (rax == 0)
    rbx = nullptr
else
    *rax = 0
    rax[1] = 0

void*** rax_1 = j_sub_140a82f30(0x18)

if (rax_1 != 0)
    rax_1[1].d = 1
    *rax_1 = &data_142ee2130
    *(rax_1 + 0xc) = 1
    rax_1[2] = rbx

data_143f562e0 = rbx
data_143f562e8 = rax_1
return atexit(sub_142d0cf70) __tailcall
