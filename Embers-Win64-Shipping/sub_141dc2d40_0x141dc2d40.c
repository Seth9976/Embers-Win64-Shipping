// 函数: sub_141dc2d40
// 地址: 0x141dc2d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
uint128_t zmm0 = zx.o(data_143dbb1f8.q)
int32_t r15 = 0
int32_t rax_2 = data_143dbb200
uint64_t var_104 = zmm0.q
int128_t* r10 = arg3
int32_t var_108 = rax_2
int32_t var_fc = rax_2
int32_t result = 0.d
zmm0.q = zmm0.q
*arg5 = zmm0
uint128_t var_110 = zmm0
int64_t i_2 = sx.q(arg2)
arg5[1].q = var_104
*(arg5 + 0x18) = result
arg4[1].d = 0

if (*(arg4 + 0xc) s<= 0xffffffff)
    result = sub_140638cc0(arg4, 0)
    r10 = arg3

arg4[2].d = 0x7f7fffff
*(arg4 + 0x14) = 0xff7fffff

if (i_2.d s> 0)
    int32_t r9 = 8
    void* j_1 = nullptr
    float zmm6[0x4]
    float var_38_1[0x4] = zmm6
    int64_t i_1 = i_2
    uint128_t* rsi = arg1 + 8
    int32_t rdi_1 = 0
    void* j_2 = nullptr
    int32_t var_6c_1 = 8
    int32_t var_70_1 = 0
    int32_t var_120_1 = 0
    void var_d8
    int64_t i
    
    do
        float zmm4[0x4] = *r10
        int32_t* j = &var_d8
        float zmm2[0x4] = *(rsi - 4)
        float temp0_1[0x4] = _mm_unpacklo_ps(*(rsi - 8), (*rsi).q)
        
        if (j_1 != 0)
            j = j_1
        
        float temp0_2[0x4] = _mm_unpacklo_ps(zmm2, zx.o(0).q)
        uint128_t zmm1 = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
        float temp0_5[0x4] = __mulps_xmmps_memps(_mm_unpacklo_ps(temp0_1, temp0_2[0].q), r10[2])
        float temp0_6[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
        float temp0_7[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
        float temp0_12[0x4] = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0xd2), zmm1), 
            _mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0xc9), temp0_6))
        float temp0_13[0x4] = _mm_add_ps(temp0_12, temp0_12)
        float temp0_14[0x4] = _mm_mul_ps(temp0_7, temp0_13)
        float temp0_15[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xd2)
        zmm0 = _mm_shuffle_ps(temp0_13, temp0_13, 0xc9)
        float temp0_17[0x4] = _mm_mul_ps(temp0_15, zmm1)
        zmm1 = *(arg4 + 0x14)
        float temp0_18[0x4] = _mm_add_ps(temp0_14, temp0_5)
        float temp0_22[0x4] = __addps_xmmps_memps(
            _mm_add_ps(_mm_sub_ps(temp0_17, _mm_mul_ps(zmm0, temp0_6)), temp0_18), r10[1])
        float var_128_1 = temp0_22[0]
        float temp0_23[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0xaa)
        float temp0_24[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0x55)
        float var_124_1 = temp0_24[0]
        zmm1 = _mm_max_ss(zmm1.d, temp0_23[0])
        zmm0 = __minss_xmmss_memss(temp0_23.d, arg4[2].d)
        *(arg4 + 0x14) = zmm1.d
        arg4[2].d = zmm0.d
        
        for (; j != &j[sx.q(rdi_1) * 3]; j = &j[3])
            zmm1.d = temp0_22.d f- *j
            zmm0 = j[2] ^ 0x80000000
            temp0_24[0] = temp0_24[0] f- j[1]
            zmm0.d = zmm0.d f* zmm0.d
            zmm1.d = zmm1.d f* zmm1.d
            temp0_24[0] = temp0_24[0] * temp0_24[0]
            temp0_24[0] = temp0_24[0] f+ zmm1.d
            temp0_24[0] = temp0_24[0] f+ zmm0.d
            
            if (temp0_24[0] < 16f)
                goto label_141dc2fb8
        
        if (rdi_1 + 1 s> r9)
            sub_14085a560(&var_d8, rdi_1)
            j_1 = j_2
            r10 = arg3
        
        void* j_3 = &var_d8
        
        if (j_1 != 0)
            j_3 = j_1
        
        int64_t rcx_3 = sx.q(rdi_1) * 3
        *(j_3 + (rcx_3 << 2)) = var_128_1.q
        *(j_3 + (rcx_3 << 2) + 8) = 0
        r9 = var_6c_1
        rdi_1 += 1
        j_1 = j_2
    label_141dc2fb8:
        rsi += 0xc
        i = i_1
        i_1 -= 1
    while (i != 1)
    uint128_t* var_f0_1 = nullptr
    int32_t var_e4_1 = 8
    int32_t result_1 = 0
    sub_141db2340(&var_d8, &var_110)
    result = result_1
    
    if (result s>= 3)
        if (result s> 0)
            int64_t r12_1 = 0
            
            do
                uint128_t* rcx_5 = &var_110
                int64_t r13_1 = sx.q(arg4[1].d)
                void* j_4 = &var_d8
                
                if (var_f0_1 != 0)
                    rcx_5 = var_f0_1
                
                int64_t rsi_1 = sx.q(*(rcx_5 + r12_1)) * 3
                
                if (j_2 != 0)
                    j_4 = j_2
                
                int32_t rax_10 = (r13_1 + 1).d
                arg4[1].d = rax_10
                
                if (rax_10 s> *(arg4 + 0xc))
                    sub_140638a00(arg4)
                
                int64_t rcx_7 = *arg4
                int64_t rdx_4 = r13_1 * 3
                *(rcx_7 + (rdx_4 << 2)) = *(j_4 + (rsi_1 << 2))
                *(rcx_7 + (rdx_4 << 2) + 8) = *(j_4 + (rsi_1 << 2) + 8)
                
                if (*(arg5 + 0x18) == 0)
                    *(arg5 + 0xc) = *(j_4 + (rsi_1 << 2))
                    int32_t rax_12 = *(j_4 + (rsi_1 << 2) + 8)
                    *(arg5 + 0x14) = rax_12
                    *arg5 = *(arg5 + 0xc)
                    *(arg5 + 8) = rax_12
                    *(arg5 + 0x18) = 1
                else
                    *arg5 = __minss_xmmss_memss((*(j_4 + (rsi_1 << 2))).d, *arg5).d
                    *(arg5 + 4) = __minss_xmmss_memss((*(arg5 + 4)).d, *(j_4 + (rsi_1 << 2) + 4)).d
                    *(arg5 + 8) = __minss_xmmss_memss((*(arg5 + 8)).d, *(j_4 + (rsi_1 << 2) + 8)).d
                    *(arg5 + 0xc) = __maxss_xmmss_memss(*(j_4 + (rsi_1 << 2)), *(arg5 + 0xc))
                    arg5[1].d = __maxss_xmmss_memss((*(j_4 + (rsi_1 << 2) + 4)).d, arg5[1].d).d
                    *(arg5 + 0x14) = __maxss_xmmss_memss(*(j_4 + (rsi_1 << 2) + 8), *(arg5 + 0x14))
                
                r15 += 1
                r12_1 += 4
            while (r15 s< result_1)
        
        *(arg5 + 8) = arg4[2].d
        result = *(arg4 + 0x14)
        *(arg5 + 0x14) = result
    
    if (var_f0_1 != 0)
        result = sub_140a74f90(var_f0_1)
    
    if (j_2 != 0)
        result = sub_140a74f90(j_2)

__security_check_cookie(rax_1 ^ &var_148)
return result
