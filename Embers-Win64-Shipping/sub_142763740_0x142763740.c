// 函数: sub_142763740
// 地址: 0x142763740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rax_3 = *(arg1 + 0x10)
int64_t* rcx_2 = (zx.q(*rax_3) << 4) + *(arg1 + 0x30)
*(arg1 + 0x10) = &rax_3[1]

if (rcx_2[1].d == 0)
    jump(*(*nullptr + 0x48))

jump(*(**rcx_2 + 0x48))
