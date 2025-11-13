// 函数: sub_141e82d00
// 地址: 0x141e82d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void var_c8
int64_t rax_2 = __security_cookie ^ &var_c8
void* var_a0 = arg2
void** var_98
int64_t (* var_78)(int64_t* arg1)
uint128_t zmm0

if (sub_140a80ea0() != 0)
    void* rsi_1 = var_a0
    int32_t var_a4
    sub_140865b30(&arg1[0x42], &var_a4, rsi_1)
    int64_t rax_5 = sx.q(var_a4)
    int64_t* rax
    
    if (rax_5.d == 0xffffffff)
        rax = nullptr
    else
        rax = rax_5 * 0x50 + arg1[0x42]
    
    void* rcx_2 = &rax[1]
    
    if (rax == 0)
        rcx_2 = nullptr
    
    void* rbx_2
    
    if (rcx_2 != 0)
        rbx_2 = rcx_2
        
        if (not(0.0 f> *(rcx_2 + 0x28)))
            double zmm2 = arg1[0x6c]
            int32_t r8_3 = *(rcx_2 + 0x3c)
            *(rcx_2 + 0x10) = zmm2
            
            if (r8_3 != 0)
                *(rcx_2 + 0x28) = -0x4010000000000000
                *(rcx_2 + 0x30) = -0x4010000000000000
                float zmm3[0x2] = *(rsi_1 + 0x88)
                
                if (not(zmm3[0] < 0f))
                    double zmm1
                    
                    if (r8_3 - 1 u<= 1)
                        zmm1 = _mm_cvtps_pd(*(rsi_1 + 0x84))
                        zmm0 = _mm_cvtps_pd(zmm3)
                        zmm1 = zmm1 + zmm2
                    label_141e82f33:
                        zmm1 = zmm1 f+ zmm0.q
                        *(rcx_2 + 0x28) = zmm1
                        zmm0.q = _mm_cvtps_pd((*(rsi_1 + 0x8c)).q).q f+ zmm1
                        *(rcx_2 + 0x30) = zmm0.q
                    else if (r8_3 == 3 || r8_3 == 4)
                        *(rcx_2 + 0x3c) = 1
                        rbx_2 = rcx_2
                        *(rcx_2 + 0x38) = 0
                        zmm0 = zx.o(arg1[0x6c])
                        *(rcx_2 + 0x10) = _mm_unpacklo_pd(zmm0, zmm0.q)
                        zmm0 = *(rsi_1 + 0x88)
                        zmm1 = _mm_cvtps_pd(*(rsi_1 + 0x84))
                        zmm0 = _mm_cvtps_pd(zmm0.q)
                        zmm1 = zmm1 f+ arg1[0x6c]
                        goto label_141e82f33
    else
        __builtin_memset(&var_78, 0, 0x40)
        var_98 = &var_a0
        int64_t (** var_90_2)(int64_t* arg1) = &var_78
        sub_141e6e140(&arg1[0x42], &var_a4, &var_98, nullptr)
        rbx_2 = arg1[0x42] + sx.q(var_a4) * 0x50 + 8
        sub_141e755a0(arg1, var_a0, rbx_2)
        void* rcx_8 = arg1[0x58]
        
        if (rcx_8 != 0)
            sub_141e871e0(rcx_8, var_a0, 0, 0)
    
    if (arg4 == 0)
        if (arg3 == 0)
            *(rbx_2 + 4) += 1
        else
            *(rbx_2 + 8) += 1
else
    void* var_90_1 = var_a0
    int64_t var_68_1 = 0
    void** const var_58_1 = &data_142e345d8
    var_98 = arg1
    zmm0 = var_98.o
    var_78 = sub_141e76580
    uint128_t var_50_1 = zmm0
    double var_40_1 = arg3.q
    char var_a8
    sub_141e85cb0(&var_78, var_a8)
__security_check_cookie(rax_2 ^ &var_c8)
