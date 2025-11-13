// 函数: sub_142702db0
// 地址: 0x142702db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float arg_20 = arg4
float zmm1[0x4] = data_143dbb1fc
float zmm9[0x4]
float var_78[0x4] = zmm9
float zmm10[0x4] = zx.o(0)
int128_t zmm11
int128_t var_98 = zmm11
void* rax = *(arg2 + 0x130)
float var_130 = data_143dbb1f8[0]
float var_12c = zmm1[0]
float var_128 = data_143dbb200[0]
int32_t arg_18 = 0
int32_t arg_10 = 0
int64_t var_168
float var_160

if (rax == 0)
    float rax_1 = data_143dbb200
    var_168 = data_143dbb1f8.q
    var_160 = rax_1
else
    zmm1 = *(rax + 0x1d0)
    var_168.d = zmm1[0]
    float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    var_160 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
    var_168:4.d = temp0_1[0]

int64_t var_158 = var_168

if (not(arg4 != -1f))
    arg_20 = (*(arg1 + 0x110))[0]

void* rax_4 = sub_140d21950(arg2, sub_142548ca0())
int64_t var_148
float arg_8
float zmm0_1[0x4]
float zmm6[0x4]
float zmm7[0x4]
float zmm8[0x4]

if (rax_4 == 0)
    zmm7 = var_160
    zmm6 = var_158:4.d
    zmm8 = var_158.d
else
    int64_t r9_1 = *rax_4
    int64_t rbx_1 = *(arg1 + 0xa0)
    (*(r9_1 + 0x28))(rax_4, &var_148, rbx_1, r9_1)
    (*(*rax_4 + 0x38))(rax_4, rbx_1, &var_148, &var_130, &arg_18, &arg_10)
    
    if (arg5 == 0)
        zmm7 = var_160
        zmm6 = var_158:4.d
        zmm8 = var_158.d
    label_14270321a:
        
        if (arg3 u<= 1)
            arg_18 = 0
    else
        void* rax_5 = *(arg2 + 0x130)
        
        if (rax_5 == 0)
            zmm0_1 = data_142d3f660
        else
            zmm0_1 = *(rax_5 + 0x1c0)
        
        var_168.o = zmm0_1
        float zmm12[0x4] = var_168.o
        float (* rax_7)[0x4] = (*(*rax_4 + 0x18))(rax_4, &var_168)
        zmm12[0] = zmm12[0] * 2f
        int32_t var_dc_1 = 0x3f800000
        int32_t var_10c_1 = 0
        int32_t var_fc_1 = 0
        float temp0_3[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xaa)
        float temp0_4[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0x55)
        temp0_3[0] = temp0_3[0] * 2f
        int32_t var_ec_1 = 0
        arg4 = temp0_4[0] * 2f
        float temp0_5[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xff)
        zmm12[0] = zmm12[0] * zmm12[0]
        temp0_4[0] = temp0_4[0] * arg4
        temp0_3[0] = temp0_3[0] * temp0_3[0]
        temp0_5[0] = temp0_5[0] * zmm12[0]
        temp0_5[0] = temp0_5[0] * temp0_3[0]
        temp0_3[0] = temp0_3[0] + temp0_4[0]
        zmm12[0] = zmm12[0] * arg4
        temp0_4[0] = temp0_4[0] + zmm12[0]
        zmm12[0] = zmm12[0] * temp0_3[0]
        temp0_3[0] = temp0_3[0] + zmm12[0]
        temp0_5[0] = temp0_5[0] * arg4
        arg4 = (*rax_7)[2]
        int128_t zmm14
        zmm14.d = 1f - temp0_3[0]
        arg_8 = zmm12[0]
        float zmm13[0x4] = zmm12
        zmm0_1 = arg_8
        zmm13[0] = zmm13[0] - temp0_5[0]
        temp0_5[0] = temp0_5[0] + zmm12[0]
        temp0_4[0] = temp0_4[0] * temp0_3[0]
        float zmm4_1[0x4] = (*rax_7)[1]
        zmm0_1[0] = zmm0_1[0] - temp0_5[0]
        temp0_5[0] = temp0_5[0] + zmm12[0]
        zmm6 = *rax_7
        var_158.o = temp0_5
        zmm12 = 0x3f800000
        zmm11.d = 1f - temp0_4[0]
        arg_8 = zmm0_1[0]
        zmm0_1 = var_130
        zmm12[0] = 1f - temp0_3[0]
        int32_t var_13c_1 = 0x3f800000
        float zmm5_1[0x4] = var_148.o
        temp0_4[0] = temp0_4[0] - temp0_5[0]
        zmm5_1[0] = zmm0_1[0]
        var_168 = 0
        temp0_5[0] = temp0_5[0] + temp0_4[0]
        float temp0_6[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xe1)
        temp0_6[0] = var_12c[0]
        int32_t var_160_1 = 0
        float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xc6)
        temp0_7[0] = var_128[0]
        float temp0_8[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xc9)
        var_148.o = temp0_8
        float temp0_9[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xff)
        float var_e8[0x4]
        var_e8[0] = zmm6[0]
        float temp0_10[0x4] = _mm_shuffle_ps(var_e8, var_e8, 0xe1)
        float temp0_11[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xaa)
        temp0_10[0] = zmm4_1[0]
        float temp0_12[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0xc6)
        float temp0_13[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x55)
        temp0_12[0] = arg4
        float temp0_15[0x4] = _mm_mul_ps(temp0_9, _mm_shuffle_ps(temp0_12, temp0_12, 0xc9))
        float temp0_16[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0)
        float var_f8[0x4]
        var_f8[0] = temp0_5[0]
        float temp0_17[0x4] = _mm_shuffle_ps(var_f8, var_f8, 0xe1)
        zmm10 = zx.o(0)
        temp0_17[0] = temp0_4[0]
        float temp0_18[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xc6)
        temp0_18[0] = zmm11.d
        float temp0_20[0x4] = _mm_mul_ps(temp0_11, _mm_shuffle_ps(temp0_18, temp0_18, 0xc9))
        float var_108[0x4]
        var_108[0] = zmm13[0]
        float temp0_21[0x4] = _mm_shuffle_ps(var_108, var_108, 0xe1)
        float temp0_22[0x4] = _mm_add_ps(temp0_15, temp0_20)
        temp0_21[0] = zmm12[0]
        float temp0_23[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0xc6)
        temp0_23[0] = temp0_5[0]
        float temp0_25[0x4] = _mm_mul_ps(temp0_13, _mm_shuffle_ps(temp0_23, temp0_23, 0xc9))
        float var_118[0x4]
        var_118[0] = zmm14.d
        float temp0_26[0x4] = _mm_shuffle_ps(var_118, var_118, 0xe1)
        temp0_26[0] = var_158.o[0]
        zmm1 = arg_8
        float temp0_27[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0xc6)
        temp0_27[0] = zmm1[0]
        zmm8 = _mm_add_ps(temp0_22, 
            _mm_add_ps(temp0_25, _mm_mul_ps(temp0_16, _mm_shuffle_ps(temp0_27, temp0_27, 0xc9))))
        zmm6 = _mm_shuffle_ps(zmm8, zmm8, 0x55)
        zmm7 = _mm_shuffle_ps(zmm8, zmm8, 0xaa)
        
        if (arg3 u<= 1)
            arg_18 = 0
            goto label_14270321a

