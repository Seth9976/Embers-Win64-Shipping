// 函数: sub_1420576d0
// 地址: 0x1420576d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_140d3c6e0(arg1 + 8)

if (result != 0)
    int64_t rax = sub_140d3c6e0(arg1 + 8)
    uint96_t zmm0 = (*(arg1 + 0x10)).12
    int64_t var_38 = *(arg1 + 0x20)
    void* rcx_3 = *(arg1 + 0x28)
    void* var_30_1 = rcx_3
    
    if (rcx_3 != 0)
        *(rcx_3 + 8) += 1
    
    zmm0.q(sx.q(zmm0:8.d) + rax, zx.q(arg2), arg3, &var_38, *(arg1 + 0x30))
    result.b = 1

return result
