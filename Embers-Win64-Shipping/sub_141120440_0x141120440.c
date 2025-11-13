// 函数: sub_141120440
// 地址: 0x141120440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(*(arg4 + 0x20))
int64_t r14 = sx.q(arg8)
int32_t rax = (rbx + r14).d
*(arg4 + 0x20) = rax

if (rax s> *(arg4 + 0x24))
    sub_1405c5190(&arg4[0x18])

uint64_t count = r14 * 0xc8
memset(rbx * 0xc8 + *(arg4 + 0x18), 0, count)
int64_t rbx_1 = sx.q(*(arg4 + 0x10))
void* r13 = &arg4[8]
void* var_140 = r13
int32_t rax_1 = (rbx_1 + r14).d
*(r13 + 8) = rax_1

if (rax_1 s> *(r13 + 0xc))
    sub_1405c5190(r13)

float var_58[0x4] = arg5
float var_68[0x4] = arg6
float var_78[0x4] = arg7
int32_t* r8_2 = memset(rbx_1 * 0xc8 + *r13, 0, count)
void* rdi = arg3
void* r12 = nullptr
void* var_1d0 = nullptr
void* var_200 = nullptr
uint64_t r15_1 = 0
int32_t var_21c = 0
int64_t rsi = 0
int64_t* rbx_2 = *(rdi + 0x18e8)
int32_t var_1f4 = 0
uint64_t r14_2 = sx.q(*(rdi + 0x18f0)) << 3 u>> 3

if (rbx_2 u> &rbx_2[sx.q(*(rdi + 0x18f0))])
    r14_2 = 0

int64_t var_240
int64_t var_234
float zmm0_1[0x4]
uint128_t zmm1
uint128_t zmm2
float zmm3[0x4]

if (r14_2 != 0)
    do
        void* rdi_1 = *rbx_2
        int64_t* rcx_6 = *(rdi_1 + 8)
        char rax_5
        rax_5, r8_2 = (*(*rcx_6 + 0x98))(rcx_6)
        
        if (rax_5 != 0)
            int64_t rdi_2 = sx.q(var_21c)
            int128_t* rax_7 = *(rdi_1 + 8) + 0xc0
            char var_228_1 = 1
            arg5 = *rax_7
            int32_t rdx_2 = (rdi_2 + 1).d
            float zmm4_1[0x4] = *(rax_7 + 0xc)
            zmm1 = *(rax_7 + 0x14)
            zmm3 = rax_7[1].d
            zmm0_1 = zmm1
            zmm2 = *(rax_7 + 8)
            zmm4_1[0] = zmm4_1[0] + arg5[0]
            int64_t zmm5_1 = *(rax_7 + 4)
            zmm0_1[0] = zmm0_1[0] f+ zmm2.d
            var_21c = rdx_2
            zmm3[0] = zmm3[0] f+ zmm5_1.d
            arg5[0] = arg5[0] - zmm4_1[0]
            zmm5_1.d = zmm5_1.d f- zmm3[0]
            float var_1c0_1 = zmm0_1[0]
            zmm2.d = zmm2.d f- zmm1.d
            var_240 = (_mm_unpacklo_ps(arg5, zmm5_1)).q
            int32_t var_238_1 = zmm2.d
            var_234 = (_mm_unpacklo_ps(zmm4_1, zmm3[0].q)).q
            float var_22c_1 = var_1c0_1
            
            if (rdx_2 s> r15_1.d)
                r8_2 = sub_1405c50f0(&var_200)
                r15_1 = zx.q(var_1f4)
                r12 = var_200
                var_21c = rdx_2
            
            float (* rcx_8)[0x4] = rdi_2 * 0x1c
            *(rcx_8 + r12) = var_240.o
            *(rcx_8 + r12 + 0x10) = var_234
            *(rcx_8 + r12 + 0x18) = var_228_1.d
        
        rbx_2 = &rbx_2[1]
        rsi += 1
    while (rsi != r14_2)
    
    rdi = arg3
    var_1d0 = r12

void* rsi_1 = arg2
uint128_t zmm12 = arg9
uint128_t zmm9
uint128_t var_88 = zmm9
uint128_t zmm10
uint128_t var_98 = zmm10
void* rax_12 = *(rsi_1 + 0x15a8)
float zmm11[0x4]
float var_a8[0x4] = zmm11