void* rcx_4 = *(arg1 + 0xe8)
float rax_9

if (rcx_4 == 0)
    zmm0_1 = zx.o(data_143dbb1f8.q)
    rax_9 = data_143dbb200
else
    void* rax_8 = *(rcx_4 + 0xb0)
    
    if (rax_8 == 0)
        float rax_10 = data_143b58090
        var_168 = data_143b58088
        zmm0_1 = zx.o(var_168)
        rax_9 = rax_10
    else
        zmm1 = *(rax_8 + 0x1d0)
        var_168.d = zmm1[0]
        var_168:4.d = _mm_shuffle_ps(zmm1, zmm1, 0x55)[0]
        float temp0_35[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
        temp0_35[0] = temp0_35[0] f- *(rax_8 + 0x114)
        zmm0_1 = zx.o(var_168)
        rax_9 = temp0_35[0]

var_148 = zmm0_1.q
int64_t var_158_1 = var_148

if ((arg3 & 0xfd) != 0)
    zmm10 = *(arg1 + 0x11c)

zmm11 = arg_10
zmm9 = arg_18
int32_t var_138

if (rcx_4 != 0)
    arg_8 = 0f
    var_138 = 0
    int64_t* rcx_5 = *(rcx_4 + 0xa0)
    (*(*rcx_5 + 0x560))(rcx_5, &arg_8, &var_138)
    zmm6[0] = zmm6[0] f- var_158_1:4.d
    zmm0_1 = arg_8
    zmm8[0] = zmm8[0] f- var_158_1.d
    zmm9[0] = zmm9[0] + arg_20
    zmm0_1[0] = zmm0_1[0] * zmm10[0]
    zmm6[0] = zmm6[0] * zmm6[0]
    zmm0_1[0] = zmm0_1[0] + zmm9[0]
    zmm8[0] = zmm8[0] * zmm8[0]
    zmm6[0] = zmm6[0] + zmm8[0]
    zmm0_1[0] = zmm0_1[0] * zmm0_1[0]

float result

if (rcx_4 == 0 || zmm6[0] > zmm0_1[0])
    result.b = 0
else
    zmm0_1 = var_138
    zmm0_1[0] = zmm0_1[0] f* *(arg1 + 0x120)
    zmm7[0] = zmm7[0] - rax_9
    zmm0_1[0] = zmm0_1[0] f+ zmm11.d
    result.b = __andps_xmmxud_memxud(zmm7, data_142d3f770)[0] <= zmm0_1[0]

return result
