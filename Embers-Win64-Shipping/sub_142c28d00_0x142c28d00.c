// 函数: sub_142c28d00
// 地址: 0x142c28d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_142bf7510(arg2, arg1, 0x10) != 0 && sub_142c25ee0(arg1 + 2, arg2, arg1) != 0
        && sub_142c25cc0(arg1 + 8, arg2, arg1) != 0 && sub_142c25cc0(arg1 + 0xa, arg2, arg1) != 0)
    uint32_t rdx_6 = (zx.d(*(arg1 + 4)) << 8) + zx.d(*(arg1 + 5))
    int32_t rcx_6 = rdx_6 u>> 1 & 0x5b6db6db
    int32_t rdx_8 = rdx_6 - (rcx_6 u>> 1 & 0x5b6db6db) - rcx_6
    uint64_t r15_4 = zx.q((((rdx_8 u>> 3) + rdx_8) & 0xc71c71c7) u% 0x3f)
    uint32_t rdx_12 = (zx.d(*(arg1 + 6)) << 8) + zx.d(*(arg1 + 7))
    int32_t rcx_9 = rdx_12 u>> 1 & 0x5b6db6db
    int32_t rdx_14 = rdx_12 - (rcx_9 u>> 1 & 0x5b6db6db) - rcx_9
    int32_t r14_5 = (((rdx_14 u>> 3) + rdx_14) & 0xc71c71c7) u% 0x3f + r15_4.d
    uint32_t r8_5 = zx.d(*(arg1 + 5)) + (zx.d(*(arg1 + 4)) << 8)
    int32_t rcx_12 = r8_5 u>> 1 & 0x5b6db6db
    uint32_t rdx_18 = (zx.d(*(arg1 + 6)) << 8) + zx.d(*(arg1 + 7))
    int32_t r8_7 = r8_5 - (rcx_12 u>> 1 & 0x5b6db6db) - rcx_12
    int32_t rcx_15 = rdx_18 u>> 1 & 0x5b6db6db
    int32_t rdx_20 = rdx_18 - (rcx_15 u>> 1 & 0x5b6db6db) - rcx_15
    int32_t r9_5 = (((rdx_20 u>> 3) + rdx_20) & 0xc71c71c7) u% 0x3f
        + (((r8_7 u>> 3) + r8_7) & 0xc71c71c7) u% 0x3f
    int32_t rbp_3 = ((zx.d(*(arg1 + 0xc)) << 8) + zx.d(*(arg1 + 0xd)))
        * ((zx.d(*(arg1 + 0xe)) << 8) + zx.d(*(arg1 + 0xf)))
    int32_t r9_6 = r9_5 * 2
    uint32_t result
    
    if (r9_5 == neg.d(r9_5) || rbp_3 u< divu.dp.d(0:0xffffffff, r9_6))
        if (sub_142bf7510(arg2, arg1 + 0x10, rbp_3 * r9_6).b == 0)
            result.b = 0
        else if (sub_142c299a0(arg1 + 4, arg2, arg1, arg1 + 0x10, rbp_3, r14_5).b == 0)
            result.b = 0
        else
            void* rdx_26 = &(arg1 + 0x10)[r15_4 << 1]
            char* r9_8 = &data_14369a5d0
            
            if (rdx_26 u>= arg1 + 0x10)
                r9_8 = rdx_26
            
            if (sub_142c299a0(arg1 + 6, arg2, arg1, r9_8, rbp_3, r14_5).b == 0)
                result.b = 0
            else
                result.b = 1
    else
        result.b = 0
    
    return result

return false
