// 函数: sub_14227fc60
// 地址: 0x14227fc60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *arg1

if (rdi == 0)
    return 

sub_140acf590(arg3[5], 0x38d1b717, 0x4333fff9)[0]
float zmm0_2
float zmm8_1
int32_t zmm9_2
zmm0_2, zmm8_1, zmm9_2 = sub_140acf590(arg3[6], 0x38d1b717, 0x4333fff9)
float zmm1_2 = 1f
float zmm2_2 = zmm0_2
zmm0_2 = arg3[3]
zmm2_2 = zmm2_2 * 0.0174532924f

if (not(zmm0_2 < 1f))
    zmm1_2 = _mm_min_ss(__minss_xmmss_memss(arg3[5], arg3[6]) * 0.49000001f, zmm0_2)

zmm1_2 = zmm1_2 * 0.0174532924f
int64_t var_40_1 = 0
float var_34_1 = zmm2_2
int32_t var_30_1 = zmm9_2

if (zmm1_2 != -1f)
    float var_38_2 = zmm1_2
else
    zmm2_2 = __minss_xmmss_memss(_mm_min_ss(zmm2_2, zmm9_2) * 0.49000001f, 0x3dcccccd)
    float var_38_1 = zmm2_2

bool cond:1_1 = (arg3[4].b & 1) == 0
int32_t var_44_1 = 0x3f000000
float var_48 = arg3[2]

if (not(cond:1_1))
    var_40_1:4.d = zmm8_1 * arg3[1] * *data_143f51460
    var_40_1.d = zmm8_1 * *arg3 * *data_143f51478

(*(*rdi + 0x130))(rdi, &var_48, zmm2_2)
