// 函数: sub_14173b2f0
// 地址: 0x14173b2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t zmm0
zmm0.d = (*arg2).d f* *(arg1 + 0x34)
float zmm5 = *(arg1 + 0x2c) f* arg3[1]
float zmm1 = *(arg1 + 0x38) f* *(arg2 + 4)
int64_t zmm3 = *(arg1 + 0x28)
int32_t var_38 = zmm0.d
zmm0.d = (*(arg1 + 0x3c)).d f* arg2[1].d
int64_t zmm4
zmm4.d = zmm3.d f* *arg3
float var_34 = zmm1
int128_t zmm6
zmm6.d = (*(arg1 + 0x30)).d f* arg3[2]
int32_t var_30 = zmm0.d
zmm0.d = zmm4.d f* zmm4.d
float temp0 = _mm_sqrt_ss(0, zmm5 * zmm5 f+ zmm0.d + zmm6.d f* zmm6.d)
int64_t var_48
int32_t var_40

if (temp0 <= 1.17549435e-38f)
    var_40 = 0x3f800000
    var_48 = 0
else
    zmm0.d = 1f / temp0
    zmm4.d = zmm4.d f* zmm0.d
    zmm6.d = zmm6.d f* zmm0.d
    var_48.d = zmm4.d
    var_48:4.d = zmm5 f* zmm0.d
    var_40 = zmm6.d

bool cond:0 = zmm3.d f<= *(arg1 + 0x2c)
int64_t var_28 = var_48
int32_t var_20 = var_40

if (cond:0 || not(zmm3.d f> *(arg1 + 0x30)))
    zmm3 = __maxss_xmmss_memss((*(arg1 + 0x30)).d, *(arg1 + 0x2c))

int64_t* rcx = *(arg1 + 0x10)
zmm3.d = zmm3.d f* arg4
return (*(*rcx + 0x48))(rcx, &var_38, &var_28, zmm3, zmm3.d)
