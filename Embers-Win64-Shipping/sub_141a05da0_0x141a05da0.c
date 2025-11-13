// 函数: sub_141a05da0
// 地址: 0x141a05da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int32_t i = 0
void* rcx = nullptr
void* var_140 = nullptr
int64_t rsi = sx.q(*(arg1 + 0x30))
int32_t var_134 = 0
void** const var_148 = &data_142da8070
char var_130 = 0
float* var_100
__builtin_memset(&var_100, 0, 0x11)
void** const var_108 = &data_142da8070
float* var_120
__builtin_memset(&var_120, 0, 0x11)
void** const var_128 = &data_142da8070
int32_t var_138 = rsi.d

if (rsi.d s> 0)
    sub_1407c3800(&var_140, 0)
    rcx = var_140

void var_178

if ((var_140.b & 1) != 0)
    rcx = &var_178 + (rcx s>> 1) + 0x38
memset(rcx, 0, rsi << 2)

if (*(arg1 + 0x18) != 0 && *(arg1 + 4) s> 0)
    sub_1408201d0(&var_100, *(arg1 + 0x30))
    sub_1408201d0(&var_120, *(arg1 + 0x30))

int128_t zmm6
zmm6.d = arg4.d f* *(data_143ed5cc8 + 4)
int64_t* var_158

