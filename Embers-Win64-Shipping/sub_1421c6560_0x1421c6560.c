// 函数: sub_1421c6560
// 地址: 0x1421c6560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float arg_10 = arg2
float zmm6[0x4]
float var_58[0x4] = zmm6
float zmm7[0x4] = zx.o(0)
float zmm8[0x4] = zx.o(0)
int32_t rdi = 0
void* r13 = arg1[5]
float result[0x4] = *(arg1 + 0x124)
arg1[3]
int32_t var_114 = 0
void* var_108 = **(arg1[2] + 0x40)
void* rax_1
rax_1.b = 1
uint32_t arg_20 = rax_1.d
char r12 = 1
_getfpstatusword()

if (not(0f f>= *(arg1[2] + 0x58)))
    int32_t i = 0
    float var_138
    int32_t* var_130
    int32_t* var_128
    int32_t var_110
    float arg_8
    int32_t arg_18
    float zmm0[0x4]
    float zmm3
    
    if (*(r13 + 0x68) s> 0)
        int64_t* r14_1 = nullptr
        
        do
            int64_t* rsi_1 = *(r14_1 + *(r13 + 0x60))
            
            if (rsi_1 != 0 && rsi_1[5].b s< 0)
                void* rdi_1 = arg1[2]
                sub_140865c40(rdi_1 + 0x60, &var_110, *(*(var_108 + 0x60) + r14_1))
                int64_t rax_5 = sx.q(var_110)
                void* const rcx_2
                
                if (rax_5.d == 0xffffffff)
                    rcx_2 = nullptr
                else
                    rcx_2 = *(rdi_1 + 0x60) + rax_5 * 0x18
                
                int32_t* rax_7 = rcx_2 + 8
                
                if (rcx_2 == 0)
                    rax_7 = nullptr
                
                int32_t rdi_2
                
                if (rax_7 == 0)
                    rdi_2 = 0
                else
                    rdi_2 = *rax_7
                
                zmm0 = arg_10
                zmm3 = result[0]
                int64_t rax_8 = *rsi_1
                arg_8 = 0f
                arg_18 = 0
                var_128 = &arg_18
                char rax_9 =
                    (*(rax_8 + 0x348))(rsi_1, arg1, zx.q(rdi_2), zmm3, zmm0[0], &arg_8, var_128)
                zmm0 = arg_18
                float rax_10 = arg_8
                uint32_t rcx_5 = zx.d(arg_20.b)
                
                if (rax_9 == 0)
                    rcx_5 = 0
                
                arg_20 = rcx_5
                
                if (rax_10 s<= 0)
                    rax_10 = 0f
                
                bool cond:4_1 = zmm0[0] > 0f
                arg_8 = rax_10
                
                if (not(cond:4_1))
                    arg_18 = 0
                    zmm0 = zx.o(0)
                
                int64_t rax_11 = *rsi_1
                int32_t var_118
                var_130 = &var_118
                zmm8[0] = zmm8[0] + zmm0[0]
                zmm0 = arg_10
                var_118 = 0
                var_138 = zmm0[0]
                
                if ((*(rax_11 + 0x350))(rsi_1, arg1, zx.q(rdi_2), result[0], var_138, var_130) == 0)
                    r12 = 0
                
                rdi = var_114 + var_118
                var_114 = rdi
            
            i += 1
            r14_1 = &r14_1[1]
        while (i s< *(r13 + 0x68))
    
    if (*(r13 + 0x68) s<= 0 || arg_20.b != 0)
        float zmm0_1
        int512_t zmm1
        zmm0_1, zmm1 = sub_141fe5610(*(r13 + 0x50) + 0x68, *(arg1 + 0x12c), arg1[3], nullptr, 
            var_138, var_130, var_128)
        sub_1421f1540(*(r13 + 0x50))
        zmm1.o = *(arg1 + 0x12c)
        float zmm0_3[0x4]
        zmm0_3, zmm6, zmm7 = sub_141fe5610(*(r13 + 0x50) + 0x38, zmm1, arg1[3], nullptr)
        zmm0_3[0] = zmm0_3[0] * zmm6[0]
        zmm0_3[0] = zmm0_3[0] + zmm8[0]
        zmm8 = _mm_max_ss(zmm0_3[0], zmm7[0])
    
    if (r12 != 0)
        int64_t rax_13 = *arg1
        arg_8 = 0f
        (*(rax_13 + 0x98))(arg1, &arg_10, &arg_8)
        rdi += arg_8
    
    int64_t r8_8
    zmm0, r8_8 = sub_142193350(arg1[2])
    float zmm2[0x4] = zmm0
    zmm2[0] = zmm2[0] * zmm8[0]
    int32_t zmm1_1 = float.s(rdi) f* zmm0[0]
    zmm0 = 0xbf000000
    float temp0_2[0x4] = _mm_max_ss(zmm2[0], zmm7[0])
    zmm0[0] = -0.5f f- (zmm1_1 f+ zmm1_1)
    int32_t rsi_4 = neg.d(int.d(zmm0[0]) s>> 1)
    
    if (temp0_2[0] > zmm7[0] || rsi_4 s> 0)
        zmm3 = arg_10
        temp0_2[0] = temp0_2[0] * zmm3
        temp0_2[0] = temp0_2[0] + result[0]
        int32_t r14_3 = int.d(temp0_2[0] f+ temp0_2[0] f- 0.5f) s>> 1
        
        if (temp0_2[0] <= zmm7[0])
            zmm8 = zmm7
        else
            zmm8 = 0x3f800000
            zmm8[0] = 1f / temp0_2[0]
        
        int32_t rdx_6 = arg1[0x23].d
        int32_t rax_14 = data_143a2ecec
        zmm8[0] = zmm8[0] * result[0]
        float temp0_3[0x4] = _mm_cvtepi32_ps(zx.o(r14_3))
        int32_t rcx_15 = rdx_6 + r14_3 + rsi_4
        zmm8[0] = zmm8[0] + zmm3
        temp0_2[0] = temp0_2[0] - temp0_3[0]
        zmm8[0] = zmm8[0] - zmm8[0]
        
        if (rcx_15 s> rax_14)
            int32_t rax_15 = rax_14 - rdx_6
            
            if (rax_15 s<= rsi_4)
                rsi_4 = rax_15
            
            int32_t rax_16 = rax_15 - rsi_4
            
            if (rax_16 s<= r14_3)
                r14_3 = rax_16
            
            rcx_15 = rdx_6 + r14_3 + rsi_4
        
        float zmm10[0x4]
        
        if ((*(arg1[2] + 0x37) & 1) == 0)
            zmm10 = zmm7
        else
            float temp0_4[0x4] = _mm_cvtepi32_ps(zx.o(rsi_4))
            
            if (not(temp0_4[0] <= zmm7[0]))
                zmm7 = 0x3f800000
                zmm7[0] = 1f / temp0_4[0]
            
            zmm10 = zmm7
            zmm10[0] = zmm10[0] * zmm3
        
        if (rcx_15 s>= arg1[0x24].d)
            int64_t r9_1 = *(*arg1 + 0x18)
            int32_t temp0_6 = _mm_sqrt_ss(0, _mm_cvtepi32_ps(zx.o(rcx_15))[0])
            int32_t rdx_7
            
            if (zmm3 >= 0.0500000007f)
                r8_8 = 0
                rdx_7 = int.d(_mm_sqrt_ss(temp0_6, temp0_6) f+ 1f)
            else
                r8_8.b = 1
                float temp0_7[0x4] = _mm_sqrt_ss(0, temp0_6)
                temp0_7[0] = temp0_7[0] + 1f
                rdx_7 = int.d(temp0_7[0])
            
            if (r9_1(arg1, zx.q(rdx_7 + rcx_15), r8_8) != 1)
                return result
        
        int64_t rdx_9 = *(r13 + 0x58)
        char* rdi_4 = nullptr
        
        if (rdx_9 != 0)
            char* rax_20 = sub_1421b7c40(arg1, rdx_9)
            rdi_4 = rax_20
            
            if (rax_20 != 0 && (*rax_20 & 9) == 0)
                rdi_4 = nullptr
        
        int32_t r9_3 = arg1[0x24].d - arg1[0x23].d
        zmm1_1 = *(arg1 + 0x94)
        float var_100 = arg1[0x12].d[0]
        
        if (r14_3 s<= r9_3)
            r9_3 = r14_3
        
        int32_t var_fc_1 = zmm1_1
        float var_f8_1 = arg1[0x13].d[0]
        arg_20 = zmm8[0]
        arg_8 = zmm8[0]
        var_110.q = rdi_4
        void* rcx_19 = arg1[5]
        arg_18 = r9_3
        var_108 = rcx_19
        
        if (rdi_4 != 0 && (*rdi_4 & 8) != 0 && r9_3 s> 0)
            int64_t* rcx_20 = *(rcx_19 + 0x58)
            (*(*rcx_20 + 0x360))(rcx_20, arg1, rdi_4)
        
        int64_t* var_e8 = arg1
        float* var_e0_1 = &arg_8
        int32_t* var_c0_1 = &data_143dbb1f8
        int32_t* var_d8_1 = &arg_18
        uint32_t* var_d0_1 = &arg_20
        float* var_c8_1 = &var_100
        void** var_b8_1 = &var_108
        int32_t* var_b0_1 = &var_110
        uint32_t zmm7_1 = sub_1421abbe0(&var_e8, *(arg1[2] + 0x37) & 1)
        int32_t r9_5 = arg1[0x24].d - arg1[0x23].d
        arg_20 = zmm7_1
        arg_8 = zmm10[0]
        
        if (rsi_4 s<= r9_5)
            r9_5 = rsi_4
        
        var_110.q = rdi_4
        void* rcx_22 = arg1[5]
        arg_18 = r9_5
        var_108 = rcx_22
        
        if (rdi_4 != 0 && (*rdi_4 & 8) != 0 && r9_5 s> 0)
            int64_t* rcx_23 = *(rcx_22 + 0x58)
            (*(*rcx_23 + 0x360))(rcx_23, arg1, rdi_4)
        
        var_e8 = arg1
        float* var_e0_2 = &arg_8
        int32_t* var_c0_2 = &data_143dbb1f8
        int32_t* var_d8_2 = &arg_18
        uint32_t* var_d0_2 = &arg_20
        float* var_c8_2 = &var_100
        void** var_b8_2 = &var_108
        int32_t* var_b0_2 = &var_110
        return sub_1421abbe0(&var_e8, *(arg1[2] + 0x37) & 1)

return *(arg1 + 0x124)
