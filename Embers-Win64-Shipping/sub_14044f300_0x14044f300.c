// 函数: sub_14044f300
// 地址: 0x14044f300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_8
int64_t rbx = *sub_140b58260(&arg_8, u"RandomStream", 1)
void*** rax_1 = j_sub_140a82f30(0x10)

if (rax_1 == 0)
    return sub_140bda860(rbx, rax_1)

rax_1[1].d = 8
*rax_1 = &data_142ea2340
*(rax_1 + 0xc) = 4
return sub_140bda860(rbx, rax_1)
