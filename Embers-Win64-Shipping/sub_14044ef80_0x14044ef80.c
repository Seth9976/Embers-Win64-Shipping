// 函数: sub_14044ef80
// 地址: 0x14044ef80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_8
int64_t rbx = *sub_140b58260(&arg_8, u"IntVector", 1)
void*** rax_1 = j_sub_140a82f30(0x10)

if (rax_1 == 0)
    return sub_140bda860(rbx, rax_1)

rax_1[1].d = 0xc
*rax_1 = &data_142ea3670
*(rax_1 + 0xc) = 4
return sub_140bda860(rbx, rax_1)
