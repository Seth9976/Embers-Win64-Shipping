// 函数: sub_140997390
// 地址: 0x140997390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr
int32_t i = 0

if (*(arg3 + 0x20) s> 0)
    int64_t rbp_1 = 0
    int128_t zmm6
    int128_t var_38_1 = zmm6
    
    do
        int64_t* rdi_1 = *arg2
        zmm6 = data_142d3f660
        int64_t rsi_1 = sx.q(rdi_1[1].d)
        result = (rsi_1 + 1).d
        int32_t var_54_1 = (*(*(*(arg3 + 0x18) + rbp_1) + (sx.q(arg2[1].d) << 2))).d
        rdi_1[1].d = result
        
        if (result s> *(rdi_1 + 0xc))
            result = sub_14090a6a0(rdi_1)
        
        rbp_1 += 0x10
        int64_t* rcx_4 = rsi_1 * 0x60 + *rdi_1
        *(rcx_4 + 0x10) = 4.o
        rcx_4[1].d = i
        i += 1
        *(rcx_4 + 0x20) = zmm6
        *rcx_4 = arg1
        int128_t var_68
        *(rcx_4 + 0x30) = var_68
        int128_t var_58
        *(rcx_4 + 0x40) = var_58
        *(rcx_4 + 0x50) = 0.o
    while (i s< *(arg3 + 0x20))

return result
