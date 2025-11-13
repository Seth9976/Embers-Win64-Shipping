// 函数: sub_14044f060
// 地址: 0x14044f060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_8
int64_t rbx = *sub_140b58260(&arg_8, u"Matrix", 1)
void*** rax_1 = j_sub_140a82f30(0x10)

if (rax_1 == 0)
    return sub_140bda860(rbx, rax_1)

rax_1[1].d = 0x40
*rax_1 = &data_142ea2e20
*(rax_1 + 0xc) = 0x10
return sub_140bda860(rbx, rax_1)
