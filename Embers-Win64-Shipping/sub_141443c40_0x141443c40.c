// 函数: sub_141443c40
// 地址: 0x141443c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg1 + 0x10)
void* rax = *(r8 + 0xcf0)
void* rcx = r8 + 0xc70

if (rax != 0)
    rcx = rax

int32_t rax_1 = *(r8 + 0x614)
int32_t rcx_1 = *(r8 + 0x15d0)
int32_t var_164 = rcx_1
uint64_t var_150 = *(r8 + 0x60c)
float zmm9[0x4]

if (data_143ed57bc == 0)
    zmm9 = data_1439b6dc8
else
    zmm9 = zx.o(0)

int32_t rax_2 = data_1439b6dd0
int32_t rbx_1 = rax_2 * arg2
float arg_8 = zmm9[0]
uint64_t result = zx.q(rax_2 + rbx_1)
int32_t arg_20 = rbx_1

if (rbx_1 s< result.d)
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
    int64_t r8_1 = sx.q(rbx_1)
    uint32_t zmm13[0x4]
    uint32_t var_c8_1[0x4] = zmm13
    uint128_t zmm14
    uint128_t var_d8_1 = zmm14
    float zmm15[0x4]
    float var_e8_1[0x4] = zmm15
    result = r8_1 << 2
    int64_t r8_2 = r8_1 << 5
    int32_t r9_2 = rbx_1 << 5
    uint64_t result_1 = result
    int64_t var_140_1 = r8_2
    int32_t var_168_1 = r9_2
    
    while (r9_2 s< rcx_1)
        int32_t rdx = 0
        int32_t r15_1 = 0
        int32_t arg_10 = 0
        int64_t r12_1 = 0
        int32_t rbp_1 = r9_2
        int32_t r14_1 = 1
        
        while (rbp_1 s< rcx_1)
            void* rdx_1 = *(arg1 + 8)
            char* rsi_1 = r8_2 + r12_1
            void* rcx_2 = rsi_1 * 5
            int32_t arg_18 = 0xffffffff
            int64_t rax_3 = *(rdx_1 + 0xde8)
            float zmm1[0x4] = *(rax_3 + (rcx_2 << 3))
            int128_t* rbx_2 = rax_3 + (rcx_2 << 3)
            zmm8.d = (*(rbx_2 + 4)).d f- var_150:4.d
            zmm1[0] = zmm1[0] f- var_150.d
            uint128_t zmm0
            zmm0.d = (*(rbx_2 + 8)).d f- rax_1
            int64_t rax_4 = *(rdx_1 + 0xe18)
            zmm8.d = zmm8.d f* zmm8.d
            zmm1[0] = zmm1[0] * zmm1[0]
            zmm0.d = zmm0.d f* zmm0.d
            zmm8.d = zmm8.d f+ zmm1[0]
            zmm8.d = zmm8.d f+ zmm0.d
            
            if ((rsi_1[rax_4] & 9) == 9)
                arg_18 = *(*(rdx_1 + 0xe08) + (rsi_1 << 3))
            
            zmm7 = *(rbx_2 + 0x24)
            
            if (zmm7.d f>= 3.40282347e+38f)
                zmm7 = 0x7f7fffff
            else
                zmm7.d = zmm7.d f* *(arg1 + 0x18)
            
            result = *(arg1 + 0x10)
            zmm6 = *(rbx_2 + 0x1c)
            
            if ((*(*result + 0x2c) & 0x40000) != 0)
                int64_t* rcx_6 = *(*(*(rdx_1 + 0xdb8) + (rsi_1 << 3)) + 8)
                result = (*(*rcx_6 + 0x108))(rcx_6)
                
                if (result.b == 0)
                    zmm7 = 0x7f7fffff
            
            void* r9_3 = *(arg1 + 0x20)
            
            if (r9_3 != 0)
                void* r11_1 = *(r9_3 + 0x50)
                void* r8_3 = r9_3 + 0x40
                int32_t rax_9 = rbp_1
                int32_t rdx_2 = 1 << (rbp_1.b & 0x1f)
                
                if (rbp_1 s< 0)
                    rax_9 = rbp_1 + 0x1f
                
                result = zx.q(rax_9 s>> 5)
                int64_t r10_1 = sx.q(result.d)
                
                if (r11_1 != 0)
                    r8_3 = r11_1
                
                if ((*(r8_3 + (r10_1 << 2)) & rdx_2) == 0)
                    result = *(r9_3 + 0x70)
                    uint64_t result_2 = r9_3 + 0x60
                    
                    if (result != 0)
                        result_2 = result
                    
                    if ((*(result_2 + (r10_1 << 2)) & rdx_2) != 0)
                        zmm7 = zx.o(0)
                else
                    zmm7 = 0x7f7fffff
                    zmm6 = zx.o(0)
            
            zmm0.d = zmm7.d f+ zmm9[0]
            zmm0.d = zmm0.d f* zmm0.d
            
            if (zmm8.d f> zmm0.d || zmm8.d f< zmm6.d)
                rdx = arg_10
            else
                int32_t var_130_1 = *(rbx_2 + 8)
                int32_t rax_11 = *(rbx_2 + 0x14)
                uint64_t var_138 = *rbx_2
                int32_t var_124_1 = rax_11
                uint64_t var_12c_1 = *(rbx_2 + 0xc)
                int32_t var_120_1 = (*(rbx_2 + 0x18)).d
                int64_t* rcx_9 = *(*(arg1 + 0x10) + 0x5160)
                result = (*(*rcx_9 + 0x28))(rcx_9, zx.q(arg_18), &var_138)
                
                if (result.b == 0)
                    rdx = arg_10
                else
                    result, zmm7 = sub_141f8daa0(*(arg1 + 0x10) + 0xbf0, rbx_2, rbx_2 + 0x18)
                    
                    if (result.b == 0)
                        rdx = arg_10
                    else
                        zmm13 = data_143ed5e00
                        zmm0 = *(rbx_2 + 8)
                        zmm11 = *rbx_2
                        float zmm3_1[0x4] = *(rbx_2 + 0xc)
                        zmm14 = *(rcx + 0x40)
                        zmm15 = *(rcx + 0x50)
                        float temp0_1[0x4] = _mm_unpacklo_ps(*(rbx_2 + 4), 0)
                        float temp0_2[0x4] = _mm_unpacklo_ps(zmm11, zmm0.q)
                        float temp0_3[0x4] = _mm_unpacklo_ps(zmm3_1, (*(rbx_2 + 0x14)).q)
                        float temp0_4[0x4] = _mm_unpacklo_ps(temp0_2, temp0_1[0].q)
                        float temp0_6[0x4] =
                            _mm_unpacklo_ps(temp0_3, _mm_unpacklo_ps(rbx_2[1].d, 0)[0].q)
                        float temp0_7[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0)
                        float temp0_8[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0)
                        zmm0 = _mm_shuffle_ps(temp0_6, temp0_6, 0x55)
                        float temp0_10[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xaa)
                        uint128_t var_f8_1 = zmm0
                        float temp0_12[0x4] = _mm_mul_ps(_mm_and_ps(*(rcx + 0x10), zmm13), zmm0)
                        var_138.o = temp0_8
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
                            zmm9 = arg_8
                            rdx = arg_10
                        else
                            float temp0_29[0x4] = __mulps_xmmps_memps(temp0_20, *(rcx + 0x60))
                            zmm1 = *(rcx + 0x60)
                            float temp0_31[0x4] =
                                __mulps_xmmps_memps(_mm_and_ps(zmm15, zmm13), var_f8_1)
                            float temp0_32[0x4] = _mm_mul_ps(temp0_16, zmm15)
                            zmm0 = __mulps_xmmps_memps(_mm_and_ps(zmm14, zmm13), var_138.o)
                            float temp0_36[0x4] =
                                __mulps_xmmps_memps(_mm_and_ps(zmm1, zmm13), temp0_10)
                            float temp0_37[0x4] = _mm_mul_ps(temp0_7, zmm14)
                            float temp0_38[0x4] = _mm_add_ps(temp0_31, zmm0)
                            float temp0_39[0x4] = _mm_add_ps(temp0_32, temp0_37)
                            result = zx.q(_mm_movemask_ps(_mm_cmpeq_ps(
                                _mm_add_ps(temp0_38, temp0_36), 
                                __subps_xmmps_memps(_mm_add_ps(temp0_39, temp0_29), *(rcx + 0x70)), 
                                1)))
                            
                            if (result.d != 0)
                                zmm9 = arg_8
                                rdx = arg_10
                            else
                                zmm0.d = zmm7.d f* zmm7.d
                                
                                if (zmm8.d f<= zmm0.d)
                                    zmm9 = arg_8
                                    rdx = arg_10 | r14_1
                                    zmm7.d = zmm7.d f- zmm9[0]
                                    arg_10 = rdx
                                    zmm7.d = zmm7.d f* zmm7.d
                                    
                                    if (not(zmm8.d f<= zmm7.d))
                                        int64_t* rcx_15 =
                                            *(*(*(*(arg1 + 8) + 0xdb8) + (rsi_1 << 3)) + 8)
                                        result = (*(*rcx_15 + 0xd8))(rcx_15)
                                        rdx = arg_10
                                        
                                        if (result.b != 0)
                                            r15_1 |= r14_1
                                else
                                    int64_t* rcx_13 =
                                        *(*(*(*(arg1 + 8) + 0xdb8) + (rsi_1 << 3)) + 8)
                                    result = (*(*rcx_13 + 0xd8))(rcx_13)
                                    zmm9 = arg_8
                                    rdx = arg_10
                                    
                                    if (result.b != 0)
                                        r15_1 |= r14_1
            
            r8_2 = var_140_1
            rbp_1 += 1
            rcx_1 = var_164
            r12_1 += 1
            r14_1 *= 2
            
            if (r12_1 s>= 0x20)
                break
        
        if (r15_1 != 0)
            uint64_t result_3 = *(arg1 + 0x10) + 0x15f8
            result = *(result_3 + 0x10)
            
            if (result != 0)
                result_3 = result
            
            *(result_3 + result_1) = r15_1
        
        if (rdx != 0)
            uint64_t result_4 = *(arg1 + 0x10) + 0x15b8
            result = *(result_4 + 0x10)
            
            if (result != 0)
                result_4 = result
            
            *(result_4 + result_1) = rdx
        
        r8_2 += 0x20
        r9_2 = var_168_1 + 0x20
        bool cond:2_1 = arg_20 + 1 s< rbx_1 + data_1439b6dd0
        arg_20 += 1
        rcx_1 = var_164
        var_168_1 = r9_2
        var_140_1 = r8_2
        result_1 += 4
        
        if (not(cond:2_1))
            break

return result
