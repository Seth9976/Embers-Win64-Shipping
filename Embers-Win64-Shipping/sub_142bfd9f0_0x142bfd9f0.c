// 函数: sub_142bfd9f0
// 地址: 0x142bfd9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_22 = *(arg1 + 8)

if (rax_22 != 0x10000)
    if (rax_22 == 0x20000)
        char* r10_1 = *(arg1 + 0x10)
        
        if (arg3 u< (zx.d(*r10_1) << 8) + zx.d(r10_1[1]))
            uint64_t rax_8 = zx.q(arg3)
            uint64_t rcx_5 =
                zx.q((zx.d(r10_1[(rax_8 << 1) + 2]) << 8) + zx.d(r10_1[(rax_8 << 1) + 3]))
            
            if (rcx_5.d u< 0x102)
                uint64_t rdx_2 = zx.q(*(&data_14369de10 + (rcx_5 << 2)))
                *(arg2 + 8) = &(*".notdef")[rdx_2]
                *(arg2 + 0x10) = *(&data_14369de10 + (zx.q((rcx_5 + 1).d) << 2)) - rdx_2.d - 1
                return arg2
            
            uint64_t rcx_6 = zx.q(rcx_5.d - 0x102)
            
            if (rcx_6.d u< *(arg1 + 0x18))
                char* rcx_8 = zx.q(*(*(arg1 + 0x20) + (rcx_6 << 2))) + *(arg1 + 0x28)
                *(arg2 + 8) = &rcx_8[1]
                *(arg2 + 0x10) = zx.d(*rcx_8)
                return arg2
else if (arg3 u< 0x102)
    uint64_t rdx_1 = zx.q(*(&data_14369de10 + (zx.q(arg3) << 2)))
    *(arg2 + 8) = &(*".notdef")[rdx_1]
    *(arg2 + 0x10) = *(&data_14369de10 + (zx.q(arg3 + 1) << 2)) - rdx_1.d - 1
    return arg2

*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
return arg2
