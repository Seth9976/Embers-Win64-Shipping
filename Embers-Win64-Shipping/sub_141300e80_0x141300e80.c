// 函数: sub_141300e80
// 地址: 0x141300e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_68
sub_140a2e390(&var_68, u"Visualize Depth of Field", arg3)
int16_t* const rdi = &data_142d40450
int16_t* const rbx = &data_142d40450
int16_t* r15 = var_68
int32_t var_60

if (var_60 != 0)
    rbx = r15

uint128_t var_58 = data_142f2cb30
sub_140a2e390(&var_68, 
    Cinematic DOF (blue is far, green is near, black is in focus, cross hair shows Depth and CoC radius "
"in pixel)", 
    sub_142409910(arg2, 0x41a00000, 0x42000000, rbx, sub_1423de050(), &var_58, &data_14399f5e0))

if (r15 != 0)
    sub_140a74f90(r15)

int16_t* const rbx_1 = &data_142d40450
int16_t* r15_1 = var_68

if (var_60 != 0)
    rbx_1 = r15_1

var_58 = data_142d3f670
int128_t zmm6 =
    sub_142409910(arg2, 0x41f00000, 0x42700000, rbx_1, sub_1423de050(), &var_58, &data_14399f5e0)
sub_140a2e390(&var_68, u"FocalDistance: %.2f", _mm_cvtps_pd((*(*arg1 + 0x1254)).q).q)

if (r15_1 != 0)
    sub_140a74f90(r15_1)

int16_t* const rbx_2 = &data_142d40450
int16_t* r15_2 = var_68

if (var_60 != 0)
    rbx_2 = r15_2

var_58 = data_142d3f670
int128_t zmm6_1 =
    sub_142409910(arg2, zmm6, 0x42b00000, rbx_2, sub_1423de050(), &var_58, &data_14399f5e0)
sub_140a2e390(&var_68, u"Aperture F-stop: %.2f", _mm_cvtps_pd((*(*arg1 + 0x10e0)).q).q)

if (r15_2 != 0)
    sub_140a74f90(r15_2)

int16_t* const rbx_3 = &data_142d40450
int16_t* r15_3 = var_68

if (var_60 != 0)
    rbx_3 = r15_3

var_58 = data_142d3f670
int128_t zmm6_2 =
    sub_142409910(arg2, zmm6_1, 0x42cc0000, rbx_3, sub_1423de050(), &var_58, &data_14399f5e0)
sub_140a2e390(&var_68, u"Aperture: f/%.2f", _mm_cvtps_pd((*(*arg1 + 0x10e0)).q).q)

if (r15_3 != 0)
    sub_140a74f90(r15_3)

int16_t* const rbx_4 = &data_142d40450
int16_t* r15_4 = var_68

if (var_60 != 0)
    rbx_4 = r15_4

var_58 = data_142d3f670
int64_t r8_4
int128_t zmm6_3
r8_4, zmm6_3 =
    sub_142409910(arg2, zmm6_2, 0x42e80000, rbx_4, sub_1423de050(), &var_58, &data_14399f5e0)
sub_140a2e390(&var_68, 
    DepthBlur (not related to Depth of Field, due to light traveling long distances", r8_4)

if (r15_4 != 0)
    sub_140a74f90(r15_4)

int16_t* const rbx_5 = &data_142d40450
int16_t* r15_5 = var_68

if (var_60 != 0)
    rbx_5 = r15_5

var_58 = data_142d3f670
int128_t zmm6_4 =
    sub_142409910(arg2, zmm6_3, 0x43100000, rbx_5, sub_1423de050(), &var_58, &data_14399f5e0)
sub_140a2e390(&var_68, u"  km for 50%: %.2f", _mm_cvtps_pd((*(*arg1 + 0x1258)).q).q)

if (r15_5 != 0)
    sub_140a74f90(r15_5)

int16_t* const rbx_6 = &data_142d40450
int16_t* r15_6 = var_68

if (var_60 != 0)
    rbx_6 = r15_6

var_58 = data_142d3f670
int128_t zmm6_5 =
    sub_142409910(arg2, zmm6_4, 0x431e0000, rbx_6, sub_1423de050(), &var_58, &data_14399f5e0)
sub_140a2e390(&var_68, u"  Radius (pixels in 1920x): %.2f", _mm_cvtps_pd((*(*arg1 + 0x125c)).q).q)

if (r15_6 != 0)
    sub_140a74f90(r15_6)

int16_t* const rbx_7 = &data_142d40450
int16_t* r15_7 = var_68

if (var_60 != 0)
    rbx_7 = r15_7

var_58 = data_142d3f670
sub_142409910(arg2, zmm6_5, 0x432c0000, rbx_7, sub_1423de050(), &var_58, &data_14399f5e0)
void* rbx_8 = *arg1
int32_t arg_8
int128_t zmm6_6 = sub_14130f320(rbx_8 + 0x280, &arg_8)
*(rbx_8 + 0x1250)
tanf(atanf(1f f/ *(rbx_8 + 0x280)))
int128_t zmm2_8
zmm2_8.d = arg4.d f* 57.2957764f
float zmm1_8[0x2] = arg_8
zmm1_8[0] = zmm1_8[0] * 57.2957764f
zmm2_8.d = zmm2_8.d f+ zmm2_8.d
_mm_cvtps_pd(zmm2_8.q)
zmm1_8[0] = zmm1_8[0] + zmm1_8[0]
sub_140a2e390(&var_68, u"Field Of View in deg. (computed): %.1f x %.1f", _mm_cvtps_pd(zmm1_8).q)

if (r15_7 != 0)
    sub_140a74f90(r15_7)

int16_t* const rbx_9 = &data_142d40450
int16_t* r14_1 = var_68

if (var_60 != 0)
    rbx_9 = r14_1

var_58 = data_142f5cd50
int128_t zmm6_7
float zmm7_1[0x2]
zmm6_7, zmm7_1 =
    sub_142409910(arg2, zmm6_6, 0x43480000, rbx_9, sub_1423de050(), &var_58, &data_14399f5e0)
sub_140a2e390(&var_68, u"Focal Length (computed): %.1f", _mm_cvtps_pd(zmm7_1).q)

if (r14_1 != 0)
    sub_140a74f90(r14_1)

int16_t* rbx_10 = &data_142d40450
int16_t* r14_2 = var_68

if (var_60 != 0)
    rbx_10 = r14_2

var_58 = data_142f5cd60
int64_t r8_9
int128_t zmm6_8
r8_9, zmm6_8 =
    sub_142409910(arg2, zmm6_7, 0x43560000, rbx_10, sub_1423de050(), &var_58, &data_14399f5e0)
sub_140a2e390(&var_68, u"Sensor: APS-C 24.576 mm sensor, crop-factor 1.61x", r8_9)

if (r14_2 != 0)
    sub_140a74f90(r14_2)

int16_t* rbx_11 = var_68

if (var_60 != 0)
    rdi = rbx_11

var_58 = data_142f5cd50
uint64_t result =
    sub_142409910(arg2, zmm6_8, 0x43640000, rdi, sub_1423de050(), &var_58, &data_14399f5e0)

if (rbx_11 == 0)
    return result

return sub_140a74f90(rbx_11)
