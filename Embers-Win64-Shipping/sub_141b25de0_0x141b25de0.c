// 函数: sub_141b25de0
// 地址: 0x141b25de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = sub_140d3c6e0(arg1 + 8)

if (result != 0)
    int32_t r8_1 = *(result + 0x5c)
    int32_t rcx_1 = 1
    int32_t r9_4 = (result[0xb].d - 1 + r8_1) & not.d(r8_1 - 1)
    
    if (r9_4 != 0)
        rcx_1 = r9_4
    
    int512_t entry_zmm2
    int64_t rax = sub_140a82f30(sx.q(rcx_1), 0, entry_zmm2, r9_4)
    *(arg1 + 0x10) = rax
    int64_t r9_5 = *result
    result = (*(r9_5 + 0x2a0))(result, rax, 1, r9_5)
    *(arg1 + 0x20) = 1

return result
