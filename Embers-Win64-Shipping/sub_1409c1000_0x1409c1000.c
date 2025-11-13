// 函数: sub_1409c1000
// 地址: 0x1409c1000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = *(arg1 + 0x28)
void* var_120 = r15
void* var_130
sub_14090aa40(r15 + 0x150, &var_130, data_143f35cc8)
void* var_128
sub_14090a980(r15 + 0x1a8, &var_128, data_143f360f0)
void* var_118
sub_14090aa40(r15 + 0x2b0, &var_118, data_143f36130)
void* var_110
sub_14090aa40(r15 + 0x2b0, &var_110, data_143f36138)
void* var_108
sub_14090aa40(r15 + 0x2b0, &var_108, data_143f36140)
void* var_100
sub_14090aa40(r15 + 0x2b0, &var_100, data_143f36148)
int32_t* r12 = *arg2
uint64_t result = &r12[sx.q(arg2[1].d)]
uint64_t result_2 = result

if (r12 != result)
    uint128_t zmm7
    uint128_t var_68_1 = zmm7
    uint128_t zmm8
    uint128_t var_78_1 = zmm8
    uint128_t zmm9
    uint128_t var_88_1 = zmm9
    uint128_t zmm10
    uint128_t var_98_1 = zmm10
    uint128_t zmm11
    uint128_t var_a8_1 = zmm11
    uint128_t zmm12
    uint128_t var_b8_1 = zmm12
    uint128_t zmm13
    uint128_t var_c8_1 = zmm13
    uint128_t zmm14
    uint128_t var_d8_1 = zmm14
    
    do
        int64_t rsi_1 = *(r15 + 0xe0)
        uint128_t zmm2 = zx.o(0)
        int64_t r14_1 = sx.q(*r12)
        uint128_t zmm3 = zx.o(0)
        void* r13_1 = var_130
        uint128_t zmm4 = zx.o(0)
        int64_t r9_1 = 0
        int64_t rdi_1 = r14_1 * 5
        int32_t* rdx_6 = *(rsi_1 + (rdi_1 << 3))
        int64_t rbx_1 = sx.q(*(rsi_1 + (rdi_1 << 3) + 8))
        uint64_t r10_2 = rbx_1 << 2 u>> 2
        
        if (rdx_6 u> &rdx_6[rbx_1])
            r10_2 = 0
        
        if (r10_2 != 0)
            int64_t r8_6 = **(r13_1 + 0x18)
            
            do
                int64_t rax_3 = sx.q(*rdx_6)
                r9_1 += 1
                rdx_6 = &rdx_6[1]
                int64_t rcx_7 = sx.q(*(*(r15 + 0x38) + rax_3 * 0x18)) * 3
                zmm2.d = zmm2.d f+ *(r8_6 + (rcx_7 << 2))
                zmm3.d = zmm3.d f+ *(r8_6 + (rcx_7 << 2) + 4)
                zmm4.d = zmm4.d f+ *(r8_6 + (rcx_7 << 2) + 8)
            while (r9_1 != r10_2)
        
        zmm7 = zx.o(0)
        int32_t* rbx_2 = *(rsi_1 + (rdi_1 << 3) + 0x10)
        zmm8 = zx.o(0)
        int64_t rdi_2 = 0
        uint64_t r11_3 = sx.q(*(rsi_1 + (rdi_1 << 3) + 0x18)) << 2 u>> 2
        int32_t var_170_1 = 0
        zmm9 = zx.o(0)
        uint128_t zmm1
        zmm1.d = 1f f/ _mm_cvtepi32_ps(zx.o(rbx_1.d)).d
        
        if (rbx_2 u> &rbx_2[sx.q(*(rsi_1 + (rdi_1 << 3) + 0x18))])
            r11_3 = 0
        
        int32_t var_16c_1 = 0
        zmm10 = zx.o(0)
        zmm3.d = zmm3.d f* zmm1.d
        zmm11 = zx.o(0)
        zmm2.d = zmm2.d f* zmm1.d
        zmm12 = zx.o(0)
        zmm4.d = zmm4.d f* zmm1.d
        zmm13 = zx.o(0)
        int32_t var_13c_1 = zmm3.d
        zmm3 = zx.o(0)
        int32_t var_140_1 = zmm2.d
        zmm14 = zx.o(0)
        int32_t result_1 = zmm4.d
        int32_t arg_18 = 0
        int64_t arg_8
        uint128_t zmm0
        uint128_t zmm5
        
        if (r11_3 != 0)
            int64_t rax_7 = *(r15 + 0x38)
            int64_t r14_2 = *(r15 + 0xa8)
            int64_t rsi_2 = **(r13_1 + 0x18)
            int64_t r13_2 = **(var_128 + 0x18)
            
            do
                int64_t r8_8 = sx.q(*rbx_2) * 2
                int64_t r10_3 = sx.q(*(r14_2 + (r8_8 << 3)))
                int64_t r9_2 = sx.q(*(r14_2 + (r8_8 << 3) + 4))
                zmm7.d = (*(r13_2 + (r9_2 << 3) + 4)).d f- *(r13_2 + (r10_3 << 3) + 4)
                int64_t rdx_7 = sx.q(*(rax_7 + r10_3 * 0x18)) * 3
                zmm1 = *(rsi_2 + (rdx_7 << 2) + 4)
                zmm2 = *(rsi_2 + (rdx_7 << 2))
                int64_t rax_13 = sx.q(*(rax_7 + r9_2 * 0x18)) * 3
                zmm0.d = (*(rsi_2 + (rax_13 << 2) + 4)).d f- zmm1.d
                zmm3.d = (*(rsi_2 + (rax_13 << 2))).d f- zmm2.d
                arg_8.d = zmm0.d
                zmm0 = *(rsi_2 + (rdx_7 << 2) + 8)
                int64_t rdx_8 = sx.q(*(r14_2 + (r8_8 << 3) + 8))
                zmm4.d = (*(rsi_2 + (rax_13 << 2) + 8)).d f- zmm0.d
                int32_t var_144_1 = zmm3.d
                zmm8.d = (*(r13_2 + (rdx_8 << 3))).d f- *(r13_2 + (r10_3 << 3))
                zmm5.d = (*(r13_2 + (rdx_8 << 3) + 4)).d f- *(r13_2 + (r10_3 << 3) + 4)
                int32_t arg_10 = zmm4.d
                int64_t rax_15 = sx.q(*(rax_7 + rdx_8 * 0x18)) * 3
                zmm4.d = (*(rsi_2 + (rax_15 << 2))).d f- zmm2.d
                zmm2.d = (*(rsi_2 + (rax_15 << 2) + 4)).d f- zmm1.d
                zmm1.d = (*(rsi_2 + (rax_15 << 2) + 8)).d f- zmm0.d
                int32_t arg_20 = zmm4.d
                zmm4.d = (*(r13_2 + (r9_2 << 3))).d f- *(r13_2 + (r10_3 << 3))
                int32_t var_174_1 = zmm1.d
                zmm1.d = zmm2.d f* arg_10
                int32_t var_178_1 = zmm2.d
                zmm2 = var_174_1
                zmm0 = zmm2
                zmm2.d = zmm2.d f* zmm3.d
                zmm0.d = zmm0.d f* arg_8.d
                zmm1.d = zmm1.d f- zmm0.d
                zmm0.d = var_170_1.d f+ zmm1.d
                zmm1 = arg_20
                var_170_1 = zmm0.d
                zmm0.d = zmm1.d f* arg_10
                zmm1.d = zmm1.d f* arg_8.d
                zmm2.d = zmm2.d f- zmm0.d
                zmm0.d = var_16c_1.d f+ zmm2.d
                zmm2.d = zmm5.d f* zmm4.d
                var_16c_1 = zmm0.d
                zmm0.d = var_178_1.d f* zmm3.d
                zmm1.d = zmm1.d f- zmm0.d
                zmm0.d = arg_18.d f+ zmm1.d
                arg_18 = zmm0.d
                zmm0.d = zmm8.d f* zmm7.d
                zmm2.d = zmm2.d f- zmm0.d
                
                if (zmm2.d f!= 0f)
                    zmm3.d = 1f f/ zmm2.d
                else
                    zmm3 = zx.o(0)
                
                zmm1.d = zmm5.d f* var_144_1
                rbx_2 = &rbx_2[1]
                rdi_2 += 1
                zmm0.d = zmm7.d f* arg_20
                zmm2.d = zmm5.d f* arg_8.d
                zmm5.d = zmm5.d f* arg_10
                zmm1.d = zmm1.d f- zmm0.d
                zmm0 = zmm7
                zmm7.d = zmm7.d f* var_174_1
                zmm0.d = zmm0.d f* var_178_1
                zmm1.d = zmm1.d f* zmm3.d
                zmm5.d = zmm5.d f- zmm7.d
                zmm2.d = zmm2.d f- zmm0.d
                zmm0.d = zmm8.d f* var_144_1
                zmm9.d = zmm9.d f+ zmm1.d
                zmm5.d = zmm5.d f* zmm3.d
                zmm2.d = zmm2.d f* zmm3.d
                zmm1.d = zmm4.d f* arg_20
                zmm11.d = zmm11.d f+ zmm5.d
                zmm10.d = zmm10.d f+ zmm2.d
                zmm2.d = zmm4.d f* var_178_1
                zmm4.d = zmm4.d f* var_174_1
                zmm1.d = zmm1.d f- zmm0.d
                zmm0 = zmm8
                zmm8.d = zmm8.d f* arg_10
                zmm0.d = zmm0.d f* arg_8.d
                zmm1.d = zmm1.d f* zmm3.d
                zmm4.d = zmm4.d f- zmm8.d
                zmm2.d = zmm2.d f- zmm0.d
                zmm12.d = zmm12.d f+ zmm1.d
                zmm4.d = zmm4.d f* zmm3.d
                zmm2.d = zmm2.d f* zmm3.d
                zmm14.d = zmm14.d f+ zmm4.d
                zmm13.d = zmm13.d f+ zmm2.d
            while (rdi_2 != r11_3)
            
            zmm7 = var_170_1
            zmm8 = var_16c_1
            zmm3 = arg_18
            r14_1 = sx.q(*r12)
            r15 = var_120
        
        zmm2.d = zmm7.d f* zmm7.d
        zmm0.d = zmm8.d f* zmm8.d
        zmm1.d = zmm3.d f* zmm3.d
        zmm2.d = zmm2.d f+ zmm0.d
        zmm2.d = zmm2.d f+ zmm1.d
        int32_t var_168_1
        int32_t var_160_1
        
        if (zmm2.d f!= 1f)
            if (zmm2.d f>= 9.99999994e-09f)
                zmm3.d = zmm2.d
                zmm5 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
                zmm3.d = zmm3.d f* 0.5f
                zmm0.d = zmm5.d f* zmm5.d
                zmm1.d = zmm3.d f* zmm0.d
                zmm2.d = 0.5f f- zmm1.d
                zmm0.d = zmm5.d f* zmm2.d
                zmm5.d = zmm5.d f+ zmm0.d
                zmm1.d = zmm5.d f* zmm5.d
                zmm3.d = zmm3.d f* zmm1.d
                zmm4.d = 0.5f f- zmm3.d
                zmm0.d = zmm5.d f* zmm4.d
                zmm5.d = zmm5.d f+ zmm0.d
                arg_8.d = zmm5.d
                zmm1 = zmm5
                zmm0.d = zmm5.d f* zmm7.d
                zmm5.d = zmm5.d f* arg_18
                var_168_1 = zmm0.d
                zmm1.d = zmm1.d f* zmm8.d
                var_160_1 = zmm5.d
            else
                zmm1 = data_143dbb1fc
                var_168_1 = data_143dbb1f8.d
                var_160_1 = data_143dbb200.d
            
            int32_t var_164_2 = zmm1.d
        else
            var_168_1 = zmm7.d
            int32_t var_164_1 = zmm8.d
            var_160_1 = zmm3.d
        
        int64_t rdx_9 = r14_1 * 3
        zmm2.d = zmm9.d f* zmm9.d
        zmm1.d = zmm11.d f* zmm11.d
        int64_t rcx_11 = **(var_118 + 0x18)
        *(rcx_11 + (rdx_9 << 2)) = var_168_1.q
        zmm0.d = zmm10.d f* zmm10.d
        *(rcx_11 + (rdx_9 << 2) + 8) = var_160_1
        zmm2.d = zmm2.d f+ zmm0.d
        zmm2.d = zmm2.d f+ zmm1.d
        int32_t var_15c_1
        int32_t var_154_1
        
        if (zmm2.d f!= 1f)
            if (zmm2.d f>= 9.99999994e-09f)
                zmm3.d = zmm2.d
                zmm5 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
                zmm3.d = zmm3.d f* 0.5f
                zmm0.d = zmm5.d f* zmm5.d
                zmm1.d = zmm3.d f* zmm0.d
                zmm2.d = 0.5f f- zmm1.d
                zmm0.d = zmm5.d f* zmm2.d
                zmm5.d = zmm5.d f+ zmm0.d
                zmm1.d = zmm5.d f* zmm5.d
                zmm3.d = zmm3.d f* zmm1.d
                zmm4.d = 0.5f f- zmm3.d
                zmm0.d = zmm5.d f* zmm4.d
                zmm5.d = zmm5.d f+ zmm0.d
                arg_8.d = zmm5.d
                zmm1 = zmm5
                zmm0.d = zmm5.d f* zmm9.d
                zmm5.d = zmm5.d f* zmm11.d
                var_15c_1 = zmm0.d
                zmm1.d = zmm1.d f* zmm10.d
                var_154_1 = zmm5.d
            else
                zmm1 = data_143dbb1fc
                var_15c_1 = data_143dbb1f8.d
                var_154_1 = data_143dbb200.d
            
            int32_t var_158_2 = zmm1.d
        else
            var_15c_1 = zmm9.d
            int32_t var_158_1 = zmm10.d
            var_154_1 = zmm11.d
        
        zmm2.d = zmm12.d f* zmm12.d
        zmm1.d = zmm14.d f* zmm14.d
        int64_t rcx_12 = **(var_110 + 0x18)
        *(rcx_12 + (rdx_9 << 2)) = var_15c_1.q
        zmm0.d = zmm13.d f* zmm13.d
        *(rcx_12 + (rdx_9 << 2) + 8) = var_154_1
        zmm2.d = zmm2.d f+ zmm0.d
        zmm2.d = zmm2.d f+ zmm1.d
        int32_t var_150_1
        int32_t var_148_1
        
        if (zmm2.d f!= 1f)
            if (zmm2.d f>= 9.99999994e-09f)
                zmm3.d = zmm2.d
                zmm5 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
                zmm3.d = zmm3.d f* 0.5f
                zmm0.d = zmm5.d f* zmm5.d
                zmm1.d = zmm3.d f* zmm0.d
                zmm2.d = 0.5f f- zmm1.d
                zmm0.d = zmm5.d f* zmm2.d
                zmm5.d = zmm5.d f+ zmm0.d
                zmm1.d = zmm5.d f* zmm5.d
                zmm3.d = zmm3.d f* zmm1.d
                zmm4.d = 0.5f f- zmm3.d
                zmm0.d = zmm5.d f* zmm4.d
                zmm5.d = zmm5.d f+ zmm0.d
                arg_8.d = zmm5.d
                zmm1 = zmm5
                zmm0.d = zmm5.d f* zmm12.d
                zmm5.d = zmm5.d f* zmm14.d
                var_150_1 = zmm0.d
                zmm1.d = zmm1.d f* zmm13.d
                var_148_1 = zmm5.d
            else
                zmm1 = data_143dbb1fc
                var_150_1 = data_143dbb1f8.d
                var_148_1 = data_143dbb200.d
            
            int32_t var_14c_2 = zmm1.d
        else
            var_150_1 = zmm12.d
            int32_t var_14c_1 = zmm13.d
            var_148_1 = zmm14.d
        
        r12 = &r12[1]
        int64_t rcx_13 = **(var_108 + 0x18)
        *(rcx_13 + (rdx_9 << 2)) = var_150_1.q
        *(rcx_13 + (rdx_9 << 2) + 8) = var_148_1
        int64_t rcx_14 = **(var_100 + 0x18)
        result = zx.q(result_1)
        *(rcx_14 + (rdx_9 << 2)) = var_140_1.q
        *(rcx_14 + (rdx_9 << 2) + 8) = result.d
    while (r12 != result_2)

return result
