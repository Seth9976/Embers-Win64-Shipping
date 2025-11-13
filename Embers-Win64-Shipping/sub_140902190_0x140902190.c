// 函数: sub_140902190
// 地址: 0x140902190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (*(arg1 + 0x124) s> 0 && *(arg1 + 0x120) s> 0)
    int64_t rbp_1 = 0
    int32_t* rdi_1 = *arg2
    result = &rdi_1[arg2[1]]
    uint64_t rsi_2 = sx.q(arg2[1].d) << 2 u>> 2
    
    if (rdi_1 u> result)
        rsi_2 = 0
    
    if (rsi_2 != 0)
        do
            int64_t r9_1 = sx.q(*(arg1 + 0x120))
            int32_t r11_1 = *(arg1 + 0x124)
            int64_t r8 = r9_1
            int32_t r10_1 = *rdi_1
            
            if (r9_1 s< 0)
                r8 = r9_1 + 1
            
            int64_t r8_1 = r8 s>> 1
            int64_t var_40_1 = divs.dp.q(sx.o(r8_1 + zx.q(r11_1 * r10_1) * 0x989680), r9_1)
            int128_t var_28 = 1.o
            int64_t var_30_1 = divs.dp.q(sx.o(zx.q((r10_1 + 1) * r11_1) * 0x989680 + r8_1), r9_1)
            int128_t var_18_1 = 0.o
            result = sub_1405d66b0(arg3, &var_28)
            rdi_1 = &rdi_1[1]
            rbp_1 += 1
        while (rbp_1 != rsi_2)

return result
