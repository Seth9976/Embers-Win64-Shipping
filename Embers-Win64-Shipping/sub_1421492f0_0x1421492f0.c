// 函数: sub_1421492f0
// 地址: 0x1421492f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 0x370))

if (result.d s> *(arg2 + 0x4c))
    sub_140775b80(arg2, result.d)
    result = zx.q(*(arg1 + 0x370))

int32_t i = 0

if (result.d s> 0)
    do
        int64_t rdi_1 = sx.q(*(arg2 + 0x48))
        int32_t rax_1 = (rdi_1 + 1).d
        int64_t rbp_2 = sx.q(i) * 0x70 + *(arg1 + 0x368)
        *(arg2 + 0x48) = rax_1
        
        if (rax_1 s> *(arg2 + 0x4c))
            sub_140809370(arg2, rdi_1.d)
        
        result = *(arg2 + 0x40)
        uint64_t result_1 = arg2
        
        if (result != 0)
            result_1 = result
        
        i += 1
        *(result_1 + (rdi_1 << 3)) = rbp_2
    while (i s< *(arg1 + 0x370))

return result
