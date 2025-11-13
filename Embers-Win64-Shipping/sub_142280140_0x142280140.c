// 函数: sub_142280140
// 地址: 0x142280140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *arg1

if (rdi == 0)
    return 

float zmm0 = arg4[3]
float zmm6[0x4] = 0x40a00000

if (not(zmm0 < 5f))
    arg2[0] = arg2[0] * 0.49000001f
    zmm6 = _mm_min_ss(arg2[0], zmm0)

int64_t* rcx = data_143ef8520
float* rax_2 = (*(*rcx + 0x20))(rcx)
int64_t var_54_1 = 0
int32_t var_4c_1 = 0
float var_44_1 = arg2[0]

if (zmm6[0] != -1f)
    float var_48_2 = zmm6[0]
else
    float var_48_1 = *rax_2 * 0.00999999978f

bool cond:1_1 = (arg4[4].b & 1) == 0
float var_58 = arg4[2]

if (not(cond:1_1))
    int128_t zmm7
    zmm7.d = arg3.d f* *arg4
    float var_4c_2 = arg3.d f* arg4[1] * *data_143f51430
    zmm7.d = zmm7.d f* *data_143f51448
    var_54_1:4.d = zmm7.d

(*(*rdi + 0x110))(rdi, &var_58)
