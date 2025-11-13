// 函数: sub_140997da0
// 地址: 0x140997da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr
int128_t zmm6 = arg2[2].d
int32_t i = 0

if (*(arg3 + 0x20) s> 0)
    int64_t* rdi_1 = *arg2
    int64_t r12_1 = sx.q(arg2[1].d)
    int64_t r13_1 = sx.q(*(arg2 + 0xc))
    int64_t* r14_1 = nullptr
    int128_t zmm7
    int128_t var_48_1 = zmm7
    
    do
        int64_t rcx = *(r14_1 + *(arg3 + 0x18))
        int32_t rdx = *(rcx + (r12_1 << 2))
        int32_t rax_1 = *(rcx + (r13_1 << 2))
        
        if ((*(arg3 + 0x10) & 1) != 0)
            uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(rdx))
            uint128_t zmm1
            zmm1.d = _mm_cvtepi32_ps(zx.o(rax_1 - rdx)).d f* zmm6.d
            zmm1.d = zmm1.d f+ zmm0.d
            rax_1 = int.d(zmm1.d)
        else if (zmm6.d f<= 0.5f)
            rax_1 = rdx
        
        int64_t rsi_1 = sx.q(rdi_1[1].d)
        zmm7 = data_142d3f660
        int32_t var_70_1 = rax_1
        result = (rsi_1 + 1).d
        rdi_1[1].d = result
        
        if (result s> *(rdi_1 + 0xc))
            result = sub_14090a6a0(rdi_1)
        
        r14_1 = &r14_1[2]
        int64_t* rcx_4 = rsi_1 * 0x60 + *rdi_1
        *(rcx_4 + 0x10) = 5.o
        rcx_4[1].d = i
        i += 1
        *(rcx_4 + 0x20) = zmm7
        *rcx_4 = arg1
        uint128_t var_88
        *(rcx_4 + 0x30) = var_88
        uint128_t var_78
        *(rcx_4 + 0x40) = var_78
        *(rcx_4 + 0x50) = 0.o
    while (i s< *(arg3 + 0x20))

return result
