// 函数: sub_1406d0f90
// 地址: 0x1406d0f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm3 = *arg1
int32_t zmm1 = (zx.o(0)).d

if (zmm3 f>= 0f)
    zmm3 = _mm_min_ss(zmm3, 0x3f800000)
else
    zmm3 = (zx.o(0)).d

int32_t zmm2 = arg1[1]

if (zmm2 f>= 0f)
    _mm_min_ss(zmm2, 0x3f800000)

int32_t zmm4 = arg1[2]

if (not(zmm4 f< 0f))
    zmm1 = _mm_min_ss(zmm4, 0x3f800000)

int32_t var_28 = int.d(zmm1 f* 255f)
int64_t var_18
sub_140a2e390(&var_18, u"#%02x%02x%02x", zx.q(int.d(zmm3 f* 255f)))
int32_t result = &var_18
int64_t rcx_2

if (arg2 == &var_18)
    rcx_2 = var_18
else
    int64_t rcx_1 = *arg2
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    *arg2 = var_18
    rcx_2 = 0
    var_18 = 0
    int32_t var_10
    arg2[1].d = var_10
    int32_t result_1
    result = result_1
    *(arg2 + 0xc) = result
    var_10.q = 0

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2)