if (*(arg1 + 0x30) s> 0)
    int64_t rsi_1 = 0
    int32_t* r12_1 = arg6
    int64_t r14_1 = 0
    int64_t r15_1 = 0
    int128_t zmm11 = *arg5
    int128_t zmm12 = *(arg5 + 4)
    zmm6.d = zmm6.d f* zmm6.d
    int128_t zmm13 = *(arg5 + 8)
    int128_t zmm9
    zmm9.d = 1f f/ zmm6.d
    
    do
        float (* rax_2)[0x4] = *(arg1 + 0xb8)
        int32_t var_e8 = zmm11.d
        int32_t var_e4_1 = zmm12.d
        int32_t var_e0_1 = zmm13.d
        int32_t var_dc_1 = 0x3f800000
        var_158.d = (*(rax_2 + r15_1))[0]
        var_158:4.d = (*(rax_2 + r15_1 + 4))[0]
        int64_t var_150
        var_150.d = (*(rax_2 + r15_1 + 8))[0]
        var_150:4.d = 0x3f800000
        float zmm0_1[0x4] = sub_1422dfe70(&var_158, (*(rax_2 + r15_1 + 0xc))[0], &var_e8, r12_1)
        int128_t* r12_2 = *(arg1 + 0x28)
        float zmm3 = zmm9.d * zmm0_1[0]
        float zmm1[0x4] = *(r12_2 + r14_1)
        int32_t rax_3 = *(r12_2 + r14_1 + 0x10)
        int32_t var_c8_1 = rax_3
        int96_t var_d8_1 = zmm1[0].12
        uint128_t zmm6_1
        
        if (zmm3 > _mm_shuffle_ps(zmm1, zmm1, 0xff)[0])
            float zmm2[0x4] = var_d8_1:4.d
            
            if (zmm3 <= zmm2[0])
                zmm2[0] = zmm2[0] / zmm3
                zmm6_1 = logf(zmm2[0])
                zmm0_1 = logf(var_d8_1:8.d.d)
                zmm6_1.d = zmm6_1.d f/ zmm0_1[0]
                zmm6_1.d = zmm6_1.d f+ 1f
            else
                zmm1 = var_d8_1.d
                zmm0_1 = _mm_min_ss(zmm1[0], zmm3)
                zmm1[0] = zmm1[0] - zmm2[0]
                zmm6_1.d = zmm1.d f- zmm0_1[0]
                zmm6_1.d = zmm6_1.d f/ zmm1[0]
        else
            zmm6_1 = _mm_cvtepi32_ps(zx.o(sx.d(rax_3.b)))
        
        int32_t rcx_6 = sx.d(*(r12_2 + r14_1 + 0x10))
        int32_t rax_5 = sx.d(*(r12_2 + r14_1 + 0x11))
        
        if (arg3 s>= 0)
            rax_5 = arg3
        
        if (rax_5 s<= rcx_6)
            rcx_6 = rax_5
        
        if (rcx_6 s>= 0)
            zmm6_1 = _mm_cvtepi32_ps(zx.o(rcx_6))
        
        void* rcx_7
        
        if ((var_140.b & 1) == 0)
            rcx_7 = var_140
        else
            rcx_7 = &var_140 + (var_140 s>> 1)
        
        r12_1 = arg6
        *(rcx_7 + rsi_1) = zmm6_1.d
        
        if (*(arg1 + 0x18) != 0 && *(arg1 + 4) s> 0)
            float temp0_5[0x4] = __sqrtss_xmmss_memss(zmm0_1[0], *(arg1 + 0x1c))
            zmm1 = *(r15_1 + *(arg1 + 0xb8) + 0xc)
            zmm1[0] = zmm1[0] * 0.5f
            uint128_t zmm0_3 = sub_1422dfe30(temp0_5[0], zmm1[0], r12_1)
            float zmm2_1 = *(arg1 + 0x20)
            zmm1 = *(r15_1 + *(arg1 + 0xb8) + 0xc)
            float temp0_6 = __minss_xmmss_memss(zmm2_1 * zmm2_1, *(arg1 + 0x1c))
            zmm1[0] = zmm1[0] * 0.5f
            zmm0_1 = sub_1422dfe30(_mm_sqrt_ss(0, temp0_6).d, zmm1[0], r12_1)
            bool cond:2_1 = (var_100.b & 1) == 0
            zmm0_1[0] = zmm0_1[0] f- zmm0_3.d
            float temp0_8[0x4] = _mm_min_ss(zmm0_1[0], zmm0_3.d)
            float* rcx_8
            
            if (cond:2_1)
                rcx_8 = var_100
            else
                rcx_8 = &var_100 + (var_100 s>> 1)
            
            zmm1 = zmm0_3
            zmm0_1 = zmm0_3
            zmm1[0] = zmm1[0] - temp0_8[0]
            zmm0_1[0] = zmm0_1[0] / zmm1[0]
            *(rcx_8 + rsi_1) = zmm0_1[0]
            float* rcx_9
            
            if ((var_120.b & 1) == 0)
                rcx_9 = var_120
            else
                rcx_9 = &var_120 + (var_120 s>> 1)
            
            temp0_8[0] = temp0_8[0] f- zmm0_3.d
            zmm0_1 = 0xbf800000
            zmm0_1[0] = -1f / temp0_8[0]
            *(rcx_9 + rsi_1) = zmm0_1[0]
        
        i += 1
        r14_1 += 0x14
        r15_1 += 0x10
        rsi_1 += 4
    while (i s< *(arg1 + 0x30))

EnterCriticalSection(arg1 + 0x120)
var_158 = &arg_10
void** const* var_150_1 = &var_148
void arg_20
sub_1419f6a40(arg1 + 0x148, &arg_20, &var_158, nullptr)

if (*(arg1 + 0x18) != 0 && *(arg1 + 4) s> 0)
    var_158 = &arg_10
    void** const* var_150_2 = &var_108
    sub_1419f6a40(arg1 + 0x198, &arg_20, &var_158, nullptr)
    var_158 = &arg_10
    void** const* var_150_3 = &var_128
    sub_1419f6a40(arg1 + 0x1e8, &arg_20, &var_158, nullptr)

if (arg1 != -0x120)
    LeaveCriticalSection(arg1 + 0x120)

sub_140a1d5c0(&var_120)
var_128 = &data_142da7708
sub_140a1d5c0(&var_100)
var_108 = &data_142da7708
return sub_140a1d5c0(&var_140)
