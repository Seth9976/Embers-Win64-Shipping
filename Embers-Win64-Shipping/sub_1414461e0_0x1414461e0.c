// 函数: sub_1414461e0
// 地址: 0x1414461e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg1 + 0x10)
void* rax = *(r8 + 0xcf0)
void* rcx = r8 + 0xc70

if (rax != 0)
    rcx = rax

int32_t rax_1 = *(r8 + 0x614)
int32_t rcx_1 = *(r8 + 0x15d0)
int32_t arg_20 = rcx_1
uint64_t var_128 = *(r8 + 0x60c)
float zmm9[0x4]

if (data_143ed57bc == 0)
    zmm9 = data_1439b6dc8
else
    zmm9 = zx.o(0)

int32_t rax_2 = data_1439b6dd0
int32_t r11_1 = rax_2 * arg2
float arg_10 = zmm9[0]
uint64_t result = zx.q(rax_2 + r11_1)
int32_t arg_8 = r11_1

if (r11_1 s< result.d)
    int128_t zmm6
    int128_t var_58_1 = zmm6
    uint128_t zmm7
    uint128_t var_68_1 = zmm7
    int128_t zmm8
    int128_t var_78_1 = zmm8
    float zmm11[0x4]
    float var_a8_1[0x4] = zmm11
    float zmm12[0x4]
    float var_b8_1[0x4] = zmm12
    int64_t rdx = sx.q(r11_1)
    uint32_t zmm13[0x4]
    uint32_t var_c8_1[0x4] = zmm13
    uint128_t zmm14
    uint128_t var_d8_1 = zmm14
    float zmm15[0x4]
    float var_e8_1[0x4] = zmm15
    result = rdx << 2
    int64_t rdx_1 = rdx << 5
    int32_t r8_2 = r11_1 << 5
    uint64_t result_1 = result
    int64_t var_138_1 = rdx_1
    int32_t arg_18 = r8_2
    
    while (r8_2 s< rcx_1)
        int32_t r13_1 = 0
        int32_t r15_1 = 0
        int64_t r12_1 = 0
        int32_t rbp_1 = 1
        int32_t rsi_1 = r8_2
        
        while (rsi_1 s< rcx_1)
            int64_t r14_1 = r12_1 + rdx_1
            void* rdx_2 = *(arg1 + 8)
            int64_t rcx_2 = r14_1 * 5
            int64_t rax_3 = *(rdx_2 + 0xde8)
            float zmm1[0x4] = *(rax_3 + (rcx_2 << 3))
            int128_t* rbx_1 = rax_3 + (rcx_2 << 3)
            zmm8.d = (*(rbx_1 + 4)).d f- var_128:4.d
            zmm1[0] = zmm1[0] f- var_128.d
            uint128_t zmm0
            zmm0.d = (*(rbx_1 + 8)).d f- rax_1
            zmm7 = *(rbx_1 + 0x24)
            zmm8.d = zmm8.d f* zmm8.d
            zmm1[0] = zmm1[0] * zmm1[0]
            zmm0.d = zmm0.d f* zmm0.d
            zmm8.d = zmm8.d f+ zmm1[0]
            zmm8.d = zmm8.d f+ zmm0.d
            
            if (zmm7.d f>= 3.40282347e+38f)
                zmm7 = 0x7f7fffff
            else
                zmm7.d = zmm7.d f* *(arg1 + 0x18)
            
            result = *(arg1 + 0x10)
            zmm6 = *(rbx_1 + 0x1c)
            
            if ((*(*result + 0x2c) & 0x40000) != 0)
                int64_t* rcx_5 = *(*(*(rdx_2 + 0xdb8) + (r14_1 << 3)) + 8)
                result = (*(*rcx_5 + 0x108))(rcx_5)
                
                if (result.b == 0)
                    zmm7 = 0x7f7fffff
            
            void* r9_1 = *(arg1 + 0x20)
            
            if (r9_1 != 0)
                void* r11_2 = *(r9_1 + 0x50)
                void* r8_3 = r9_1 + 0x40
                int32_t rax_6 = rsi_1
                int32_t rdx_3 = 1 << (rsi_1.b & 0x1f)
                
                if (rsi_1 s< 0)
                    rax_6 = rsi_1 + 0x1f
                
                result = zx.q(rax_6 s>> 5)
                int64_t r10_1 = sx.q(result.d)
                
                if (r11_2 != 0)
                    r8_3 = r11_2
                
                if ((*(r8_3 + (r10_1 << 2)) & rdx_3) == 0)
                    result = *(r9_1 + 0x70)
                    uint64_t result_2 = r9_1 + 0x60
                    
                    if (result != 0)
                        result_2 = result
                    
                    if ((*(result_2 + (r10_1 << 2)) & rdx_3) != 0)
                        zmm7 = zx.o(0)
                else
                    zmm7 = 0x7f7fffff
                    zmm6 = zx.o(0)
            
            zmm0.d = zmm7.d f+ zmm9[0]
            zmm0.d = zmm0.d f* zmm0.d
            
            if (not(zmm8.d f> zmm0.d) && not(zmm8.d f< zmm6.d))
                result, zmm7 = sub_141f8daa0(*(arg1 + 0x10) + 0xbf0, rbx_1, rbx_1 + 0x18)
                
                if (result.b != 0)
                    zmm13 = data_143ed5e00
                    zmm0 = *(rbx_1 + 8)
                    zmm11 = *rbx_1
                    float zmm3_1[0x4] = *(rbx_1 + 0xc)
                    zmm14 = *(rcx + 0x40)
                    zmm15 = *(rcx + 0x50)
                    float temp0_1[0x4] = _mm_unpacklo_ps(*(rbx_1 + 4), 0)
                    float temp0_2[0x4] = _mm_unpacklo_ps(zmm11, zmm0.q)
                    float temp0_3[0x4] = _mm_unpacklo_ps(zmm3_1, (*(rbx_1 + 0x14)).q)
                    float temp0_4[0x4] = _mm_unpacklo_ps(temp0_2, temp0_1[0].q)
                    float temp0_6[0x4] =
                        _mm_unpacklo_ps(temp0_3, _mm_unpacklo_ps(rbx_1[1].d, 0)[0].q)
                    float temp0_7[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0)
                    float temp0_8[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0)
                    zmm0 = _mm_shuffle_ps(temp0_6, temp0_6, 0x55)
                    float temp0_10[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xaa)
                    uint128_t var_108_1 = zmm0
                    float temp0_12[0x4] = _mm_mul_ps(_mm_and_ps(*(rcx + 0x10), zmm13), zmm0)
                    zmm0 = _mm_mul_ps(_mm_and_ps(*rcx, zmm13), temp0_8)
                    zmm1 = _mm_and_ps(*(rcx + 0x20), zmm13)
                    float temp0_16[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x55)
                    float temp0_17[0x4] = __mulps_xmmps_memps(zmm1, temp0_10)
                    float temp0_18[0x4] = __mulps_xmmps_memps(temp0_16, *(rcx + 0x10))
                    float temp0_19[0x4] = _mm_add_ps(temp0_12, zmm0)
                    float temp0_20[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xaa)
                    zmm0 = __mulps_xmmps_memps(temp0_7, *rcx)
                    float temp0_22[0x4] = _mm_add_ps(temp0_19, temp0_17)
                    float temp0_23[0x4] = __mulps_xmmps_memps(temp0_20, *(rcx + 0x20))
                    result = zx.q(_mm_movemask_ps(_mm_cmpeq_ps(temp0_22, 
                        __subps_xmmps_memps(_mm_add_ps(_mm_add_ps(temp0_18, zmm0), temp0_23), 
                            *(rcx + 0x30)), 
                        1)))
                    
                    if (result.d != 0)
                        zmm9 = arg_10
                    else
                        float temp0_29[0x4] = __mulps_xmmps_memps(temp0_20, *(rcx + 0x60))
                        zmm1 = *(rcx + 0x60)
                        float temp0_31[0x4] =
                            __mulps_xmmps_memps(_mm_and_ps(zmm15, zmm13), var_108_1)
                        float temp0_32[0x4] = _mm_mul_ps(temp0_16, zmm15)
                        zmm0 = __mulps_xmmps_memps(_mm_and_ps(zmm14, zmm13), temp0_8)
                        float temp0_36[0x4] = __mulps_xmmps_memps(_mm_and_ps(zmm1, zmm13), temp0_10)
                        float temp0_37[0x4] = _mm_mul_ps(temp0_7, zmm14)
                        float temp0_38[0x4] = _mm_add_ps(temp0_31, zmm0)
                        float temp0_39[0x4] = _mm_add_ps(temp0_32, temp0_37)
                        result = zx.q(_mm_movemask_ps(_mm_cmpeq_ps(_mm_add_ps(temp0_38, temp0_36), 
                            __subps_xmmps_memps(_mm_add_ps(temp0_39, temp0_29), *(rcx + 0x70)), 1)))
                        
                        if (result.d != 0)
                            zmm9 = arg_10
                        else
                            zmm0.d = zmm7.d f* zmm7.d
                            
                            if (zmm8.d f<= zmm0.d)
                                zmm9 = arg_10
                                r13_1 |= rbp_1
                                zmm7.d = zmm7.d f- zmm9[0]
                                zmm7.d = zmm7.d f* zmm7.d
                                
                                if (not(zmm8.d f<= zmm7.d))
                                    int64_t* rcx_13 =
                                        *(*(*(*(arg1 + 8) + 0xdb8) + (r14_1 << 3)) + 8)
                                    result = (*(*rcx_13 + 0xd8))(rcx_13)
                                    
                                    if (result.b != 0)
                                        r15_1 |= rbp_1
                            else
                                int64_t* rcx_11 = *(*(*(*(arg1 + 8) + 0xdb8) + (r14_1 << 3)) + 8)
                                result = (*(*rcx_11 + 0xd8))(rcx_11)
                                zmm9 = arg_10
                                
                                if (result.b != 0)
                                    r15_1 |= rbp_1
            
            rdx_1 = var_138_1
            rsi_1 += 1
            rcx_1 = arg_20
            r12_1 += 1
            rbp_1 *= 2
            
            if (r12_1 s>= 0x20)
                break
        
        if (r15_1 != 0)
            uint64_t result_3 = *(arg1 + 0x10) + 0x15f8
            result = *(result_3 + 0x10)
            
            if (result != 0)
                result_3 = result
            
            *(result_3 + result_1) = r15_1
        
        if (r13_1 != 0)
            uint64_t result_4 = *(arg1 + 0x10) + 0x15b8
            result = *(result_4 + 0x10)
            
            if (result != 0)
                result_4 = result
            
            *(result_4 + result_1) = r13_1
        
        rdx_1 += 0x20
        r8_2 = arg_18 + 0x20
        bool cond:3_1 = arg_8 + 1 s< r11_1 + data_1439b6dd0
        arg_8 += 1
        rcx_1 = arg_20
        arg_18 = r8_2
        var_138_1 = rdx_1
        result_1 += 4
        
        if (not(cond:3_1))
            break

return result
