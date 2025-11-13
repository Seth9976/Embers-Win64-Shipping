// 函数: sub_140a61570
// 地址: 0x140a61570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = sub_140a2d3e0(sub_140a463a0())
void*** rdi = nullptr

if (rax_1 != 0)
    rdi = *(*(&data_143cf0bf8 + (zx.q(rax_1) u>> 0xe << 3)) + (zx.q(rax_1) & 0x3fff) * 0x18 + 8)
    sub_140a24050(rax_1)

if (rdi == 0)
    rdi = sub_140b662c0(0)

void*** rax_3 = j_sub_140a82f30(0x18)

if (rax_3 == 0)
    *arg1 = nullptr
    return arg1

rax_3[1].d = 0
*rax_3 = &data_142e5bfb0
*(rax_3 + 0xc) = 0
*rax_3 = &data_142e5e778
rax_3[2] = rdi
*arg1 = rax_3
return arg1
