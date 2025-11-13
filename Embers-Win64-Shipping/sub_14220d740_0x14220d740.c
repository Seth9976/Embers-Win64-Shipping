// 函数: sub_14220d740
// 地址: 0x14220d740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int128_t* rax_2 = arg1[1]
int128_t* r8 = *arg1
int32_t* rdx = arg1[4]
int128_t var_48 = *r8
float zmm2[0x4] = *(rax_2 + 4)
int64_t* rax_3 = arg1[5]
float temp0[0x4] = _mm_unpacklo_ps(*rax_2, (*(rax_2 + 8)).q)
int128_t zmm0 = data_14399f670
float var_38[0x4] = _mm_unpacklo_ps(temp0, _mm_unpacklo_ps(zmm2, 0)[0].q)
float var_28[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, zmm0.q), 
    _mm_unpacklo_ps(data_14399f66c, 0)[0].q)
char result = sub_142273190(arg1[3], rdx, r8, &var_48, *rax_3)
*arg1[2] = result
__security_check_cookie(rax_1 ^ &var_78)
return result
