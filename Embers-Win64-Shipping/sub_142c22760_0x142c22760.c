// 函数: sub_142c22760
// 地址: 0x142c22760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_142bf50b0(arg1, 0, 1) != 0)
    uint64_t rax_2 = zx.q(*(arg1 + 0x5c))
    int32_t rcx = *(arg1 + 0x60)
    bool cond:0_1 = rax_2.d u>= rcx
    
    if (rax_2.d != rcx)
        goto label_142c227bc
    
    if (*(arg1 + 0x64) != 0)
        cond:0_1 = rax_2.d u>= rcx
    label_142c227bc:
        int64_t rax_3
        uint64_t rcx_1
        
        if (cond:0_1)
            rcx_1 = zx.q(*(arg1 + 0x64) - 1) * 5
            rax_3 = *(arg1 + 0x78)
        else
            rcx_1 = rax_2 * 5
            rax_3 = *(arg1 + 0x70)
        
        uint64_t rcx_2 = zx.q(*(arg1 + 0x64)) * 5
        int64_t rax_7 = *(arg1 + 0x78)
        *(rax_7 + (rcx_2 << 2)) = *(rax_3 + (rcx_1 << 2))
        *(rax_7 + (rcx_2 << 2) + 0x10) = *(rax_3 + (rcx_1 << 2) + 0x10)
        *(*(arg1 + 0x78) + zx.q(*(arg1 + 0x64)) * 0x14) = arg2
        *(arg1 + 0x64) += 1
        return *(arg1 + 0x78) + zx.q(*(arg1 + 0x64) - 1) * 0x14

__builtin_memset(&data_144017550, 0, 0x14)
return &data_144017550
