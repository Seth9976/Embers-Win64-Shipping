// 函数: sub_142413860
// 地址: 0x142413860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_140d3c6e0(arg1 + 8)

if (result != 0)
    int32_t rdx_1 = *(result + 0x5c)
    int32_t r9_4 = (*(result + 0x58) - 1 + rdx_1) & not.d(rdx_1 - 1)
    int32_t rax_2 = 1
    
    if (r9_4 != 0)
        rax_2 = r9_4
    
    int512_t entry_zmm2
    *(arg1 + 0x10) = sub_140a82f30(sx.q(rax_2), 0, entry_zmm2, r9_4)
    result = sub_140be1890(sub_140d3c6e0(arg1 + 8), *(arg1 + 0x10), 1)
    *(arg1 + 0x20) = 1

return result
