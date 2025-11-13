// 函数: sub_141fae0c0
// 地址: 0x141fae0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = &arg1[6]
void var_108
(*(*arg1 + 0x268))(arg3, &var_108, rbx, arg2)
void var_110
(*(*arg1 + 0x268))(arg1, &var_110, &arg1[7], arg2)
bool cond:0 = (arg1[0x14].b & 2) == 0
int32_t var_10c
arg3 = var_10c
int32_t var_104
arg3[0] = arg3[0] f- var_104
int128_t zmm6
zmm6.d = (*(arg1 + 0x3c)).d f- *(arg1 + 0x34)
zmm6.d = zmm6.d f/ __andps_xmmxud_memxud(arg3, data_142d3f770)[0]
int32_t var_1b8 = zmm6.d
int32_t* rax_2

if (cond:0)
    rax_2 = sub_1423de050()
else
    rax_2 = sub_1423de320()

int32_t var_118
int32_t arg_20
uint64_t result
float zmm6_1[0x4]
double zmm7[0x2]
float zmm8[0x4]
int128_t zmm11
double zmm12[0x2]
result, zmm6_1, zmm7, zmm8, zmm11, zmm12 =
    sub_1424235b0(rax_2, &arg_20, &var_118, &(*RGBXYZF10|")[8])
double zmm10[0x2] = 0x3f800000
float zmm1[0x4] = zx.o(0)
float zmm9[0x4] = zx.o(0)
float arg_8 = 0f
int32_t var_1c8
int32_t var_1b0
float var_1a8
void** const var_198
float arg_18
int64_t zmm0
double zmm2_1[0x2]
float zmm3_1
float zmm4_1

if ((arg1[0x14].b & 4) != 0 && *(arg1 + 0x8c) == 0)
    zmm2_1 = *(arg1 + 0x9c)
    zmm2_1[0].d = zmm2_1[0].d f- arg1[8].d
    zmm0.d = arg1[9].d.d f- arg1[8].d
    zmm2_1[0].d = zmm2_1[0].d f/ zmm0.d
    zmm2_1[0].d f- 0f
    bool cond:3_1 = zmm2_1[0].d f>= 0f
    
    if (zmm2_1[0].d f>= 0f)
        zmm0 = _mm_min_ss(zmm2_1[0].d, 0x3f800000)
    else
        zmm0 = (zx.o(0)).q
    
    zmm3_1 = *rbx
    zmm4_1 = *(arg1 + 0x34)
    zmm1 = arg1[7].d
    zmm1[0] = zmm1[0] - zmm3_1
    zmm0.d = zmm0.d f* zmm1[0]
    zmm0.d = zmm0.d f+ zmm3_1
    arg_18 = zmm0.d
    zmm0.d = (*(arg1 + 0x3c)).d f- zmm4_1
    zmm0.d = zmm0.d f* 1f
    zmm0.d = zmm0.d f+ zmm4_1
    int32_t arg_1c = zmm0.d
    
    if (cond:3_1)
        zmm2_1 = _mm_min_ss(zmm2_1[0].d, 0x3f800000)
    else
        zmm2_1 = zx.o(0)
    
    int64_t rax_3 = *arg1
    zmm2_1[0].d = zmm2_1[0].d f* zmm1[0]
    int64_t var_188_1 = 0
    float var_18c_1 = data_143dbb1f0:4.d[0]
    zmm1 = data_14399f5c0
    char var_180_1 = 0
    zmm2_1[0].d = zmm2_1[0].d f+ zmm3_1
    int32_t var_190_1 = data_143dbb1f0.d.d
    int64_t var_178_1 = 0
    var_198 = &data_14328aab8
    int64_t var_160
    __builtin_memset(&var_160, 0, 0x1c)
    var_1c8 = zmm2_1[0].d
    float var_1c4_1 = zmm4_1
    float var_170_1[0x4] = zmm1
    int64_t* rax_4 = (*(rax_3 + 0x268))(arg1, &var_1a8, &arg_18, arg2)
    int64_t* rax_5 = (*(*arg1 + 0x268))(arg1, &var_1b0, &var_1c8, arg2)
    var_160.d = (*rax_5).d
    var_160:4.d = (*(rax_5 + 4))[0]
    int128_t var_158
    var_158:4.d = (*rax_4).d
    var_158:8.d = (*(rax_4 + 4))[0]
    result = var_198[3](&var_198, *(arg2 + 0x260))
    zmm1 = zx.o(0)
    rbx = &arg1[6]

int32_t i = 0

if (arg1[0xd].d s> 0)
    int64_t* r15_1 = nullptr
    double var_58_1[0x2] = zmm7
    float var_68_1[0x4] = zmm8
    int128_t var_98_1 = zmm11
    double var_a8_1[0x2] = zmm12
    double zmm13[0x2]
    double var_b8_1[0x2] = zmm13
    int128_t zmm14
    int128_t var_c8_1 = zmm14
    int128_t zmm15
    int128_t var_d8_1 = zmm15
    
    do
        if ((arg1[0x14].b & 1) != 0 && (i.b & 1) != 0)
            zmm1[0] = zmm1[0] + zmm6_1[0]
            arg_8 = zmm1[0]
        
        void* rcx_5 = arg1[0xc]
        int32_t j = 1
        
        if (*(rcx_5 + r15_1 + 8) s> 1)
            void* rdx_6 = rcx_5
            int64_t rsi_1 = 8
            
            do
                int128_t* rax_7 = *(r15_1 + rdx_6)
                int32_t zmm5_1 = arg1[8].d
                zmm0.d = arg1[9].d.d f- zmm5_1
                zmm13 = *(rax_7 + rsi_1 - 8)
                zmm1 = *(rax_7 + rsi_1 - 4)
                zmm6_1 = *(rax_7 + rsi_1)
                zmm13[0].d = zmm13[0].d f- zmm5_1
                zmm11 = *(rax_7 + rsi_1 + 4)
                zmm4_1 = zmm10[0].d f/ zmm0.d
                arg_18 = zmm1[0]
                zmm13[0].d = zmm13[0].d f* zmm4_1
                
                if (zmm13[0].d f>= zmm9[0])
                    zmm7 = _mm_min_ss(zmm13[0].d, zmm10[0].d)
                else
                    zmm7 = zmm9
                
                zmm2_1 = *(arg1 + 0x44)
                zmm3_1 = zmm10[0].d
                zmm0 = *(arg1 + 0x4c)
                zmm1[0] = zmm1[0] f- zmm2_1[0].d
                zmm0.d = zmm0.d f- zmm2_1[0].d
                zmm3_1 = zmm3_1 f/ zmm0.d
                zmm1[0] = zmm1[0] * zmm3_1
                
                if (zmm1[0] >= zmm9[0])
                    zmm1 = _mm_min_ss(zmm1[0], zmm10[0].d)
                else
                    zmm1 = zmm9
                
                zmm14 = *(arg1 + 0x34)
                zmm15 = arg1[7].d
                zmm6_1[0] = zmm6_1[0] f- zmm5_1
                zmm12 = *(arg1 + 0x3c)
                zmm15.d = zmm15.d f- *rbx
                zmm12[0].d = zmm12[0].d f- zmm14.d
                zmm6_1[0] = zmm6_1[0] * zmm4_1
                zmm7[0].d = zmm7[0].d f* zmm15.d
                bool cond:4_1 = zmm6_1[0] >= zmm9[0]
                zmm7[0].d = zmm7[0].d f+ *rbx
                zmm1[0] = zmm1[0] f* zmm12[0].d
                zmm1[0] = zmm1[0] f+ zmm14.d
                var_1b0 = zmm7[0].d
                float var_1ac_1 = zmm1[0]
                
                if (cond:4_1)
                    zmm8 = _mm_min_ss(zmm6_1[0], zmm10[0].d)
                else
                    zmm8 = zmm9
                
                zmm0.d = zmm11.q.d f- zmm2_1[0].d
                zmm0.d = zmm0.d f* zmm3_1
                
                if (zmm0.d f>= zmm9[0])
                    zmm0 = _mm_min_ss(zmm0.d, zmm10[0].d)
                else
                    zmm0 = zmm9[0].q
                
                bool cond:5_1 = *(arg1 + 0x8c) != 0
                zmm8[0] = zmm8[0] f* zmm15.d
                zmm0.d = zmm0.d f* zmm12[0].d
                zmm8[0] = zmm8[0] f+ *rbx
                zmm0.d = zmm0.d f+ zmm14.d
                var_1a8 = zmm8[0]
                int32_t var_1a4_1 = zmm0.d
                int32_t* var_1e8
                int128_t* var_1e0
                
                if (cond:5_1)
                    zmm2_1[0].d = zmm2_1[0].d f* zmm12[0].d
                    int32_t var_1bc_1 = zmm0.d
                    zmm0 = var_1b0.q
                    zmm2_1[0].d = zmm2_1[0].d f+ zmm14.d
                    int64_t rbx_5 = sx.q(i) << 6
                    var_1c8 = zmm7[0].d
                    float var_1c0 = zmm8[0]
                    arg_18.q = zmm0
                    int32_t var_1c4_2 = zmm2_1[0].d
                    int32_t zmm7_1
                    float zmm8_1
                    zmm7_1, zmm8_1 =
                        sub_141faf0c0(arg1, arg2, &var_1c8, &var_1c0, &arg_18, rdx_6 + 0x10 + rbx_5)
                    float zmm1_2 = *(arg1 + 0x3c) f- *(arg1 + 0x34)
                    int64_t zmm0_2 = var_1a8.q
                    void* rcx_17 = arg1[0xc] + 0x10
                    var_1c8 = zmm7_1
                    var_1c0 = zmm8_1
                    var_1e0 = rcx_17 + rbx_5
                    arg_18.q = zmm0_2
                    var_1e8 = &arg_18
                    zmm1_2 = zmm1_2 f* *(arg1 + 0x44) f+ *(arg1 + 0x34)
                    float var_1c4_3 = zmm1_2
                    float var_1bc_2 = zmm1_2
                    result, zmm9, zmm10 =
                        sub_141faf0c0(arg1, arg2, &var_1c8, &var_1c0, var_1e8, var_1e0)
                else
                    if ((i.b & 1) == 0)
                        zmm12 = 0xbf800000
                    else
                        zmm12 = zmm10
                    
                    zmm12[0].d = zmm12[0].d f* arg_8
                    int64_t rax_8 = *arg1
                    int64_t var_178_2 = 0
                    var_198 = &data_14328aab8
                    zmm1[0] = zmm1[0] f+ zmm12[0].d
                    int64_t var_188_2 = 0
                    zmm0.d = zmm0.d f+ zmm12[0].d
                    char var_180_2 = 0
                    zmm8[0] = zmm8[0] f+ zmm12[0].d
                    zmm7[0].d = zmm7[0].d f+ zmm12[0].d
                    int64_t var_160_1
                    __builtin_memset(&var_160_1, 0, 0x1c)
                    float var_12c_1 = zmm1[0]
                    int32_t var_134_1 = zmm0.d
                    zmm0 = data_143dbb1f0.d
                    float var_18c_2 = data_143dbb1f0:4.d[0]
                    float var_138 = zmm8[0]
                    int32_t var_130 = zmm7[0].d
                    int32_t var_190_2 = zmm0.d
                    float var_170_2[0x4] = *(rcx_5 + r15_1 + 0x10)
                    int128_t* var_1d8
                    void var_f0
                    int64_t* rax_9 =
                        (*(rax_8 + 0x268))(arg1, &var_f0, &var_138, arg2, var_1e8, var_1e0, var_1d8)
                    void var_e8
                    int64_t* rax_10 = (*(*arg1 + 0x268))(arg1, &var_e8, &var_130, arg2)
                    var_160_1.d = (*rax_10).d
                    var_160_1:4.d = (*(rax_10 + 4))[0]
                    int128_t var_158_1
                    var_158_1:4.d = (*rax_9).d
                    var_158_1:8.d = (*(rax_9 + 4))[0]
                    result = var_198[3](&var_198, *(arg2 + 0x260))
                    
                    if ((arg1[0x14].b & 4) != 0)
                        zmm0 = *(arg1 + 0x9c)
                        
                        if (not(zmm0.d f< zmm13[0].d) && not(zmm0.d f>= zmm6_1[0]))
                            zmm11.d = zmm11.d f- arg_18
                            zmm6_1[0] = zmm6_1[0] f- zmm13[0].d
                            zmm0.d = zmm0.d f- zmm13[0].d
                            zmm0.d = zmm0.d f/ zmm6_1[0]
                            zmm6_1[0] = zmm6_1[0] f* zmm0.d
                            zmm11.d = zmm11.d f* zmm0.d
                            zmm0 = arg1[9].d
                            zmm6_1[0] = zmm6_1[0] f+ zmm13[0].d
                            zmm0.d = zmm0.d f- arg1[8].d
                            zmm11.d = zmm11.d f+ arg_18
                            zmm6_1[0] = zmm6_1[0] f- arg1[8].d
                            zmm6_1[0] = zmm6_1[0] f/ zmm0.d
                            
                            if (zmm6_1[0] >= zmm9[0])
                                zmm6_1 = _mm_min_ss(zmm6_1[0], zmm10[0].d)
                            else
                                zmm6_1 = zmm9
                            
                            zmm0.d = (*(arg1 + 0x4c)).d f- *(arg1 + 0x44)
                            zmm3_1 = (zmm11.d f- *(arg1 + 0x44)) f/ zmm0.d
                            
                            if (zmm3_1 >= zmm9[0])
                                zmm3_1 = _mm_min_ss(zmm3_1, zmm10[0].d)
                            else
                                zmm3_1 = zmm9[0]
                            
                            zmm1 = arg1[7].d
                            zmm1[0] = zmm1[0] f- arg1[6].d
                            zmm0.d = (*(arg1 + 0x3c)).d f- *(arg1 + 0x34)
                            int64_t rax_12 = *arg1
                            zmm1[0] = zmm1[0] * zmm6_1[0]
                            zmm0.d = zmm0.d f* zmm3_1
                            zmm1[0] = zmm1[0] f+ arg1[6].d
                            zmm0.d = zmm0.d f+ *(arg1 + 0x34)
                            float var_128 = zmm1[0]
                            int32_t var_124_1 = zmm0.d
                            void var_e0
                            int128_t* rax_13 = (*(rax_12 + 0x268))(arg1, &var_e0, &var_128, arg2)
                            void* rbx_3 = arg1[0xc]
                            double temp0_9[0x2] = _mm_cvtps_pd(zmm11.q)
                            zmm6_1 = *rax_13
                            zmm12[0].d = zmm12[0].d f+ *(rax_13 + 4)
                            int16_t* var_100
                            sub_140a2e390(&var_100, u"%1.2f", temp0_9[0])
                            zmm12[0].d = zmm12[0].d f+ zmm6_1[0]
                            int16_t* r9_7 = &data_142d40450
                            uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o(arg_20))
                            int32_t var_f8
                            
                            if (var_f8 != 0)
                                r9_7 = var_100
                            
                            var_1d8 = &data_14399f5e0
                            zmm12[0].d = zmm12[0].d f+ zmm0_1.d
                            var_1e0 = rbx_3 + 0x10 + (sx.q(i) << 6)
                            var_1e8 = rax_2
                            result = sub_142409910(*(arg2 + 0x260), zmm12, zmm12, r9_7, var_1e8, 
                                var_1e0, &data_14399f5e0)
                            int16_t* rcx_14 = var_100
                            
                            if (rcx_14 != 0)
                                result = sub_140a74f90(rcx_14)
                rcx_5 = arg1[0xc]
                rbx = &arg1[6]
                j += 1
                rsi_1 += 8
                rdx_6 = rcx_5
            while (j s< *(rcx_5 + r15_1 + 8))
            
            zmm6_1 = var_1b8
        
        zmm1 = arg_8
        rbx = &arg1[6]
        i += 1
        r15_1 = &r15_1[8]
    while (i s< arg1[0xd].d)

return result
