// 函数: sub_140538000
// 地址: 0x140538000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_8
int64_t rbx = *sub_140b58260(&arg_8, u"PostProcessSettings", 1)
void*** rax_1 = j_sub_140a82f30(0x10)

if (rax_1 == 0)
    return sub_140bda860(rbx, rax_1)

rax_1[1].d = 0x540
*rax_1 = &data_14333e2d0
*(rax_1 + 0xc) = 0x10
return sub_140bda860(rbx, rax_1)
