// 函数: sub_14081dc60
// 地址: 0x14081dc60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r14 = *arg2
float zmm3[0x4] = data_14396f070
int32_t rdi = 1
int64_t r9 = sx.q(*r14)
float zmm7[0x4] = zx.o(0)
float zmm9[0x4] = zx.o(0)
float zmm12[0x4] = data_143dbb1f8
float zmm13[0x4] = data_143dbb1fc
float zmm14[0x4] = data_143dbb200
float zmm15[0x4] = 0x3f800000
float var_148 = 0f
float arg_8 = 0f
void* r12 = **arg1
float arg_10 = 0f
float arg_20 = 0f
float rax_1 = *(r12 + 0x40)
void* rax_2 = arg1[1]
int64_t rcx = sx.q(arg2[1].d)
int64_t r10 = *(rax_2 + 0x38)
int64_t r11 = *(rax_2 + 0x40)
int64_t rsi = *(rax_2 + 0x48)
float zmm4[0x4] = *(r10 + (r9 << 2))
float zmm5[0x4] = *(r11 + (r9 << 2))
float zmm8[0x4] = zmm4
float zmm6[0x4] = *(rsi + (r9 << 2))
float zmm10[0x4] = zmm5
float zmm11[0x4] = zmm6
float zmm2[0x4]

if (rcx.d s> 1)
    int64_t r8 = 1
    char r15_1 = *arg1[2]
    
    do
        int64_t rdx = sx.q(r14[r8])
        zmm8 = *(r10 + (rdx << 2))
        zmm10 = *(r11 + (rdx << 2))
        zmm12 = zmm8
        zmm11 = *(rsi + (rdx << 2))
        zmm13 = zmm10
        zmm12[0] = zmm12[0] - zmm4[0]
        zmm14 = zmm11
        zmm13[0] = zmm13[0] - zmm5[0]
        zmm14[0] = zmm14[0] - zmm6[0]
        zmm12[0] = zmm12[0] * zmm12[0]
        zmm13[0] = zmm13[0] * zmm13[0]
        zmm14[0] = zmm14[0] * zmm14[0]
        zmm13[0] = zmm13[0] + zmm12[0]
        zmm13[0] = zmm13[0] + zmm14[0]
        zmm7 = _mm_sqrt_ss(zx.o(0)[0], zmm13[0])
        arg_8 = zmm7[0]
        
        if (r15_1 != 0)
            arg_10 = (*(*(arg1[3] + 0x38) + (rdx << 2)))[0]
            arg_20 = (*(*(arg1[4] + 0x38) + (rdx << 2)))[0]
        
        if (zmm7[0] > zmm3[0])
            int64_t r15_2 = sx.q(*(r12 + 0x40))
            zmm2 = 0x3f800000
            zmm2[0] = 1f / zmm7[0]
            int32_t rax_6 = (r15_2 + 1).d
            *(r12 + 0x40) = rax_6
            zmm2[0] = zmm2[0] * zmm12[0]
            zmm2[0] = zmm2[0] * zmm13[0]
            zmm12 = zmm2
            zmm2[0] = zmm2[0] * zmm14[0]
            zmm13 = zmm2
            zmm14 = zmm2
            
            if (rax_6 s> *(r12 + 0x44))
                sub_1405a4cf0(r12 + 0x38)
            
            int64_t var_138
            var_138.d = zmm12[0]
            var_138:4.d = zmm13[0]
            float var_130_1 = zmm14[0]
            *(*(r12 + 0x38) + (r15_2 << 2)) = *r14
            int32_t var_12c_1 = 0
            void* rsi_1 = **arg1
            int64_t r14_1 = sx.q(*(rsi_1 + 0x50))
            int32_t rax_9 = (r14_1 + 1).d
            *(rsi_1 + 0x50) = rax_9
            
            if (rax_9 s> *(rsi_1 + 0x54))
                sub_1405a4f90(rsi_1 + 0x48)
            
            *(*(rsi_1 + 0x48) + r14_1 * 0x10) = var_138.o
            void* rsi_2 = **arg1
            int64_t r14_2 = sx.q(*(rsi_2 + 0x60))
            int32_t rax_12 = (r14_2 + 1).d
            *(rsi_2 + 0x60) = rax_12
            
            if (rax_12 s> *(rsi_2 + 0x64))
                sub_1405a4cf0(rsi_2 + 0x58)
            
            *(*(rsi_2 + 0x58) + (r14_2 << 2)) = arg3
            zmm3 = data_14396f070
            break
        
        rdi += 1
        r8 += 1
        zmm7 = zx.o(0)
        arg_8 = zmm7[0]
    while (r8 s< rcx)