if (rax_12 == 0)
    int32_t r14_11 = 0
    
    if (arg8 s> 0)
        float (* r15_8)[0x4] = nullptr
        
        do
            int32_t i
            i.b = data_1439b5bec == 0
            float temp0_17[0x4] = _mm_cvtepi32_ps(zx.o(r14_11))
            
            do
                void* rbx_17
                
                if (i != 0)
                    rbx_17 = *(arg4 + 0x18)
                else
                    rbx_17 = *r13
                
                sub_14111dc90(arg1, r14_11, i, rbx_17 + 0xc0 + r15_8)
                *(r15_8 + rbx_17 + 0x1c) = data_143dbb1f8.q
                *(r15_8 + rbx_17 + 0x24) = data_143dbb200
                float zmm6[0x4] = data_1439b5bf8
                float zmm0_4 = powf(zmm6[0].q.d, 0x40400000.d)
                arg6 = *(arg3 + 0x631c)
                arg6[0] = arg6[0] / zmm0_4
                float zmm0_5[0x4]
                zmm0_5, r8_2 = powf(zmm6[0], temp0_17.d)
                zmm2 = zx.o(*(rsi_1 + 0x60c))
                zmm3 = 0x3f800000
                int32_t rax_104 = *(rsi_1 + 0x614)
                arg6[0] = arg6[0] * zmm0_5[0]
                float temp0_18[0x4] = _mm_cvtepi32_ps(zx.o(data_1439b5bfc))
                char var_228_4 = 1
                arg6[0] = arg6[0] + arg6[0]
                arg6[0] = arg6[0] / temp0_18[0]
                zmm0_5 = zmm2
                zmm3[0] = 1f / arg6[0]
                float temp0_19[0x4] = _mm_shuffle_ps(zmm0_5, zmm0_5, 0x55)
                zmm1.d = zmm3.d f* zmm2.d
                zmm1.d = zmm1.d f+ zmm1.d
                zmm1.d = zmm1.d f- 0.5f
                int32_t rdx_36 = int.d(zmm1.d)
                zmm3[0] = zmm3[0] f* rax_104
                zmm1.d = zmm3.d f* temp0_19[0]
                zmm3[0] = zmm3[0] + zmm3[0]
                zmm1.d = zmm1.d f+ zmm1.d
                zmm1.d = zmm1.d f- 0.5f
                uint128_t zmm5_3
                zmm5_3.d = _mm_cvtepi32_ps(zx.o(rdx_36 s>> 1)).d f* arg6[0]
                zmm3[0] = zmm3[0] - 0.5f
                int32_t rax_106 = int.d(zmm3[0]) s>> 1
                arg6[0] = arg6[0] f+ zmm5_3.d
                uint128_t zmm4_3 = _mm_cvtepi32_ps(zx.o(int.d(zmm1.d) s>> 1))
                zmm5_3.d = zmm5_3.d f- arg6[0]
                zmm1 = _mm_cvtepi32_ps(zx.o(rax_106))
                zmm4_3.d = zmm4_3.d f* arg6[0]
                zmm1.d = zmm1.d f* arg6[0]
                zmm2.d = arg6.d f+ zmm4_3.d
                zmm4_3.d = zmm4_3.d f- arg6[0]
                arg6[0] = arg6[0] f+ zmm1.d
                zmm1.d = zmm1.d f- arg6[0]
                float var_1c0_3 = arg6[0]
                int32_t var_238_4 = zmm1.d
                int64_t var_234_1 = (_mm_unpacklo_ps(arg6, zmm2.q)).q
                zmm6 = var_240.o
                float var_22c_4 = var_1c0_3
                zmm6[0].q = (_mm_unpacklo_ps(zmm5_3, zmm4_3.q)).q
                int32_t rax_109 = var_228_4.d
                zmm1 = zx.o(var_234_1)
                *(r15_8 + rbx_17) = zmm6
                int32_t var_188_3 = rax_109
                *(r15_8 + rbx_17 + 0x10) = zmm1.q
                *(r15_8 + rbx_17 + 0x18) = rax_109
                int32_t rax_110 = data_1439b5bfc
                void* rbx_19 = rbx_17 + 0x28 + r15_8
                int32_t var_184_3 = rax_110
                int32_t var_17c_3 = rax_110
                int64_t rsi_8 = sx.q(*(rbx_19 + 0x90))
                var_240.o = zmm6
                uint64_t var_190_3 = zmm1.q
                int32_t rax_111 = (rsi_8 + 1).d
                *(rbx_19 + 0x90) = rax_111
                
                if (rax_111 s> *(rbx_19 + 0x94))
                    r8_2 = sub_14113b760(rbx_19, rsi_8.d)
                
                void* rax_112 = *(rbx_19 + 0x88)
                
                if (rax_112 != 0)
                    rbx_19 = rax_112
                
                i += 1
                int64_t rcx_75 = rsi_8 * 0x2c
                rsi_1 = arg2
                *(rbx_19 + rcx_75) = zmm6
                *(rbx_19 + rcx_75 + 0x10) = var_190_3.o
                *(rbx_19 + rcx_75 + 0x20) = rax_110.q
                *(rbx_19 + rcx_75 + 0x28) = 3
            while (i u< 2)
            
            r14_11 += 1
            r15_8 = &(*r15_8)[0x32]
        while (r14_11 s< arg8)
        
        r12 = var_1d0
