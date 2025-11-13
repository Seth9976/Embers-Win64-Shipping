// 函数: sub_142c30230
// 地址: 0x142c30230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = arg2[3]

if (*(result + 0x58) != 0)
    void* rsi_1 = arg1 + 8
    uint64_t rdi_1 = 0
    arg2[0xc].d = 0
    uint32_t rbp_4 =
        (zx.d(*(arg1 + 5)) << 0x10) + (zx.d(*(arg1 + 6)) << 8) + (zx.d(*(arg1 + 4)) << 0x18)
    result = zx.q(*(arg1 + 7))
    int32_t i = rbp_4 + result.d
    
    if (rbp_4 != neg.d(result.d))
        do
            void* rax_4 = *arg2
            int128_t* const rax_5
            
            if (rdi_1.d u< *(rax_4 + 0x88))
                rax_5 = *(rax_4 + 0x90) + (rdi_1 << 2)
            else
                rax_5 = &data_14369a5d0
            
            sub_142c2f080(rsi_1, arg2, *rax_5)
            result = arg2[3]
            
            if (*(result + 0x58) == 0)
                break
            
            rdi_1 = zx.q(rdi_1.d + 1)
            result = zx.q(*(rsi_1 + 7))
            rsi_1 = rsi_1 + result + (((((zx.q(*(rsi_1 + 4)) << 8) + zx.q(*(rsi_1 + 5))) << 8)
                + zx.q(*(rsi_1 + 6))) << 8)
        while (rdi_1.d u< i)

return result
