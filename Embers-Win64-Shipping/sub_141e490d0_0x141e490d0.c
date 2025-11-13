// 函数: sub_141e490d0
// 地址: 0x141e490d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x820) = arg5.d
*(arg1 + 0x824) = arg4
*(arg1 + 0x80c) = 0
*(arg1 + 0x768) = data_143dbb1f8.q
*(arg1 + 0x770) = data_143dbb200
sub_141e47a50(arg1 + 0x778, 0)
*(arg1 + 0x810) = 0xfffffffe
*(arg1 + 0x818) = 0xfffffffe
int32_t rax_1 = *(arg1 + 0x770)
int64_t var_18 = *(arg1 + 0x768)
int32_t var_10 = rax_1
int64_t result = sub_141e4b5d0(arg1, &var_18)

if (arg2 != 0)
    void* rax_2 = sub_142475840()
    void* rdx_1 = *(arg2 + 0x10)
    result = sx.q(*(rax_2 + 0x38))
    
    if (result.d s<= *(rdx_1 + 0x38))
        int64_t result_1 = result
        result = *(rdx_1 + 0x30)
        
        if (*(result + (result_1 << 3)) == rax_2 + 0x30 && arg1 != -0x788)
            sub_141e43e20(arg1 + 0x788, *(arg2 + 0x90), zx.d(*(arg2 + 0x94)))
            sub_141e43e20(arg1 + 0x7b0, *(arg2 + 0x98), zx.d(*(arg2 + 0x9c)))
            return sub_141e43e20(arg1 + 0x7d8, *(arg2 + 0xa0), zx.d(*(arg2 + 0xa4)))

return result
