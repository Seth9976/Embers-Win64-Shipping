// 函数: sub_140998070
// 地址: 0x140998070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr
int32_t i = 0
int128_t zmm7 = arg2[2].d

if (*(arg3 + 0x20) s> 0)
    int64_t* rdi_1 = *arg2
    int64_t r12_1 = sx.q(arg2[1].d)
    int64_t r13_1 = sx.q(*(arg2 + 0xc))
    int64_t* r15_1 = nullptr
    int128_t zmm6
    int128_t var_38_1 = zmm6
    
    do
        int64_t rsi_1 = sx.q(rdi_1[1].d)
        zmm6 = data_142d3f660
        int64_t rcx = *(r15_1 + *(arg3 + 0x18))
        int64_t rax_1 = *(rcx + (r12_1 << 3))
        
        if (zmm7.d f> 0.5f)
            rax_1 = *(rcx + (r13_1 << 3))
        
        result = (rsi_1 + 1).d
        rdi_1[1].d = result
        
        if (result s> *(rdi_1 + 0xc))
            result = sub_14090a6a0(rdi_1)
        
        r15_1 = &r15_1[2]
        int64_t* rcx_4 = rsi_1 * 0x60 + *rdi_1
        *(rcx_4 + 0x10) = 7.o
        rcx_4[1].d = i
        i += 1
        *(rcx_4 + 0x20) = zmm6
        *rcx_4 = arg1
        int128_t var_88
        *(rcx_4 + 0x30) = var_88
        int128_t var_78
        *(rcx_4 + 0x40) = var_78
        *(rcx_4 + 0x50) = rax_1.o
    while (i s< *(arg3 + 0x20))

return result