int32_t r8_1 = arg2[1].d
int32_t rsi_3 = rdi + 1
float zmm0[0x4]
float zmm1[0x4]

if (rsi_3 s< r8_1)
    int64_t r9_2 = sx.q(rdi) << 2
    int64_t var_138_1 = r9_2
    int64_t r15_3 = sx.q(rsi_3) << 2
    int32_t rcx_13
    
    do
        void* rcx_10 = arg1[1]
        int32_t* r12_1 = *arg2
        float var_128_1 = 0f
        float var_124_1 = 0f
        int64_t rdx_5 = sx.q(*(r12_1 + r15_3))
        zmm0 = *(*(rcx_10 + 0x38) + (rdx_5 << 2))
        int64_t rax_16 = *(rcx_10 + 0x40)
        float var_fc_1 = zmm0[0]
        zmm0[0] = zmm0[0] - zmm8[0]
        zmm1 = *(rax_16 + (rdx_5 << 2))
        int64_t rax_17 = *(rcx_10 + 0x48)
        zmm1[0] = zmm1[0] - zmm10[0]
        float var_f8_1 = zmm1[0]
        zmm0[0] = zmm0[0] * zmm0[0]
        zmm5 = *(rax_17 + (rdx_5 << 2))
        int64_t rax_18 = arg1[2]
        zmm1[0] = zmm1[0] * zmm1[0]
        float var_f4_1 = zmm5[0]
        zmm5[0] = zmm5[0] - zmm11[0]
        bool cond:0_1 = *rax_18 == 0
        zmm1[0] = zmm1[0] + zmm0[0]
        zmm5[0] = zmm5[0] * zmm5[0]
        zmm1[0] = zmm1[0] + zmm5[0]
        float temp0_2[0x4] = _mm_sqrt_ss(0, zmm1[0])
        float var_108_1 = temp0_2[0]
        
        if (not(cond:0_1))
            var_128_1 = (*(*(arg1[3] + 0x38) + (rdx_5 << 2)))[0]
            var_124_1 = (*(*(arg1[4] + 0x38) + (rdx_5 << 2)))[0]
        
        if (not(temp0_2[0] > zmm3[0]))
            rcx_13 = r8_1
        
        if (temp0_2[0] > zmm3[0] || rsi_3 == r8_1 - 1)
            zmm7 = 0x3f800000
            float temp0_3[0x4] = _mm_max_ss(zmm3[0], temp0_2[0])
            zmm15[0] = zmm15[0] / temp0_3[0]
            zmm15[0] = zmm15[0] * zmm0[0]
            zmm15[0] = zmm15[0] * zmm1[0]
            zmm8 = zmm15
            float var_100_1 = zmm15[0]
            zmm8[0] = zmm8[0] + zmm12[0]
            zmm15[0] = zmm15[0] * zmm5[0]
            zmm10 = zmm15
            float var_104_1 = zmm15[0]
            zmm10[0] = zmm10[0] + zmm13[0]
            zmm11 = zmm15
            zmm11[0] = zmm11[0] + zmm14[0]
            zmm8[0] = zmm8[0] * zmm8[0]
            zmm10[0] = zmm10[0] * zmm10[0]
            zmm11[0] = zmm11[0] * zmm11[0]
            zmm10[0] = zmm10[0] + zmm8[0]
            zmm10[0] = zmm10[0] + zmm11[0]
            
            if (not(zmm10[0] == 1f))
                if (zmm10[0] >= 9.99999994e-09f)
                    zmm4 = 0x3f000000
                    zmm3 = zx.o(0)
                    zmm2 = 0x3f000000
                    zmm3[0] = zmm10[0]
                    float temp0_4[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
                    zmm3[0] = zmm3[0] * 0.5f
                    temp0_4[0] = temp0_4[0] * temp0_4[0]
                    zmm3[0] = zmm3[0] * temp0_4[0]
                    zmm2[0] = 0.5f - zmm3[0]
                    temp0_4[0] = temp0_4[0] * zmm2[0]
                    temp0_4[0] = temp0_4[0] + temp0_4[0]
                    temp0_4[0] = temp0_4[0] * temp0_4[0]
                    zmm3[0] = zmm3[0] * temp0_4[0]
                    zmm4[0] = 0.5f - zmm3[0]
                    temp0_4[0] = temp0_4[0] * zmm4[0]
                    temp0_4[0] = temp0_4[0] + temp0_4[0]
                    float var_11c_1 = temp0_4[0]
                    temp0_4[0] = temp0_4[0] * zmm8[0]
                    temp0_4[0] = temp0_4[0] * zmm10[0]
                    temp0_4[0] = temp0_4[0] * zmm11[0]
                    zmm8 = temp0_4
                    zmm10 = temp0_4
                    zmm11 = temp0_4
                else
                    zmm8 = data_143dbb1f8
                    zmm10 = data_143dbb1fc
                    zmm11 = data_143dbb200
            
            zmm7[0] = 1f f- *(arg1[5] + 0x21c)
            void* rdi_1 = **arg1
            zmm0 = zmm7
            zmm0[0] = zmm0[0] * zmm8[0]
            zmm7[0] = zmm7[0] * zmm10[0]
            int64_t r14_3 = sx.q(*(rdi_1 + 0x40))
            zmm10 = var_148
            zmm10[0] = zmm10[0] + arg_8
            float var_11c_2 = zmm0[0]
            int32_t rax_24 = (r14_3 + 1).d
            zmm7[0] = zmm7[0] * zmm11[0]
            *(rdi_1 + 0x40) = rax_24
            var_148 = zmm10[0]
            
            if (rax_24 s> *(rdi_1 + 0x44))
                sub_1405a4cf0(rdi_1 + 0x38)
                zmm0 = var_11c_2
                r9_2 = var_138_1
            
            float var_118_1 = zmm0[0]
            float var_114_1 = zmm7[0]
            *(*(rdi_1 + 0x38) + (r14_3 << 2)) = *(r12_1 + r9_2)
            float var_110_1 = zmm7[0]
            float var_10c_1 = zmm10[0]
            void* rdi_2 = **arg1
            int64_t r14_4 = sx.q(*(rdi_2 + 0x50))
            int32_t rax_27 = (r14_4 + 1).d
            *(rdi_2 + 0x50) = rax_27
            
            if (rax_27 s> *(rdi_2 + 0x54))
                sub_1405a4f90(rdi_2 + 0x48)
            
            *(*(rdi_2 + 0x48) + r14_4 * 0x10) = var_118_1.o
            void* rdi_3 = **arg1
            int64_t r14_5 = sx.q(*(rdi_3 + 0x60))
            int32_t rax_30 = (r14_5 + 1).d
            *(rdi_3 + 0x60) = rax_30
            
            if (rax_30 s> *(rdi_3 + 0x64))
                sub_1405a4cf0(rdi_3 + 0x58)
            
            zmm4 = var_108_1
            zmm5 = var_100_1
            *(*(rdi_3 + 0x58) + (r14_5 << 2)) = arg3
            int32_t* rax_32 = arg1[6]
            zmm15[0] = zmm15[0] * zmm14[0]
            zmm4[0] = zmm4[0] f+ *rax_32
            *rax_32 = zmm4[0]
            int32_t* rax_33 = arg1[7]
            zmm5[0] = zmm5[0] * zmm12[0]
            zmm1[0] = zmm1[0] f+ *rax_33
            *rax_33 = zmm1[0]
            zmm6 = var_104_1
            zmm6[0] = zmm6[0] * zmm13[0]
            zmm6[0] = zmm6[0] + zmm5[0]
            zmm0 = 0x3f800000
            zmm6[0] = zmm6[0] + zmm15[0]
            bool cond:1_1 = zmm6[0] >= 0f
            zmm2 = _mm_and_ps(zmm6, 0x7fffffff)
            zmm0[0] = 1f - zmm2[0]
            zmm2[0] = zmm2[0] * 0.156582996f
            zmm1 = _mm_sqrt_ss(0, _mm_max_ss(zmm0[0], 0)[0])
            zmm0 = 0x3fc90fdb
            zmm0[0] = 1.57079637f - zmm2[0]
            zmm1[0] = zmm1[0] * zmm0[0]
            
            if (not(cond:1_1))
                zmm0 = 0x40490fdb
                zmm0[0] = 3.14159274f - zmm1[0]
                zmm1 = zmm0
            
            int32_t* rax_34 = arg1[8]
            zmm14 = zmm15
            zmm8 = var_fc_1
            rdi = rsi_3
            zmm10 = var_f8_1
            r9_2 = r15_3
            zmm11 = var_f4_1
            zmm12 = zmm5
            zmm15 = 0x3f800000
            zmm13 = zmm6
            zmm1[0] = zmm1[0] * zmm4[0]
            var_138_1 = r15_3
            arg_8 = zmm4[0]
            zmm1[0] = zmm1[0] f+ *rax_34
            *rax_34 = zmm1[0]
            int32_t* rax_35 = arg1[9]
            zmm1 = var_128_1
            zmm1[0] = zmm1[0] - arg_10
            arg_10 = zmm1[0]
            zmm0 = _mm_and_ps(zmm1, 0x7fffffff)
            zmm7 = zmm4
            zmm0[0] = zmm0[0] * zmm4[0]
            zmm0[0] = zmm0[0] f+ *rax_35
            *rax_35 = zmm0[0]
            zmm4[0] = zmm4[0] * arg_20
            int32_t* rax_36 = arg1[0xa]
            zmm4[0] = zmm4[0] f+ *rax_36
            *rax_36 = zmm4[0]
            rcx_13 = arg2[1].d
            zmm3 = data_14396f070
            arg_20 = var_124_1[0]
        
        rsi_3 += 1
        r15_3 += 4
        r8_1 = rcx_13
    while (rsi_3 s< rcx_13)

int32_t rdx_13

if (zmm7[0] <= 0f)
    rdx_13 = arg3
else
    int64_t* rax_37 = *arg1
    zmm6 = var_148
    int64_t r15_4 = *arg2
    zmm6[0] = zmm6[0] + zmm7[0]
    void* rsi_4 = *rax_37
    int64_t r14_6 = sx.q(*(rsi_4 + 0x40))
    int32_t rax_38 = (r14_6 + 1).d
    *(rsi_4 + 0x40) = rax_38
    
    if (rax_38 s> *(rsi_4 + 0x44))
        sub_1405a4cf0(rsi_4 + 0x38)
    
    float var_118_2 = zmm12[0]
    float var_114_2 = zmm13[0]
    float var_110_2 = zmm14[0]
    *(*(rsi_4 + 0x38) + (r14_6 << 2)) = *(r15_4 + (sx.q(rdi) << 2))
    float var_10c_2 = zmm6[0]
    void* rdi_4 = **arg1
    int64_t rsi_5 = sx.q(*(rdi_4 + 0x50))
    int32_t rax_42 = (rsi_5 + 1).d
    *(rdi_4 + 0x50) = rax_42
    
    if (rax_42 s> *(rdi_4 + 0x54))
        sub_1405a4f90(rdi_4 + 0x48)
    
    *(*(rdi_4 + 0x48) + rsi_5 * 0x10) = var_118_2.o
    void* rdi_5 = **arg1
    int64_t rsi_6 = sx.q(*(rdi_5 + 0x60))
    int32_t rax_45 = (rsi_6 + 1).d
    *(rdi_5 + 0x60) = rax_45
    
    if (rax_45 s> *(rdi_5 + 0x64))
        sub_1405a4cf0(rdi_5 + 0x58)
    
    rdx_13 = arg3
    *(*(rdi_5 + 0x58) + (rsi_6 << 2)) = rdx_13

int64_t* result = *arg1
int64_t r11_1 = sx.q(rax_1)
void* rcx_26 = *result
int64_t r10_1 = sx.q(*(rcx_26 + 0x40))
int32_t r12_2 = (r10_1 - 1).d
int32_t r15_6 = r12_2 - r11_1.d

if (r15_6 s> 0)
    void* r8_2 = arg1[1]
    int64_t* r9_5 = (sx.q(rdx_13) << 5) + *(rcx_26 + 0x78)
    int64_t rdx_14 = sx.q(**arg2)
    int64_t rcx_28 = *(r8_2 + 0x48)
    float temp0_9[0x4] =
        _mm_unpacklo_ps(*(*(r8_2 + 0x38) + (rdx_14 << 2)), (*(*(r8_2 + 0x40) + (rdx_14 << 2)))[0].q)
    zmm0 = *(rcx_28 + (rdx_14 << 2))
    *r9_5 = temp0_9.q
    r9_5[1].d = zmm0[0]
    void* r8_3 = arg1[1]
    int64_t rdx_15 = sx.q(*(*arg2 + (sx.q(arg2[1].d) << 2) - 4))
    int64_t rcx_31 = *(r8_3 + 0x48)
    float temp0_10[0x4] =
        _mm_unpacklo_ps(*(*(r8_3 + 0x38) + (rdx_15 << 2)), (*(*(r8_3 + 0x40) + (rdx_15 << 2)))[0].q)
    zmm0 = *(rcx_31 + (rdx_15 << 2))
    *(r9_5 + 0xc) = temp0_10.q
    *(r9_5 + 0x14) = zmm0[0]
    r9_5[3].d = *(arg1[0xb] + 8)
    *(r9_5 + 0x1c) = r15_6
    
    if (r15_6 s> 1)
        int64_t rax_55 = *(**arg1 + 0x48)
        float (* rdx_18)[0x4] = (r11_1 << 4) + rax_55
        int32_t* rcx_36 = ((r11_1 + 1) << 4) + rax_55
        zmm7 = *rdx_18
        zmm8 = (*rdx_18)[1]
        zmm7[0] = zmm7[0] f* *rcx_36
        zmm8[0] = zmm8[0] f* rcx_36[1]
        zmm4 = (*rdx_18)[2]
        zmm7[0] = zmm7[0] + zmm7[0]
        zmm4[0] = zmm4[0] f* rcx_36[2]
        zmm8[0] = zmm8[0] + zmm8[0]
        zmm4[0] = zmm4[0] + zmm4[0]
        zmm7[0] = zmm7[0] + zmm8[0]
        zmm7[0] = zmm7[0] + zmm4[0]
        zmm7[0] = zmm7[0] * zmm7[0]
        zmm8[0] = zmm8[0] * zmm7[0]
        zmm7[0] = zmm7[0] f- *rcx_36
        zmm4[0] = zmm4[0] * zmm7[0]
        zmm8[0] = zmm8[0] f- rcx_36[1]
        zmm4[0] = zmm4[0] f- rcx_36[2]
        *rdx_18 = (_mm_unpacklo_ps(zmm7, zmm8[0].q)).q
        (*rdx_18)[2] = zmm4[0]
        int64_t rax_58 = *(**arg1 + 0x48)
        float (* rdx_21)[0x4] = (sx.q(r12_2) << 4) + rax_58
        int32_t* rcx_40 = ((r10_1 - 2) << 4) + rax_58
        zmm7 = *rdx_21
        zmm8 = (*rdx_21)[1]
        zmm7[0] = zmm7[0] f* *rcx_40
        zmm4 = (*rdx_21)[2]
        zmm8[0] = zmm8[0] f* rcx_40[1]
        zmm4[0] = zmm4[0] f* rcx_40[2]
        zmm7[0] = zmm7[0] + zmm7[0]
        zmm8[0] = zmm8[0] + zmm8[0]
        zmm4[0] = zmm4[0] + zmm4[0]
        zmm7[0] = zmm7[0] + zmm8[0]
        zmm7[0] = zmm7[0] + zmm4[0]
        zmm7[0] = zmm7[0] * zmm7[0]
        zmm8[0] = zmm8[0] * zmm7[0]
        zmm7[0] = zmm7[0] f- *rcx_40
        zmm4[0] = zmm4[0] * zmm7[0]
        zmm8[0] = zmm8[0] f- rcx_40[1]
        zmm4[0] = zmm4[0] f- rcx_40[2]
        *rdx_21 = (_mm_unpacklo_ps(zmm7, zmm8[0].q)).q
        (*rdx_21)[2] = zmm4[0]
    
    int32_t rsi_7 = r11_1.d
    
    if (r11_1.d s< r12_2)
        do
            int64_t* rdi_6 = arg1[0xb]
            int64_t r14_7 = sx.q(rdi_6[1].d)
            int32_t rax_60 = (r14_7 + 1).d
            rdi_6[1].d = rax_60
            
            if (rax_60 s> *(rdi_6 + 0xc))
                sub_1405a4cf0(rdi_6)
            
            *(*rdi_6 + (r14_7 << 2)) = rsi_7
            rsi_7 += 1
        while (rsi_7 s< r12_2)
    
    void* rsi_8 = arg1[0xc]
    void* r10_2 = **arg1
    void* rdx_23 = *arg1[0xe]
    int64_t r11_2 = sx.q(*(r10_2 + 0x40))
    zmm4 = *(rdx_23 + 0x90)
    zmm3 = *(rdx_23 + 0x88)
    
    if (r11_2.d i- rax_1 - 1 s<= 0 || *arg1[0xd] == 0 || 0f f!= *(rdx_23 + 0x84))
        zmm10 = zmm3
        zmm7 = zmm4
    else
        int64_t r8_4 = *(r10_2 + 0x38)
        int64_t r9_6 = *(rsi_8 + 0x38)
        zmm1 = *(r9_6 + (sx.q(*(r8_4 + (r11_1 << 2))) << 2))
        
        if (*(rdx_23 + 0x98) != 0)
            int64_t rax_66 = sx.q(*(r8_4 + (r11_2 << 2) - 4))
            zmm7 = zmm1
            zmm7[0] = zmm7[0] * zmm3[0]
            zmm10 = *(r9_6 + (rax_66 << 2))
            zmm10[0] = zmm10[0] - zmm1[0]
            zmm7[0] = zmm7[0] + zmm4[0]
            zmm10[0] = zmm10[0] * zmm3[0]
        else
            int64_t rax_65 = sx.q(*(r8_4 + (r11_2 << 2) - 8))
            zmm2 = *(r9_6 + (sx.q(*(r8_4 + (r11_2 << 2) - 4)) << 2))
            zmm0 = *(r9_6 + (sx.q(*(r8_4 + (r11_1 << 2) + 4)) << 2))
            zmm0[0] = zmm0[0] - zmm1[0]
            
            if (zmm1[0] >= zmm0[0])
                zmm7 = zx.o(0)
            else
                zmm7 = zmm0
                zmm7[0] = zmm7[0] - zmm1[0]
            
            zmm7[0] = zmm7[0] / zmm0[0]
            zmm0 = zmm2
            zmm0[0] = zmm0[0] f- *(r9_6 + (rax_65 << 2))
            zmm15[0] = zmm15[0] - zmm2[0]
            
            if (zmm15[0] >= zmm0[0])
                zmm2 = zx.o(0)
            else
                zmm2 = zmm0
                zmm2[0] = zmm2[0] - zmm15[0]
            
            zmm2[0] = zmm2[0] / zmm0[0]
            zmm2[0] = zmm2[0] + zmm7[0]
            float temp0_13[0x4] = _mm_cvtepi32_ps(zx.o(r15_6))
            zmm7[0] = zmm7[0] / temp0_13[0]
            zmm10 = temp0_13
            temp0_13[0] = temp0_13[0] - zmm2[0]
            zmm10[0] = zmm10[0] / temp0_13[0]
            zmm7[0] = zmm7[0] * zmm10[0]
            zmm10[0] = zmm10[0] * zmm3[0]
            zmm7 ^= 0x80000000
            zmm7[0] = zmm7[0] * zmm3[0]
            zmm7[0] = zmm7[0] + zmm4[0]
    
    zmm3 = *(rdx_23 + 0xa8)
    zmm2 = *(rdx_23 + 0xa0)
    
    if (r11_2.d i- rax_1 - 1 s<= 0 || *arg1[0xd] == 0 || 0f f!= *(rdx_23 + 0x9c))
        zmm8 = zmm2
        zmm6 = zmm3
    else
        int64_t r8_5 = *(r10_2 + 0x38)
        int64_t r9_7 = *(rsi_8 + 0x38)
        zmm1 = *(r9_7 + (sx.q(*(r8_5 + (r11_1 << 2))) << 2))
        
        if (*(rdx_23 + 0xb0) != 0)
            int64_t rax_70 = sx.q(*(r8_5 + (r11_2 << 2) - 4))
            zmm6 = zmm1
            zmm6[0] = zmm6[0] * zmm2[0]
            zmm8 = *(r9_7 + (rax_70 << 2))
            zmm8[0] = zmm8[0] - zmm1[0]
            zmm6[0] = zmm6[0] + zmm3[0]
            zmm8[0] = zmm8[0] * zmm2[0]
        else
            int64_t rax_69 = sx.q(*(r8_5 + (r11_2 << 2) - 8))
            zmm4 = *(r9_7 + (sx.q(*(r8_5 + (r11_2 << 2) - 4)) << 2))
            zmm0 = *(r9_7 + (sx.q(*(r8_5 + (r11_1 << 2) + 4)) << 2))
            zmm0[0] = zmm0[0] - zmm1[0]
            
            if (zmm1[0] >= zmm0[0])
                zmm6 = zx.o(0)
            else
                zmm6 = zmm0
                zmm6[0] = zmm6[0] - zmm1[0]
            
            zmm6[0] = zmm6[0] / zmm0[0]
            zmm4[0] = zmm4[0] f- *(r9_7 + (rax_69 << 2))
            zmm15[0] = zmm15[0] - zmm4[0]
            
            if (not(zmm15[0] >= zmm4[0]))
                zmm9 = zmm4
                zmm9[0] = zmm9[0] - zmm15[0]
            
            zmm9[0] = zmm9[0] / zmm4[0]
            zmm9[0] = zmm9[0] + zmm6[0]
            float temp0_14[0x4] = _mm_cvtepi32_ps(zx.o(r15_6))
            zmm6[0] = zmm6[0] / temp0_14[0]
            zmm8 = temp0_14
            temp0_14[0] = temp0_14[0] - zmm9[0]
            zmm8[0] = zmm8[0] / temp0_14[0]
            zmm6[0] = zmm6[0] * zmm8[0]
            zmm8[0] = zmm8[0] * zmm2[0]
            zmm6 ^= 0x80000000
            zmm6[0] = zmm6[0] * zmm2[0]
            zmm6[0] = zmm6[0] + zmm3[0]
    
    int64_t rdi_10 = sx.q(*(r10_2 + 0x70))
    zmm0 = zx.o(0)
    
    if (r15_6 u<= 1)
        r15_6 = 1
    
    zmm0[0] = float.s(zx.q(r15_6))
    int32_t rax_72 = (rdi_10 + 1).d
    *(r10_2 + 0x70) = rax_72
    zmm15[0] = zmm15[0] / zmm0[0]
    
    if (rax_72 s> *(r10_2 + 0x74))
        sub_1406105e0(r10_2 + 0x68)
    
    *(*(r10_2 + 0x68) + (rdi_10 << 2)) = zmm10[0]
    int64_t rdi_11 = sx.q(*(r10_2 + 0x70))
    int32_t rax_74 = (rdi_11 + 1).d
    *(r10_2 + 0x70) = rax_74
    
    if (rax_74 s> *(r10_2 + 0x74))
        sub_1406105e0(r10_2 + 0x68)
    
    *(*(r10_2 + 0x68) + (rdi_11 << 2)) = zmm7[0]
    int64_t rdi_12 = sx.q(*(r10_2 + 0x70))
    int32_t rax_76 = (rdi_12 + 1).d
    *(r10_2 + 0x70) = rax_76
    
    if (rax_76 s> *(r10_2 + 0x74))
        sub_1406105e0(r10_2 + 0x68)
    
    *(*(r10_2 + 0x68) + (rdi_12 << 2)) = zmm8[0]
    int64_t rdi_13 = sx.q(*(r10_2 + 0x70))
    int32_t rax_78 = (rdi_13 + 1).d
    *(r10_2 + 0x70) = rax_78
    
    if (rax_78 s> *(r10_2 + 0x74))
        sub_1406105e0(r10_2 + 0x68)
    
    *(*(r10_2 + 0x68) + (rdi_13 << 2)) = zmm6[0]
    int64_t rdi_14 = sx.q(*(r10_2 + 0x70))
    int32_t rax_80 = (rdi_14 + 1).d
    *(r10_2 + 0x70) = rax_80
    
    if (rax_80 s> *(r10_2 + 0x74))
        sub_1406105e0(r10_2 + 0x68)
    
    *(*(r10_2 + 0x68) + (rdi_14 << 2)) = zmm15[0]
    int64_t rdi_15 = sx.q(*(r10_2 + 0x70))
    int32_t rax_82 = (rdi_15 + 1).d
    *(r10_2 + 0x70) = rax_82
    
    if (rax_82 s> *(r10_2 + 0x74))
        sub_1406105e0(r10_2 + 0x68)
    
    result = *(r10_2 + 0x68)
    *(result + (rdi_15 << 2)) = rax_1[0]

return result
