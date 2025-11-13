// 函数: sub_141d8e5c0
// 地址: 0x141d8e5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x80)
void*** rdi = rax

if (rax == 0)
    rdi = nullptr
else
    *rdi = &data_1432388f0
    sub_1423ba590(&rdi[1])
    *rdi = &data_143238b28
    rdi[1] = &data_143238cc0
    __builtin_memset(&rdi[2], 0, 0x1c)
    __builtin_memset(&rdi[6], 0, 0x14)
    rdi[9] = &data_143238a88
    rdi[0xa] = 0
    rdi[0xb].d = 0
    __builtin_memset(&rdi[0xc], 0, 0x15)
    rdi[0xf] = 0

*arg2 = rdi
void*** rax_1 = j_sub_140a82f30(0x18)

if (rax_1 == 0)
    rax_1 = nullptr
else
    rax_1[1].d = 1
    *rax_1 = &data_142d42ea8
    *(rax_1 + 0xc) = 1
    rax_1[2] = rdi

arg2[1] = rax_1
return arg2
