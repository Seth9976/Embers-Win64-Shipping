// 函数: sub_140997790
// 地址: 0x140997790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr
int32_t i = 0

if (*(arg3 + 0x20) s> 0)
    int64_t* r14_1 = nullptr
    
    do
        int64_t* rdi_1 = *arg2
        int64_t rsi_1 = sx.q(rdi_1[1].d)
        result = (rsi_1 + 1).d
        int128_t var_88_1 = *(*(r14_1 + *(arg3 + 0x18)) + sx.q(arg2[1].d) * 0x10)
        rdi_1[1].d = result
        
        if (result s> *(rdi_1 + 0xc))
            result = sub_14090a6a0(rdi_1)
        
        r14_1 = &r14_1[2]
        int64_t* rcx_5 = rsi_1 * 0x60 + *rdi_1
        *(rcx_5 + 0x10) = 1.o
        rcx_5[1].d = i
        i += 1
        *(rcx_5 + 0x20) = var_88_1
        *rcx_5 = arg1
        int128_t var_58
        *(rcx_5 + 0x30) = var_58
        int128_t var_48
        *(rcx_5 + 0x40) = var_48
        *(rcx_5 + 0x50) = 0.o
    while (i s< *(arg3 + 0x20))

return result
