// 函数: sub_141f693b0
// 地址: 0x141f693b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
void* r13 = *(arg1 + 0x430)
int64_t var_108 = arg2
int32_t rsi = -1
int32_t rcx
rcx.b = sub_140b5b8a0(arg2.d, 0) == 0
uint32_t rax_4
rax_4.b = (arg2 u>> 0x20).d != 0
rcx.b |= rax_4.b

if (rcx.b != 0)
    void* rcx_1 = *(arg1 + 0x430)
    
    if (rcx_1 != 0)
        rsi = sub_14078ee20(rcx_1 + 0x188, &var_108)

int64_t r8 = sx.q(*(arg1 + 0x494))
int32_t result = *(arg1 + r8 * 0x10 + 0x458)

if (result == 0)
    *arg4 = result
    *arg3 = result
else if (rsi == 0xffffffff || rsi s>= result)
    result.b = 0
else
    int64_t rdx_2 = sx.q(rsi) * 6
    int64_t rcx_5 = *(arg1 + (r8 + 0x45) * 0x10)
    int64_t rax_9 = *(r13 + 0x1b8)
    float var_c8[0x4] = *(rcx_5 + (rdx_2 << 3))
    float var_b8_1[0x4] = *(rcx_5 + (rdx_2 << 3) + 0x10)
    float var_a8_1[0x4] = *(rcx_5 + (rdx_2 << 3) + 0x20)
    float zmm7[0x4] = *(rax_9 + (rdx_2 << 3))
    float var_88_1[0x4] = *(rax_9 + (rdx_2 << 3) + 0x10)
    float var_78_1[0x4] = *(rax_9 + (rdx_2 << 3) + 0x20)
    sub_141f649e0(arg1, &var_108, arg2)
    int64_t rbx_1 = var_108
    int32_t rcx_7
    rcx_7.b = sub_140b5b8a0(rbx_1.d, 0) == 0
    rcx_7.b |= var_108:4.d != 0
    int32_t rax_11
    
    if (rcx_7.b != 0)
        rax_11 = sub_141f5e0e0(arg1, rbx_1)
    
    float zmm6[0x4]
    
    if (rcx_7.b == 0 || rax_11 == 0xffffffff)
        zmm6 = var_c8
    else
        float var_98[0x4]
        float (* rax_13)[0x4]
        rax_13, zmm7 = sub_140ad7d70(&var_c8, &var_98, 
            sx.q(rax_11) * 0x30 + *(arg1 + (sx.q(*(arg1 + 0x494)) + 0x45) * 0x10))
        zmm6 = *rax_13
        var_c8 = zmm6
        float var_b8_2[0x4] = rax_13[1]
        float var_a8_2[0x4] = rax_13[2]
    
    var_108.o = zmm6
    float temp0_1[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x55)
    float zmm5[0x4] = temp0_1 ^ data_142d3f780
    zmm5[0] = zmm5[0] + zmm5[0]
    float temp0_2[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
    temp0_2[0] = temp0_2[0] + temp0_2[0]
    float temp0_3[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xff)
    zmm5[0] = zmm5[0] * temp0_1[0]
    temp0_2[0] = temp0_2[0] * temp0_2[0]
    temp0_2[0] = temp0_2[0] * temp0_3[0]
    zmm5[0] = zmm5[0] - temp0_2[0]
    temp0_2[0] = temp0_2[0] * zmm7[0]
    zmm5[0] = zmm5[0] * temp0_3[0]
    zmm5[0] = zmm5[0] * zmm7[0]
    zmm5[0] = zmm5[0] + 1f
    zmm5[0] = zmm5[0] + temp0_2[0]
    temp0_2[0] = temp0_2[0] - zmm5[0]
    float var_f8 = zmm5[0]
    float var_f0_1 = zmm5[0]
    float var_f4_1 = temp0_2[0]
    void var_e8
    void var_d8
    sub_140ae2000(&var_108, &var_f8, &var_d8, &var_e8)
    float _X_1 = -1f
    float var_dc
    float _X
    
    if (var_dc >= -1f)
        _X = __minss_xmmss_memss(var_dc, 0x3f800000)
    else
        _X = -1f
    
    *arg3 = acosf(_X) * 114.591553f
    float var_cc
    
    if (not(var_cc < -1f))
        _X_1 = __minss_xmmss_memss(var_cc, 0x3f800000)
    
    float zmm0_2
    zmm0_2, result = acosf(_X_1)
    result.b = 1
    *arg4 = zmm0_2 * 114.591553f

__security_check_cookie(rax_1 ^ &var_128)
return result
