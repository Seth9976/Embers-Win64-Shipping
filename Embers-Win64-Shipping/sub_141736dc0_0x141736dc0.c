// 函数: sub_141736dc0
// 地址: 0x141736dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(arg2)
int64_t r12 = sx.q(arg3)
void* r10 = arg1

if (result s< r12)
    int128_t zmm6
    int128_t var_48_1 = zmm6
    void* r9 = arg4 + 0xac
    uint128_t zmm7
    uint128_t var_58_1 = zmm7
    int128_t zmm8
    int128_t var_68_1 = zmm8
    uint128_t zmm9
    uint128_t var_78_1 = zmm9
    int128_t zmm10
    int128_t var_88_1 = zmm10
    int128_t zmm11
    int128_t var_98_1 = zmm11
    uint128_t zmm12
    uint128_t var_a8_1 = zmm12
    int32_t* rbx_1 = result * 0x1c
    int64_t i_1 = r12 - result
    int64_t i
    
    do
        int64_t rdi_1 = *(arg4 + 0x20)
        int64_t result_2 = 0
        int64_t result_1 = -1
        zmm6 = 0x7f7fffff
        void* rcx = arg4 + 0x3c
        
        if (arg4 + 0x3c != r9)
            zmm7 = *(rbx_1 + rdi_1 + 4)
            zmm8 = *(rbx_1 + rdi_1 + 8)
            zmm9 = *(rbx_1 + rdi_1 + 0xc)
            zmm10 = *(rbx_1 + rdi_1 + 0x10)
            zmm11 = *(rbx_1 + rdi_1 + 0x14)
            zmm12 = *(rbx_1 + rdi_1 + 0x18)
            uint128_t zmm0
            uint128_t zmm1
            
            do
                zmm1 = zx.o(*(rcx + 0xc))
                int32_t rax = *(rcx + 8)
                uint128_t zmm3 = zx.o(*rcx)
                float temp0_1 = _mm_max_ss(zmm10.d, zmm1.d)
                int32_t rax_1 = *(rcx + 0x14)
                result = result_2
                float zmm4 = temp0_1 f- _mm_min_ss(zmm7.d, zmm3.d).d
                int128_t zmm5 = _mm_max_ss(zmm11.d, _mm_shuffle_ps(zmm1, zmm1, 0x55).d)
                int64_t temp0_6 = _mm_min_ss(zmm8.q.d, _mm_shuffle_ps(zmm3, zmm3, 0x55).d)
                zmm0 = __minss_xmmss_memss(zmm9.d, rax)
                zmm5.d = zmm5.d f- temp0_6.d
                zmm1.d = __maxss_xmmss_memss(zmm12.d, rax_1).d f- zmm0.d
                zmm5.d = zmm5.d f* zmm5.d
                zmm5.d = zmm5.d f+ zmm4 * zmm4
                zmm1.d = zmm1.d f* zmm1.d
                zmm5.d = zmm5.d f+ zmm1.d
                zmm5.d = zmm5.d f- *(rcx + 0x34)
                bool cond:0_1 = zmm6.d f<= zmm5.d
                zmm5 = _mm_min_ss(zmm5.d, zmm6.d)
                
                if (cond:0_1)
                    result = result_1
                
                result_2 += 1
                rcx += 0x38
                result_1 = result
                zmm6 = zmm5
            while (rcx != r9)
            
            if (result != -1)
                int64_t rbp_1 = result_1 * 0x38
                void* rsi_2 = sx.q(*(arg4 + rbp_1 + 0x6c)) * 0xb0 + *(r10 + 0xb0)
                int64_t r15_1 = sx.q(*(rsi_2 + 0x28))
                int32_t rax_3 = (r15_1 + 1).d
                *(rsi_2 + 0x28) = rax_3
                
                if (rax_3 s> *(rsi_2 + 0x2c))
                    sub_1405c50f0(rsi_2 + 0x20)
                    r10 = arg1
                    r9 = arg4 + 0xac
                
                int32_t* rcx_3 = r15_1 * 0x1c + *(rsi_2 + 0x20)
                *rcx_3 = *(rbx_1 + rdi_1)
                *(rcx_3 + 4) = *(rbx_1 + rdi_1 + 4)
                rcx_3[3] = *(rbx_1 + rdi_1 + 0xc)
                *(rcx_3 + 0x10) = *(rbx_1 + rdi_1 + 0x10)
                rcx_3[6] = *(rbx_1 + rdi_1 + 0x18)
                int64_t zmm2 = *(rbx_1 + rdi_1 + 8)
                zmm0 = *(rbx_1 + rdi_1 + 0xc)
                zmm1 = __minss_xmmss_memss((*(arg4 + rbp_1 + 0x54)).d, *(rbx_1 + rdi_1 + 4))
                int64_t temp0_11 = __minss_xmmss_memss(zmm2.d, *(arg4 + rbp_1 + 0x58))
                zmm0 = __minss_xmmss_memss(zmm0.d, *(arg4 + rbp_1 + 0x5c))
                *(arg4 + rbp_1 + 0x54) = (_mm_unpacklo_ps(zmm1, temp0_11)).q
                *(arg4 + rbp_1 + 0x5c) = zmm0.d
                zmm2 = *(rbx_1 + rdi_1 + 0x14)
                zmm0 = *(rbx_1 + rdi_1 + 0x18)
                zmm1 = __maxss_xmmss_memss((*(rbx_1 + rdi_1 + 0x10)).d, *(arg4 + rbp_1 + 0x60))
                int64_t temp0_15 = __maxss_xmmss_memss(zmm2.d, *(arg4 + rbp_1 + 0x64))
                result = zx.q(__maxss_xmmss_memss(zmm0.d, *(arg4 + rbp_1 + 0x68)).d)
                *(arg4 + rbp_1 + 0x60) = (_mm_unpacklo_ps(zmm1, temp0_15)).q
                *(arg4 + rbp_1 + 0x68) = result.d
        
        rbx_1 = &rbx_1[7]
        i = i_1
        i_1 -= 1
    while (i != 1)

*(r10 + 0x88) += arg3 - arg2
return result
