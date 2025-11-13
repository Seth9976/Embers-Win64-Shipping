// 函数: sub_1417f48a0
// 地址: 0x1417f48a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
uint128_t var_98[0x3]
uint128_t* rax_2 = sub_141f3cf60(arg1, &var_98)
float zmm2[0x4] = *(arg1 + 0x1e0)
float var_c8[0x4] = zmm2
float temp0[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
uint128_t zmm6 = *rax_2
int128_t zmm7 = rax_2[1]
int128_t zmm8 = rax_2[2]
float var_164 = temp0[0]
float temp0_2[0x4] = _mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)
float var_120 = var_164
int128_t zmm10
zmm10.q = temp0_2.q
uint128_t var_158 = zmm6
int128_t var_128_1 = zmm10
int128_t var_e8 = zmm10
int128_t var_148 = zmm7
int128_t var_138 = zmm8
int64_t var_16c = temp0_2.q
uint128_t var_118 = zmm6
int128_t var_108 = zmm7
int128_t var_f8 = zmm8
char rax_3 = sub_140a80f40()

if (rax_3 != 0)
label_1417f49ae:
    *(arg1 + 0x450) = zmm6
    *(arg1 + 0x460) = zmm7
    *(arg1 + 0x470) = zmm8
    arg1[0x90] = temp0_2.q
    arg1[0x91].d = var_164
else
    if (data_143f138f4 == rax_3)
        if (data_143de5480 == rax_3)
            goto label_1417f49ae
        
        uint32_t rax_4
        rax_4.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_4.b != 0)
            goto label_1417f49ae
    
    void var_b8
    int64_t* rax_5
    int128_t zmm6_1
    rax_5, zmm6_1 = sub_1417ee760(&var_b8, nullptr, 0xff)
    void* rcx_1 = *rax_5
    *(rcx_1 + 0x10) = zmm6_1
    *(rcx_1 + 0x20) = zmm7
    *(rcx_1 + 0x30) = zmm8
    *(rcx_1 + 0x40) = zmm10
    *(rcx_1 + 0x50) = arg1.o
    void* rcx_2 = *rax_5
    int32_t r8_1 = rax_5[2].d
    int64_t* rdx_1 = rax_5[1]
    int64_t* rbx_1 = *(rcx_2 + 0x68)
    int64_t* var_178_1 = rbx_1
    int32_t* rsi_1 = &rbx_1[9]
    
    if (rbx_1 != 0)
        *rsi_1 += 1
        rbx_1 = var_178_1
    
    sub_14106e0b0(rcx_2, rdx_1, r8_1, 1)
    
    if (rbx_1 != 0)
        int32_t rax_6 = *rsi_1
        *rsi_1 -= 1
        
        if (rax_6 == 1)
            sub_140a2f6e0(var_178_1)

int64_t result = sub_141f23510(arg1)
__security_check_cookie(rax_1 ^ &var_198)
return result
