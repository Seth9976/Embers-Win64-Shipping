// 函数: sub_140d84bf0
// 地址: 0x140d84bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
int64_t rax_1 = __security_cookie ^ &var_48
*arg1 = GetSystemMetrics(SM_CXSCREEN)
arg1[1] = GetSystemMetrics(SM_CYSCREEN)
int32_t pvParam
uint64_t rax_4 = SystemParametersInfoW(SPI_GETWORKAREA, 0, &pvParam, 0)
int32_t pvParam_1
int32_t rdx
int32_t r8_1
int32_t var_20

if (rax_4.d != 0)
    int32_t var_1c
    rdx = var_1c
    rax_4 = zx.q(var_20)
    int32_t var_24
    r8_1 = var_24
    pvParam_1 = pvParam
else
    var_20.q = rax_4
    pvParam_1 = rax_4.d
    pvParam.q = rax_4
    rdx = rax_4.d
    r8_1 = rax_4.d
arg1[6] = pvParam_1
arg1[7] = r8_1
arg1[8] = rax_4.d
arg1[9] = rdx
arg1[0xa] = GetSystemMetrics(SM_XVIRTUALSCREEN)
arg1[0xb] = GetSystemMetrics(SM_YVIRTUALSCREEN)
arg1[0xc] = GetSystemMetrics(SM_CXVIRTUALSCREEN) + arg1[0xa]
arg1[0xd] = GetSystemMetrics(SM_CYVIRTUALSCREEN) + arg1[0xb]
sub_140d7b6f0(&arg1[2])
*(arg1 + 0x40) = zx.o(0)
char rsi = sub_140b2abf0(&data_143dbb3f0, u"SafeZonePaddingLeft=", &arg1[0x10], sub_140af2b60())

if (sub_140b2abf0(&data_143dbb3f0, SafeZonePaddingRight=", &arg1[0x11], sub_140af2b60()) != 0
        || rsi != 0)
    rsi = 1

if (sub_140b2abf0(&data_143dbb3f0, SafeZonePaddingTop=", &arg1[0x12], sub_140af2b60()) != 0
        || rsi != 0)
    rsi = 1

float result[0x4]
float zmm2_1

if (sub_140b2abf0(&data_143dbb3f0, SafeZonePaddingBottom=", &arg1[0x13], sub_140af2b60()[0].q) == 0
        && rsi == 0)
    float zmm1_1[0x4] = data_1439ae420
    
    if (not(zmm1_1[0] >= 1f))
        result = 0x3f800000
        zmm2_1 = float.s(arg1[1])
        result[0] = 1f - zmm1_1[0]
        zmm1_1 = zx.o(0)
        zmm1_1[0] = float.s(*arg1)
        result[0] = result[0] * 0.5f
        zmm1_1[0] = zmm1_1[0] * result[0]
        zmm2_1 = zmm2_1 * result[0]
        float temp0_1[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xe1)
        temp0_1[0] = zmm2_1
        float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
        temp0_2[0] = zmm1_1[0]
        float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x27)
        temp0_3[0] = zmm2_1
        *(arg1 + 0x40) = _mm_shuffle_ps(temp0_3, temp0_3, 0x39)

result = data_1439ae424

if (not(result[0] >= 1f))
    float zmm3_1 = 1f - result[0]
    zmm2_1 = float.s(arg1[1])
    result = zx.o(0)
    zmm3_1 = zmm3_1 * 0.5f
    result[0] = float.s(*arg1)
    zmm2_1 = zmm2_1 * zmm3_1
    result[0] = result[0] * zmm3_1
    float temp0_5[0x4] = _mm_shuffle_ps(result, result, 0xe1)
    temp0_5[0] = zmm2_1
    float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc6)
    temp0_6[0] = result[0]
    float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x27)
    temp0_7[0] = zmm2_1
    *(arg1 + 0x50) = _mm_shuffle_ps(temp0_7, temp0_7, 0x39)

__security_check_cookie(rax_1 ^ &var_48)
return result
