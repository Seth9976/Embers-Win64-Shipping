// 函数: sub_142c09890
// 地址: 0x142c09890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 4) == 0)
    int64_t rax
    rax.b = 0
    return rax

int32_t rax_1 = *(arg1 + 0x1c)

if (rax_1 != 2)
    if (rax_1 == 3)
        *(arg1 + 0x1c) = 1
    
    if (*(arg1 + 0x1c) != 2)
        int64_t var_10 = *(arg1 + 0x10)
        char const* const var_18 = "current data is -> %p\n"
        int64_t var_20 = 0
        int64_t var_28 = 0
        int64_t rax_3 = j_sub_140a82f30(zx.q(*(arg1 + 0x18)))
        
        if (rax_3 == 0)
            return rax_3
        
        int64_t var_10_1 = *(arg1 + 0x10)
        char const* const var_18_1 = "dupped successfully -> %p\n"
        int64_t var_20_1 = 0
        int64_t var_28_1 = 0
        memcpy(rax_3, *(arg1 + 0x10), *(arg1 + 0x18))
        sub_142c09860(arg1)
        *(arg1 + 0x28) = j_sub_140a74f90
        void (* rax_5)(int64_t _Block)
        rax_5.b = 1
        *(arg1 + 0x10) = rax_3
        *(arg1 + 0x20) = rax_3
        *(arg1 + 0x1c) = 2
        return &data_140dc0e01

rax_1.b = 1
return rax_1
