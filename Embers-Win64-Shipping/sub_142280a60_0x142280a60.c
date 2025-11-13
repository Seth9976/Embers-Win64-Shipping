// 函数: sub_142280a60
// 地址: 0x142280a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg1
float zmm4[0x4] = arg2

if (rcx == 0)
    return 

float zmm0[0x4] = arg3[5]
arg2 = arg3[3]
float zmm2[0x4] = zmm0
float zmm3 = 1f
bool cond:0_1 = arg2[0] < 1f
zmm2[0] = zmm2[0] * 0.0174532924f

if (not(cond:0_1))
    zmm3 = _mm_min_ss(zmm0[0] * 0.949999988f, arg2[0])

zmm3 = zmm3 * 0.0174532924f
int64_t var_20_1 = 0
arg2 = zmm2 ^ data_142d3f780
float var_14_1 = zmm2[0]
float var_10_1 = arg2[0]

if (zmm3 != -1f)
    float var_18_2 = zmm3
else
    zmm2[0] = zmm2[0] - arg2[0]
    zmm2[0] = zmm2[0] * 0.49000001f
    zmm2 = __minss_xmmss_memss(zmm2[0], 0x3dcccccd)
    float var_18_1 = zmm2[0]

bool cond:2_1 = (arg3[4].b & 1) == 0
zmm0 = 0x3f000000
int32_t var_24_1 = 0x3f000000
float var_28 = arg3[2][0]

if (not(cond:2_1))
    int32_t* rax_1 = data_143f51460
    zmm0 = zmm4
    zmm0[0] = zmm0[0] f* arg3[1]
    zmm4[0] = zmm4[0] f* *arg3
    zmm0[0] = zmm0[0] f* *rax_1
    var_20_1:4.d = zmm0[0]
    zmm4[0] = zmm4[0] f* *data_143f51478
    var_20_1.d = zmm4[0]

(*(*rcx + 0x120))(zmm0, &var_28, zmm2)
