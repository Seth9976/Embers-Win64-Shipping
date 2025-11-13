// 函数: sub_142624b90
// 地址: 0x142624b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg3 + 8)
*(arg2 + 8) = rdx

if (*(arg3 + 8) != 0)
    int64_t rax_2 = (*(*arg1 + 0x10))(arg1, zx.q(rdx * 2))
    *(arg2 + 0x18) = rax_2
    
    if (rax_2 == 0)
        return 0x80000004
    
    memset(rax_2, 0, sx.q(*(arg2 + 8)) * 2)
    int32_t i = 0
    
    if (*(arg2 + 8) s> 0)
        int16_t* r8_2 = nullptr
        
        do
            uint32_t rcx_1 = zx.d(*(r8_2 + *(arg3 + 0x30)))
            
            if (rcx_1 s< *(arg2 + 4))
                *(r8_2 + *(arg2 + 0x18)) = *(*(arg2 + 0x10) + (zx.q(rcx_1.w) << 1))
            
            i += 1
            r8_2 = &r8_2[1]
        while (i s< *(arg2 + 8))

return 0x40000000