else
    *(rax_12 + 0xed8) += 1
    void* rax_13 = *(rsi_1 + 0x15a8)
    
    if (*(rax_13 + 0xed8) s> 4)
        *(rax_13 + 0xed8) = 0
    
    int32_t i_8 = 0
    
    if (arg8 s> 0)
        zmm0_1 = 0x40400000
        int32_t i_15 = 0
        arg6 = 0x3f800000
        zmm9 = 0x3f000000
        uint128_t zmm13
        uint128_t var_c8_1 = zmm13
        float zmm14[0x4]
        float var_d8_1[0x4] = zmm14
        uint128_t zmm15
        uint128_t var_e8_1 = zmm15
        int32_t i_12
        
        do
            arg5 = data_1439b5bf8
            int32_t* r12_2 = *(rsi_1 + 0x15a8) + sx.q(i_15) * 0x60 + 0xd58
            float zmm0_2 = powf(arg5[0], zmm0_1.d)
            zmm14 = *(rdi + 0x631c)
            zmm14[0] = zmm14[0] / zmm0_2
            zmm1 = _mm_cvtepi32_ps(zx.o(i_15))
            zmm0_1 = powf(arg5[0], zmm1.d)
            zmm14[0] = zmm14[0] * zmm0_1[0]
            int32_t* rbx_3 = &r12_2[0xc]
            r15_1.b = 0
            int32_t i_1 = 0
            float temp0_4[0x4] = _mm_cvtepi32_ps(zx.o(data_1439b5bfc))
            arg7 = zmm14
            float var_1b4_1 = zmm14[0]
            arg7[0] = arg7[0] + zmm14[0]
            arg7[0] = arg7[0] / temp0_4[0]
            int32_t i_6
            
            do
                uint64_t i_10 = 1
                
                if (data_1439b5bec != 0)
                    i_10 = zx.q(i_1)
                
                uint64_t rsi_2 = i_10 * 2
                int64_t r14_3 = sx.q(*(arg3 + (rsi_2 << 3) + 0x1a60))
                
                if (r14_3.d != 0)
                    int32_t rax_15 = *rbx_3
                    int32_t rdx_4 = rax_15 + r14_3.d
                    
                    if (rdx_4 s> rbx_3[1])
                        sub_1405a5410(&rbx_3[-2], rdx_4)
                        rax_15 = *rbx_3
                    
                    memcpy((sx.q(rax_15) << 4) + *(rbx_3 - 8), *(arg3 + (rsi_2 << 3) + 0x1a58), 
                        (r14_3 << 4).d)
                    *rbx_3 += r14_3.d
                
                void* rax_17
                int64_t* rcx_16
                
                if (i_1 == 1 || data_1439b5bec != 0)
                    rcx_16 = *(rbx_3 + 8)
                    
                    if (rcx_16 != 0)
                        rax_17 = (*(*rcx_16 + 0x10))(rcx_16)
                
                if ((i_1 != 1 && data_1439b5bec == 0)
                        || (rcx_16 != 0 && *(rax_17 + 0x14) == data_1439b5bfc))
                    i_6 = i_8
                else
                    i_6 = i_8
                    sub_14111dc90(arg1, i_6, i_1, &rbx_3[2])
                    r15_1.b = 1
                
                i_1 += 1
                rbx_3 = &rbx_3[6]
            while (i_1 u< 2)
            
            int32_t* r12_4 = r12_2
            void* rcx_19 = *(arg2 + 0x15a8)
            char r9
            
            if (r15_1.b != 0 || *(rcx_19 + 0xd50) == 0 || zmm12.d f!= r12_4[6]
                    || (*(arg3 + 0x631c))[0] f!= r12_4[7] || r12_4[8] != data_1439b5bec
                    || *(r12_4 + 0x58) != arg3 + 0x18b0 || data_143e56ddc != 0
                    || data_143e5f630 != 0)
                r9 = 1
            else
                r9 = 0
            
            int32_t rcx_20
            int32_t r8_6
            
            if (i_6 == 0 || data_1439b5bf4 == 0)
                rcx_20 = 1
                r8_6 = 0
            else if (i_6 != 1)
                rcx_20 = 4
                
                r8_6 = i_6 != 2 ? 3 : 1
            else
                rcx_20 = i_6 + 1
                r8_6 = 0
            
            uint128_t zmm4_2
            
            if (mods.dp.d(sx.q(*(rcx_19 + 0xed8)), rcx_20) == r8_6 || r9 != 0)
                zmm2 = zx.o(*(arg2 + 0x60c))
                zmm3 = arg6
                int32_t rax_23 = *(arg2 + 0x614)
                zmm0_1 = zmm2
                zmm3[0] = zmm3[0] / arg7[0]
                char var_228_2 = 1
                float temp0_6[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
                zmm1.d = zmm3.d f* zmm2.d
                zmm1.d = zmm1.d f+ zmm1.d
                zmm1.d = zmm1.d f- zmm9.d
                zmm3[0] = zmm3[0] f* rax_23
                int32_t r11_2 = int.d(zmm1.d) s>> 1
                zmm1.d = zmm3.d f* temp0_6[0]
                int32_t var_208_1 = r11_2
                zmm3[0] = zmm3[0] + zmm3[0]
                arg6 = _mm_cvtepi32_ps(zx.o(r11_2))
                zmm3[0] = zmm3[0] f- zmm9.d
                zmm1.d = zmm1.d f+ zmm1.d
                arg6[0] = arg6[0] * arg7[0]
                zmm11 = arg6
                arg6[0] = arg6[0] - zmm14[0]
                zmm1.d = zmm1.d f- zmm9.d
                int32_t rbx_4 = int.d(zmm3[0])
                zmm11[0] = zmm11[0] + zmm14[0]
                var_240.d = arg6[0]
                int32_t rbx_5 = rbx_4 s>> 1
                int32_t var_204_1 = rbx_5
                int32_t rax_25 = int.d(zmm1.d) s>> 1
                bool cond:5_1 = data_1439b5bf0 == 0
                zmm10 = _mm_cvtepi32_ps(zx.o(rbx_5))
                int32_t var_124_1 = rax_25
                zmm9 = _mm_cvtepi32_ps(zx.o(rax_25))
                zmm10.d = zmm10.d f* arg7[0]
                zmm9.d = zmm9.d f* arg7[0]
                var_234.d = zmm11[0]
                zmm13.d = zmm10.d f+ zmm14[0]
                zmm10.d = zmm10.d f- zmm14[0]
                zmm12.d = zmm9.d f+ zmm14[0]
                zmm9.d = zmm9.d f- zmm14[0]
                int32_t var_22c_2 = zmm13.d
                int32_t var_238_2 = zmm10.d
                var_234:4.d = zmm12.d
                var_240:4.d = zmm9.d
                
                if (cond:5_1 || r9 != 0)
                    r12_4[1] = rax_25
                    r9 = 0
                    *r12_4 = r11_2
                    r12_4[2] = rbx_5
                    *(*(arg2 + 0x15a8) + 0xd50) = 1
                    *(r12_4 + 0x58) = arg3 + 0x18b0
                else
                    r9 = 1
                
                arg5 = var_240.o
                int32_t r8_7 = var_228_2.d
                zmm14 = zx.o(r11_2.q)
                zmm15 = zx.o(var_234)
                int32_t rax_28
                rax_28.b = data_1439b5bec == 0
                uint64_t rdx_9 = zx.q(rax_28)
                int32_t var_148_1 = rdx_9.d
                uint64_t var_1d8_1 = rdx_9
                char var_258_1 = r9
                uint64_t r15_2 = zx.q(rax_28)
                int32_t var_218_1 = r8_7
                float var_f8_1[0x4] = arg5
                
                while (true)
                    void* rcx_21 = sx.q(i_6) * 0xc8
                    uint64_t rax_30
                    
                    if (rdx_9.d != 0)
                        rax_30 = *(arg4 + 0x18)
                    else
                        rax_30 = *r13
                    
                    void* r13_1 = rcx_21 + rax_30
                    void* var_248_1 = r13_1
                    uint64_t rsi_3
                    
                    if (r9 != 0)
                        rsi_3 = r15_2 * 3
                    
                    if (r9 == 0 || r12_4[rsi_3 * 2 + 0xc] s>= 0x64)
                        rax_30.b = 0
                    else
                        int32_t rbx_6 = rbx_5 - r12_4[5]
                        int64_t var_170_1 = zmm14.q
                        var_170_1.d = r11_2 - r12_4[3]
                        var_170_1:4.d -= r12_4[4]
                        char var_250_1 = 1
                        uint64_t rdi_4
                        
                        if (rdx_9.d == 0 || data_1439b5bec == 0)
                            arg5 = zx.o(var_170_1)
                            rdi_4 = r13_1 + 0x28
                            int64_t var_118 = arg5.q
                            int32_t var_110_1 = rbx_6
                            sub_14111d840(&var_118, &var_240, arg7.d, 0, rdi_4)
                            int64_t var_108 = arg5.q
                            int32_t var_100_1 = rbx_6
                            sub_14111d840(&var_108, &var_240, arg7.d, 1, rdi_4)
                            int64_t var_1c8 = arg5.q
                            int32_t var_1c0_2 = rbx_6
                            sub_14111d840(&var_1c8, &var_240, arg7.d, 2, rdi_4)
                        else
                            rdi_4 = r13_1 + 0x28
                            void* rbx_9 = *(arg4 + 8) + 0x28 + rcx_21
                            int32_t r14_4 = *(rbx_9 + 0x90)
                            
                            if (r14_4 != 0)
                                int32_t r10_3 = *(rdi_4 + 0x90)
                                int32_t rdx_10 = r10_3 + r14_4
                                
                                if (rdx_10 s> *(rdi_4 + 0x94))
                                    sub_14113b8d0(rdi_4, rdx_10)
                                    r10_3 = *(rdi_4 + 0x90)
                                
                                void* rcx_23 = *(rbx_9 + 0x88)
                                uint64_t r9_2 = *(rdi_4 + 0x88)
                                
                                if (rcx_23 != 0)
                                    rbx_9 = rcx_23
                                
                                uint64_t rcx_24 = rdi_4
                                
                                if (r9_2 != 0)
                                    rcx_24 = r9_2
                                
                                memcpy(rcx_24 + sx.q(r10_3) * 0x2c, rbx_9, r14_4 * 0x2c)
                                *(rdi_4 + 0x90) += r14_4
                        
                        zmm0_1 = tanf(data_1439b5b9c[0])
                        zmm0_1[0] = zmm0_1[0] + 1f
                        arg5 = arg9
                        int32_t i_2 = 0
                        arg5[0] = arg5[0] / zmm0_1[0]
                        
                        if (r12_4[rsi_3 * 2 + 0xc] s> 0)
                            do
                                arg5, arg6, arg7, zmm9, zmm10, zmm11 = sub_14111d970(
                                    (sx.q(i_2) << 4) + *(r12_4 + r15_2 * 0x18 + 0x28), arg5, 
                                    &var_240, arg7, rdi_4)
                                i_2 += 1
                            while (i_2 s< r12_4[rsi_3 * 2 + 0xc])
                        
                        int32_t i_13 = *(r13_1 + 0xb8)
                        int32_t r14_6 = 0
                        int32_t var_214_1 = 0
                        int64_t rsi_4 = 0
                        int32_t i_14 = i_13
                        
                        if (i_13 s> 0)
                            int32_t r15_3 = 1
                            int64_t rbx_10 = 0
                            
                            do
                                uint64_t rax_35 = *(rdi_4 + 0x88)
                                uint64_t rcx_32 = rdi_4
                                int64_t i_3 = 0
                                
                                if (rax_35 != 0)
                                    rcx_32 = rax_35
                                
                                if (i_13 s> 0)
                                    float (* rax_36)[0x4] = rcx_32 + 4
                                    
                                    do
                                        if (rsi_4 != i_3)
                                            zmm0_1 = *(rcx_32 + rbx_10)
                                            zmm1 = (*rax_36)[-1]
                                            
                                            if (not(zmm0_1[0] f< zmm1.d))
                                                zmm2 = (*rax_36)[2]
                                                
                                                if (not(zmm0_1[0] f> zmm2.d))
                                                    zmm0_1 = *(rcx_32 + rbx_10 + 4)
                                                    zmm3 = *rax_36
                                                    
                                                    if (not(zmm0_1[0] < zmm3[0]))
                                                        zmm4_2 = (*rax_36)[3]
                                                        
                                                        if (not(zmm0_1[0] f> zmm4_2.d))
                                                            zmm0_1 = *(rcx_32 + rbx_10 + 8)
                                                            arg5 = (*rax_36)[1]
                                                            
                                                            if (not(zmm0_1[0] < arg5[0]))
                                                                float zmm5_2 = rax_36[1][0]
                                                                
                                                                if (not(zmm0_1[0] > zmm5_2))
                                                                    zmm0_1 = *(rcx_32 + rbx_10 + 0xc)
                                                                    
                                                                    if (not(zmm0_1[0] f< zmm1.d)
                                                                            && not(zmm0_1[0] f> zmm2.d))
                                                                        zmm0_1 = *(rcx_32 + rbx_10 + 0x10)
                                                                        
                                                                        if (not(zmm0_1[0] < zmm3[0])
                                                                                && not(zmm0_1[0] f> zmm4_2.d))
                                                                            zmm0_1 = *(rcx_32 + rbx_10 + 0x14)
                                                                            
                                                                            if (not(zmm0_1[0] < arg5[0])
                                                                                    && zmm0_1[0] <= zmm5_2)
                                                                                int32_t rax_37 = *(rdi_4 + 0x90)
                                                                                int32_t rcx_34 = rax_37 - r14_6
                                                                                
                                                                                if (rcx_34 != 1)
                                                                                    uint64_t rax_38 = *(rdi_4 + 0x88)
                                                                                    uint64_t r9_5 = rdi_4
                                                                                    
                                                                                    if (rax_38 != 0)
                                                                                        r9_5 = rax_38
                                                                                    
                                                                                    memmove(sx.q(r14_6) * 0x2c + r9_5, 
                                                                                        sx.q(r15_3) * 0x2c + r9_5, 
                                                                                        (rcx_34 - 1) * 0x2c)
                                                                                    rax_37 = *(rdi_4 + 0x90)
                                                                                
                                                                                *(rdi_4 + 0x90) = rax_37 - 1
                                                                                sub_14113b800(rdi_4)
                                                                                r14_6 -= 1
                                                                                r15_3 -= 1
                                                                                rsi_4 -= 1
                                                                                rbx_10 -= 0x2c
                                                                                break
                                        
                                        i_3 += 1
                                        rax_36 = &(*rax_36)[0xb]
                                    while (i_3 s< sx.q(i_13))
                                
                                i_13 = *(r13_1 + 0xb8)
                                r14_6 += 1
                                r15_3 += 1
                                rsi_4 += 1
                                rbx_10 += 0x2c
                                i_14 = i_13
                            while (r14_6 s< i_13)
                        
                        int32_t r12_5 = 0
                        int64_t r15_4 = 0
                        
                        if (i_13 s> 0)
                            int32_t r10_4 = 1
                            int32_t i_16 = i_13
                            int32_t var_220_1 = 1
                            int64_t r13_2 = 0
                            
                            do
                                uint64_t rax_43 = *(rdi_4 + 0x88)
                                uint64_t r9_6 = rdi_4
                                int32_t r14_7 = 0
                                int64_t rbx_11 = 0
                                i_13 = i_14
                                
                                if (rax_43 != 0)
                                    r9_6 = rax_43
                                
                                int32_t* r9_7 = r9_6 + r13_2
                                
                                if (i_16 s> 0)
                                    void* rax_44 = var_248_1
                                    int64_t rsi_5 = 0
                                    
                                    while (true)
                                        if (r15_4 != rbx_11)
                                            uint64_t rax_45 = *(rdi_4 + 0x88)
                                            uint64_t r8_11 = rdi_4
                                            
                                            if (rax_45 != 0)
                                                r8_11 = rax_45
                                            
                                            int32_t* r8_12 = r8_11 + rsi_5
                                            
                                            if (not(r9_7[3][0] f< *r8_12)
                                                    && not(r8_12[3][0] f< *r9_7)
                                                    && not(r9_7[4][0] f< r8_12[1])
                                                    && not(r8_12[4][0] f< r9_7[1])
                                                    && not(r9_7[5][0] f< r8_12[2])
                                                    && not(r8_12[5][0] f< r9_7[2]))
                                                sub_1411563a0(0, arg7.d, r8_12, r9_7)
                                                sub_1411563a0(1, arg7[0], r8_12, r9_7)
                                                sub_1411563a0(2, arg7[0], r8_12, r9_7)
                                                
                                                if (r9_7[7] == 0 || r9_7[8] == 0 || r9_7[9] == 0)
                                                    int32_t rax_51 = *(rdi_4 + 0x90)
                                                    int32_t rcx_42 = rax_51 - r12_5
                                                    
                                                    if (rcx_42 != 1)
                                                        uint64_t rax_52 = *(rdi_4 + 0x88)
                                                        uint64_t r9_9 = rdi_4
                                                        
                                                        if (rax_52 != 0)
                                                            r9_9 = rax_52
                                                        
                                                        memmove(sx.q(r12_5) * 0x2c + r9_9, 
                                                            sx.q(var_220_1) * 0x2c + r9_9, 
                                                            (rcx_42 - 1) * 0x2c)
                                                        rax_51 = *(rdi_4 + 0x90)
                                                    
                                                    *(rdi_4 + 0x90) = rax_51 - 1
                                                    sub_14113b800(rdi_4)
                                                    r12_5 -= 1
                                                    r15_4 -= 1
                                                    r10_4 = var_220_1 - 1
                                                    r13_2 -= 0x2c
                                                    i_13 = *(var_248_1 + 0xb8)
                                                    break
                                            
                                            rax_44 = var_248_1
                                        
                                        i_13 = *(rax_44 + 0xb8)
                                        r14_7 += 1
                                        rbx_11 += 1
                                        rsi_5 += 0x2c
                                        
                                        if (r14_7 s>= i_13)
                                            r10_4 = var_220_1
                                            break
                                
                                r10_4 += 1
                                r12_5 += 1
                                r15_4 += 1
                                var_220_1 = r10_4
                                r13_2 += 0x2c
                                i_16 = i_13
                                i_14 = i_13
                            while (r12_5 s< i_13)
                            
                            r13_1 = var_248_1
                        
                        int32_t r9_8 = var_214_1
                        int64_t i_11 = sx.q(i_13)
                        
                        if (i_13 s> 0)
                            uint64_t rax_46 = *(rdi_4 + 0x88)
                            uint64_t rdx_17 = rdi_4
                            int64_t rcx_39 = 0
                            
                            if (rax_46 != 0)
                                rdx_17 = rax_46
                            
                            int64_t i_4
                            
                            do
                                int32_t rax_48 =
                                    *(rcx_39 + rdx_17 + 0x24) * *(rcx_39 + rdx_17 + 0x20)
                                rcx_39 += 0x2c
                                r9_8 += rax_48 * *(rcx_39 + rdx_17 - 0x10)
                                i_4 = i_11
                                i_11 -= 1
                            while (i_4 != 1)
                        
                        int32_t rax_50 = data_1439b5bfc
                        
                        if (r9_8 s< rax_50 * rax_50 * rax_50)
                            rax_30 = 1
                        else
                            rax_30 = zx.q(*(rdi_4 + 0x94))
                            *(rdi_4 + 0x90) = 0
                            
                            if (rax_30.d s< 0 && rax_30.d != 0)
                                sub_14113b8d0(rdi_4, 0)
                            
                            rax_30.b = 0
                        
                        r8_7 = var_218_1
                        r15_2 = var_1d8_1
                        r12_4 = r12_2
                        i_6 = i_8
                        arg5 = var_f8_1
                    
                    if (rax_30.b == 0)
                        int32_t rax_58 = data_1439b5bfc
                        void* rbx_12 = r13_1 + 0x28
                        int64_t rdi_5 = sx.q(*(rbx_12 + 0x90))
                        int32_t var_184_1 = rax_58
                        int32_t var_17c_1 = rax_58
                        int32_t rax_59 = (rdi_5 + 1).d
                        uint64_t var_190_1 = zmm15.q
                        int32_t var_188_1 = r8_7
                        *(rbx_12 + 0x90) = rax_59
                        
                        if (rax_59 s> *(rbx_12 + 0x94))
                            sub_14113b760(rbx_12, rdi_5.d)
                        
                        void* rax_60 = *(rbx_12 + 0x88)
                        
                        if (rax_60 != 0)
                            rbx_12 = rax_60
                        
                        int64_t rcx_48 = rdi_5 * 0x2c
                        *(rbx_12 + rcx_48) = arg5
                        *(rbx_12 + rcx_48 + 0x10) = var_190_1.o
                        *(rbx_12 + rcx_48 + 0x20) = rax_58.q
                        *(rbx_12 + rcx_48 + 0x28) = 3
                    
                    r8_7.b = 0
                    void* i_5 = sx.q(var_21c) * 0x1c + var_1d0
                    
                    if (var_1d0 != i_5)
                        int32_t* rcx_49 = var_1d0 + 0x10
                        
                        do
                            if (not(arg6[0] f> rcx_49[-1]) && not(zmm11[0] f< rcx_49[-4])
                                    && not(zmm9.d f> *rcx_49) && not(zmm12.d f< rcx_49[-3])
                                    && not(zmm10.d f> rcx_49[1]) && zmm13.d f>= rcx_49[-2])
                                r8_7.b = 1
                                break
                            
                            rcx_49 = &rcx_49[7]
                        while (&rcx_49[-4] != i_5)
                    
                    int64_t* r13_5 = *(arg2 + 0x15a8) + 0x318 + (r15_2 << 4)
                    
                    if (r8_7.b == 0)
                        int64_t rcx_57 = sx.q(r13_5[1].d)
                        int32_t rax_71
                        
                        if (rcx_57.d != 0)
                            int32_t r15_5 = 0
                            int32_t rdi_6 = 0
                            int64_t rbx_14 = 0
                            r12_4.b = **r13_5 != i_6
                            
                            do
                                int64_t r9_10 = sx.q(rdi_6)
                                rbx_14 += 1
                                rdi_6 += 1
                                
                                if (rbx_14 s< rcx_57)
                                    int64_t rcx_58 = *r13_5 + (rbx_14 << 2)
                                    
                                    do
                                        int32_t rax_74
                                        rax_74.b = *rcx_58 != i_6
                                        
                                        if (zx.d(r12_4.b) != rax_74)
                                            break
                                        
                                        rdi_6 += 1
                                        rbx_14 += 1
                                        rcx_58 += 4
                                    while (rbx_14 s< rcx_57)
                                
                                int32_t r14_9 = rdi_6 - r9_10.d
                                
                                if (r12_4.b != 0)
                                    if (r15_5 != r9_10.d)
                                        int64_t rcx_59 = *r13_5
                                        memmove(rcx_59 + (sx.q(r15_5) << 2), rcx_59 + (r9_10 << 2), 
                                            r14_9 << 2)
                                    
                                    r15_5 += r14_9
                                
                                i_6 = i_8
                                r12_4.b ^= 1
                            while (rbx_14 s< rcx_57)
                            
                            r13_5[1].d = r15_5
                            rax_71 = rcx_57.d - r15_5
                            r15_2 = var_1d8_1
                        else
                            rax_71 = 0
                        
                        if (rax_71 s> 0)
                            float (* rbx_15)[0x4] = var_248_1 + 0x28
                            float (* rax_77)[0x4] = *(rbx_15 + 0x88)
                            float (* rcx_61)[0x4] = rbx_15
                            uint64_t rdi_7 = sx.q(rbx_15[9][0])
                            
                            if (rax_77 != 0)
                                rcx_61 = rax_77
                            
                            void* rdx_30 = rdi_7 * 0x2c + rcx_61
                            
                            if (rcx_61 != rdx_30)
                                do
                                    (*rcx_61)[0xa] &= 0xfffffffd
                                    rcx_61 = &(*rcx_61)[0xb]
                                while (rcx_61 != rdx_30)
                                
                                rdi_7 = zx.q(*(var_248_1 + 0xb8))
                            
                            int32_t var_188_2 = var_218_1
                            int32_t rax_79 = data_1439b5bfc
                            int32_t var_184_2 = rax_79
                            int32_t var_17c_2 = rax_79
                            int32_t rax_80 = (rdi_7 + 1).d
                            uint64_t var_190_2 = zmm15.q
                            rbx_15[9][0] = rax_80
                            
                            if (rax_80 s> (*rbx_15)[0x25])
                                sub_14113b760(rbx_15, rdi_7.d)
                            
                            float (* rax_81)[0x4] = *(rbx_15 + 0x88)
                            
                            if (rax_81 != 0)
                                rbx_15 = rax_81
                            
                            int64_t rcx_63 = sx.q(rdi_7.d) * 0x2c
                            *(rbx_15 + rcx_63) = arg5
                            *(rbx_15 + rcx_63 + 0x10) = var_190_2.o
                            *(rbx_15 + rcx_63 + 0x20) = rax_79.q
                            (*rbx_15)[sx.q(rdi_7.d) * 0xb + 0xa] = 2
                        
                        r12_4 = r12_2
                        i_6 = i_8
                    else
                        int32_t* rdx_25 = *r13_5
                        int64_t r8_14 = sx.q(r13_5[1].d)
                        int32_t* rax_65 = rdx_25
                        void* rcx_52 = &rdx_25[r8_14]
                        
                        if (rdx_25 != rcx_52)
                            while (*rax_65 != i_6)
                                rax_65 = &rax_65[1]
                                
                                if (rax_65 == rcx_52)
                                    goto label_14112116d
                        
                        if (rdx_25 == rcx_52 || ((rax_65 - rdx_25) s>> 2).d == 0xffffffff)
                        label_14112116d:
                            int32_t rax_68 = (r8_14 + 1).d
                            r13_5[1].d = rax_68
                            
                            if (rax_68 s> *(r13_5 + 0xc))
                                sub_1405a4cf0(r13_5)
                            
                            *(*r13_5 + (r8_14 << 2)) = i_6
                        
                        void* i_9 = *(var_248_1 + 0xb0)
                        void* i_7 = var_248_1 + 0x28
                        
                        if (i_9 != 0)
                            i_7 = i_9
                        
                        for (void* rcx_56 = sx.q(*(var_248_1 + 0xb8)) * 0x2c + i_7; i_7 != rcx_56; 
                                i_7 += 0x2c)
                            *(i_7 + 0x28) &= 0xfffffffd
                    
                    int32_t rax_83 = r12_4[(r15_2 * 3 + 5) * 2 + 3]
                    void* rcx_66 = &r12_4[(r15_2 * 3 + 5) * 2]
                    *(rcx_66 + 8) = 0
                    
                    if (rax_83 s< 0 && rax_83 != 0)
                        sub_1405a5410(rcx_66, 0)
                    
                    r15_2 += 1
                    r8_7 = var_218_1
                    rdx_9 = zx.q(var_148_1 + 1)
                    r11_2 = var_208_1
                    rbx_5 = var_204_1
                    r9 = var_258_1
                    var_148_1 = rdx_9.d
                    var_1d8_1 = r15_2
                    
                    if (rdx_9.d u>= 2)
                        break
                    
                    r13 = var_140
                
                zmm14 = var_1b4_1
                zmm12 = arg9
                zmm9 = 0x3f000000
                r12_4[3] = r11_2
                r12_4[4] = rax_25
                r12_4[5] = rbx_5
            
            zmm3 = zx.o(r12_4[5])
            int64_t var_1e8_1 = *(r12_4 + 0xc)
            zmm4_2 = _mm_cvtepi32_ps(zx.o(var_1e8_1.d))
            bool cond:6_1 = data_1439b5bec == 0
            zmm2 = _mm_cvtepi32_ps(zx.o((var_1e8_1 u>> 0x20).d))
            int32_t rax_89
            rax_89.b = cond:6_1
            uint64_t r14_10 = zx.q(rax_89)
            zmm4_2.d = zmm4_2.d f* arg7[0]
            float temp0_12[0x4] = _mm_cvtepi32_ps(zmm3)
            zmm0_1 = zmm4_2
            zmm2.d = zmm2.d f* arg7[0]
            zmm0_1[0] = zmm0_1[0] + zmm14[0]
            temp0_12[0] = temp0_12[0] * arg7[0]
            zmm4_2.d = zmm4_2.d f- zmm14[0]
            float (* rdi_8)[0x4] = sx.q(i_8) * 0xc8
            float var_164_1 = zmm0_1[0]
            zmm1.d = zmm2.d f+ zmm14[0]
            int32_t var_158_1 = zmm4_2.d
            temp0_12[0] = temp0_12[0] + zmm14[0]
            zmm2.d = zmm2.d f- zmm14[0]
            temp0_12[0] = temp0_12[0] - zmm14[0]
            int32_t var_160_1 = zmm1.d
            float var_15c_1 = temp0_12[0]
            int32_t var_154_1 = zmm2.d
            r15_1 = &r12_4[(r14_10 * 3 + 7) * 2]
            float var_150_1 = temp0_12[0]
            
            do
                int64_t rbx_16
                
                if (r14_10.d != 0)
                    rbx_16 = *(arg4 + 0x18)
                else
                    rbx_16 = *(arg4 + 8)
                
                int64_t* rcx_67 = *r15_1
                int64_t* rsi_7 = *(rdi_8 + rbx_16 + 0xc0)
                *(rdi_8 + rbx_16 + 0xc0) = rcx_67
                
                if (rcx_67 != 0)
                    (*(*rcx_67 + 0x30))()
                
                if (rsi_7 != 0)
                    (*(*rsi_7 + 0x38))(rsi_7)
                
                r8_2 = r12_2
                var_234 = var_164_1.q
                r14_10 = zx.q(r14_10.d + 1)
                float var_238_3 = var_150_1
                r15_1 += 0x18
                zmm0_1 = var_240.o
                float var_22c_3 = var_15c_1
                zmm0_1[0].q = var_158_1.q
                *(rdi_8 + rbx_16) = zmm0_1
                var_240.o = zmm0_1
                *(rdi_8 + rbx_16 + 0x10) = var_234
                *(rdi_8 + rbx_16 + 0x18) = 1.d
                int64_t var_1b0_1
                var_1b0_1:4.d = (*(r8_2 + 0xc)):4.d - r8_2[1]
                int32_t rcx_70 = var_1b0_1.d - *r8_2
                var_1b0_1.d = rcx_70
                zmm0_1 = zx.o(r8_2[5] - r8_2[2])
                zmm1.d = _mm_cvtepi32_ps(zx.o(rcx_70)).d f* arg7[0]
                zmm2 = _mm_cvtepi32_ps(zx.o((var_1b0_1 u>> 0x20).d))
                float temp0_15[0x4] = _mm_cvtepi32_ps(zmm0_1)
                zmm2.d = zmm2.d f* arg7[0]
                temp0_15[0] = temp0_15[0] * arg7[0]
                *(rdi_8 + rbx_16 + 0x1c) = (_mm_unpacklo_ps(zmm1, zmm2.q)).q
                *(rdi_8 + rbx_16 + 0x24) = temp0_15[0]
            while (r14_10.d u< 2)
            
            rdi = arg3
            arg6 = 0x3f800000
            zmm0_1 = 0x40400000
            r13 = var_140
            rsi_1 = arg2
            r8_2[6] = zmm12.d
            r8_2[7] = *(rdi + 0x631c)
            r8_2[8] = data_1439b5bec
            i_12 = i_8 + 1
            i_15 = i_12
            i_8 = i_12
        while (i_12 s< arg8)
        r12 = var_1d0

int64_t result
int512_t zmm6_1
int512_t zmm7
int512_t zmm8
result, zmm6_1, zmm7, zmm8 = sub_14115dd50(arg4, zmm12, r8_2)
zmm8.o = var_78
zmm7.o = var_68
zmm6_1.o = var_58

if (r12 == 0)
    return result

return sub_140a74f90(r12)
