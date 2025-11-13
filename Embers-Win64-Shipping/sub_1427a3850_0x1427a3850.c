// 函数: sub_1427a3850
// 地址: 0x1427a3850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1
void var_a0
sub_142427eb0(&var_a0)
int64_t* rax = sub_1427c0540()
void* rax_1
float zmm6[0x4]
float zmm7[0x4]
int512_t zmm8
int512_t zmm9
rax_1, zmm6, zmm7, zmm8, zmm9 = sub_1420efae0(arg_8, rax, &data_143dbb1f8, &data_143dbb208, &var_a0)
void* rsi = rax_1
zmm9.o = 0x3f800000
zmm8.o = zx.o(0)
void* arg_18 = rax_1
int64_t* var_b8 = &arg_8
int32_t var_b0 = &arg_18
int32_t arg_10
int32_t* var_a8 = &arg_10
arg_10 = 0x40400000
int64_t var_c8

if ((arg2.b & 2) != 0)
    var_c8 = 0x3f800000
    int32_t var_c0_1 = 0
    void* rax_2
    rax_2, zmm6, zmm7 = sub_14279d950(&var_b8, &data_14399f5f0, &var_c8)
    *(arg_18 + 0x220) = rax_2
    rsi = arg_18

if ((arg2.b & 4) != 0)
    var_c8.d = 0
    var_c8 = 0x3f800000
    void* rax_3
    rax_3, zmm6, zmm7 = sub_14279d950(&var_b8, &data_14399f600, &var_c8)
    *(arg_18 + 0x228) = rax_3
    rsi = arg_18

if ((arg2.b & 8) != 0)
    var_c8 = 0
    int32_t var_c0_2 = 0x3f800000
    void* rax_4
    rax_4, zmm6, zmm7 = sub_14279d950(&var_b8, &data_14399f610, &var_c8)
    *(arg_18 + 0x230) = rax_4
    rsi = arg_18

int64_t arg_20

if ((arg2.b & 0x40) != 0)
    var_b0 = 0x3f800000
    int32_t var_c0_3 = 0
    sub_140d19010(rsi, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")
    arg_20 = 0
    void* var_f8
    var_f8.d = 0
    void* rax_6 = sub_140d2dfc0(sub_1427bc0b0(), rsi, 0, 0, var_f8.d, 0, 0, 0, 0)
    sub_141dba0e0(rsi, rax_6)
    arg_20 = 0
    int64_t zmm8_1
    int64_t zmm9_1
    zmm6, zmm7, zmm8_1, zmm9_1 = sub_141f32b40(rax_6, *(rsi + 0x130), &data_143f3f280, 0)
    *(rax_6 + 0x428) = (_mm_unpacklo_ps(zx.o(0), zmm9_1)).q
    float temp0_2[0x4] = _mm_unpacklo_ps(zx.o(0), zmm8_1)
    *(rax_6 + 0x430) = 0
    *(rax_6 + 0x434) = temp0_2.q
    *(rax_6 + 0x43c) = var_b0
    float zmm0_1[0x4] = data_14399f5f0
    *(rax_6 + 0x44c) = 0x41f00000
    *(rax_6 + 0x448) = 0x41f00000
    *(rax_6 + 0x408) = zmm0_1
    *(rax_6 + 0x454) = 6
    sub_141ef1390(rax_6)
    *(rax_6 + 0x44c) = 0x41f00000
    *(rax_6 + 0x448) = 0x41f00000
    *(rax_6 + 0x454) = 6
    *(rax_6 + 0x450) = arg_10
    sub_141ee8490(rax_6)
    (*(*rax_6 + 0x498))(rax_6)
    *(arg_18 + 0x238) = rax_6
    rsi = arg_18

if ((arg2.b & 0x20) != 0)
    int32_t var_c0_4 = 0x3f800000
    var_b0 = 0
    sub_140d19010(rsi, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")
    arg_20 = 0
    void* rax_11 = sub_140d2dfc0(sub_1427bc0b0(), rsi, 0, 0, 0, 0, 0, 0, 0)
    sub_141dba0e0(rsi, rax_11)
    arg_20 = 0
    int64_t zmm8_2
    float zmm9_2[0x4]
    zmm6, zmm7, zmm8_2, zmm9_2 = sub_141f32b40(rax_11, *(rsi + 0x130), &data_143f3f280, 0)
    *(rax_11 + 0x428) = (_mm_unpacklo_ps(zmm9_2, zmm8_2)).q
    float temp0_4[0x4] = _mm_unpacklo_ps(zx.o(0), zmm8_2)
    *(rax_11 + 0x430) = 0
    *(rax_11 + 0x434) = temp0_4.q
    *(rax_11 + 0x43c) = var_c0_4
    float zmm0_3[0x4] = data_14399f600
    *(rax_11 + 0x44c) = 0x41f00000
    *(rax_11 + 0x448) = 0x41f00000
    *(rax_11 + 0x408) = zmm0_3
    *(rax_11 + 0x454) = 6
    sub_141ef1390(rax_11)
    *(rax_11 + 0x44c) = 0x41f00000
    *(rax_11 + 0x448) = 0x41f00000
    *(rax_11 + 0x454) = 6
    *(rax_11 + 0x450) = arg_10
    sub_141ee8490(rax_11)
    (*(*rax_11 + 0x498))(rax_11)
    *(arg_18 + 0x240) = rax_11
    rsi = arg_18

if ((arg2.b & 0x10) != 0)
    int32_t var_c0_5 = 0
    var_b0 = 0
    sub_140d19010(rsi, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")
    arg_20 = 0
    void* rax_16 = sub_140d2dfc0(sub_1427bc0b0(), rsi, 0, 0, 0, 0, 0, 0, 0)
    sub_141dba0e0(rsi, rax_16)
    arg_20 = 0
    int64_t zmm8_3
    float zmm9_3[0x4]
    zmm6, zmm7, zmm8_3, zmm9_3 = sub_141f32b40(rax_16, *(rsi + 0x130), &data_143f3f280, 0)
    *(rax_16 + 0x428) = (_mm_unpacklo_ps(zmm9_3, zmm8_3)).q
    *(rax_16 + 0x434) = (_mm_unpacklo_ps(zx.o(0), zmm9_3[0].q)).q
    *(rax_16 + 0x43c) = 0
    *(rax_16 + 0x430) = 0
    float zmm0_5[0x4] = data_14399f610
    *(rax_16 + 0x44c) = 0x41f00000
    *(rax_16 + 0x448) = 0x41f00000
    *(rax_16 + 0x408) = zmm0_5
    *(rax_16 + 0x454) = 6
    sub_141ef1390(rax_16)
    *(rax_16 + 0x44c) = 0x41f00000
    *(rax_16 + 0x448) = 0x41f00000
    *(rax_16 + 0x454) = 6
    *(rax_16 + 0x450) = arg_10
    sub_141ee8490(rax_16)
    (*(*rax_16 + 0x498))(rax_16)
    *(arg_18 + 0x248) = rax_16
    rsi = arg_18

var_b8 = &arg_8
int32_t var_b0_1 = &arg_18
int32_t* var_a8_1 = &arg_10
void* rax_19
rax_19.b = 0

if (arg2.b s< 0)
    var_c8 = 0x3f800000
    int32_t var_c0_6 = 0
    rax_19, zmm6, zmm7 = sub_14279da70(&var_b8, &data_14399f5f0, &var_c8)
    *(arg_18 + 0x250) = rax_19
    rax_19.b = 1
    rsi = arg_18

if (test_bit(arg2, 8))
    var_c8.d = 0
    var_c8 = 0x3f800000
    rax_19, zmm6, zmm7 = sub_14279da70(&var_b8, &data_14399f600, &var_c8)
    *(arg_18 + 0x258) = rax_19
    rax_19.b = 1
    rsi = arg_18

if (test_bit(arg2, 9))
    var_c8 = 0
    int32_t var_c0_7 = 0x3f800000
    *(arg_18 + 0x260) = sub_14279da70(&var_b8, &data_14399f610, &var_c8)
    rsi = arg_18
label_1427a3dd9:
    void* rax_21 = sub_14279b500(rsi)
    sub_141dba0e0(arg_18, rax_21)
    arg_20 = 0
    zmm6, zmm7 = sub_141f32b40(rax_21, *(arg_18 + 0x130), &data_143f3f280, 0)
    int128_t zmm0_7 = data_14399f5d0
    *(rax_21 + 0x438) = 0x3f800000
    *(rax_21 + 0x434) = 0x42f00000
    *(rax_21 + 0x408) = zmm0_7
    *(rax_21 + 0x440) = 1
    sub_141ef1390(rax_21)
    rsi = arg_18
else if (rax_19.b != 0)
    goto label_1427a3dd9

if (test_bit(arg2, 0x10))
    float var_38_1[0x4] = zmm6
    float var_48_1[0x4] = zmm7
    int32_t var_c0_8 = 0x41600000
    var_b0_1 = 0x40e00000
    sub_140d19010(rsi, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")
    arg_20 = 0
    void* rax_23 = sub_140d2dfc0(sub_1427bb120(), rsi, 0, 0, 0, 0, 0, 0, 0)
    sub_141dba0e0(rsi, rax_23)
    arg_20 = 0
    float zmm6_1[0x4]
    float zmm7_1[0x4]
    zmm6_1, zmm7_1 = sub_141f32b40(rax_23, *(rsi + 0x130), &data_143f3f280, 0)
    *(rax_23 + 0x428) = (_mm_unpacklo_ps(zmm6_1, zmm6_1[0].q)).q
    *(rax_23 + 0x430) = var_b0_1
    float zmm0_8[0x4] = data_14399f5e0
    *(rax_23 + 0x450) = (_mm_unpacklo_ps(zmm7_1, zmm7_1[0].q)).q
    *(rax_23 + 0x408) = zmm0_8
    *(rax_23 + 0x458) = var_c0_8
    sub_141ef1390(rax_23)
    *(arg_18 + 0x268) = rax_23
    rsi = arg_18

if (test_bit(arg2, 0xa))
    int32_t var_c0_9 = 0x3f800000
    var_b0_1 = 0
    sub_140d19010(rsi, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")
    arg_20 = 0
    void* rax_28 = sub_140d2dfc0(sub_1427bc0b0(), rsi, 0, 0, 0, 0, 0, 0, 0)
    sub_141dba0e0(rsi, rax_28)
    arg_20 = 0
    int64_t zmm8_4
    float zmm9_4[0x4]
    zmm8_4, zmm9_4 = sub_141f32b40(rax_28, *(rsi + 0x130), &data_143f3f280, 0)
    *(rax_28 + 0x428) = (_mm_unpacklo_ps(zmm9_4, zmm8_4)).q
    float temp0_10[0x4] = _mm_unpacklo_ps(zx.o(0), zmm8_4)
    *(rax_28 + 0x430) = 0
    *(rax_28 + 0x434) = temp0_10.q
    *(rax_28 + 0x43c) = var_c0_9
    float zmm0_9[0x4] = data_14399f5f0
    *(rax_28 + 0x44c) = 0x41f00000
    *(rax_28 + 0x448) = 0x41f00000
    *(rax_28 + 0x408) = zmm0_9
    *(rax_28 + 0x454) = 6
    sub_141ef1390(rax_28)
    *(rax_28 + 0x440) = 0x430c0000
    *(rax_28 + 0x444) = 0xc1200000
    *(rax_28 + 0x448) = 0x40e00000
    *(rax_28 + 0x44c) = 0x41a00000
    *(rax_28 + 0x450) = arg_10
    sub_141ee8490(rax_28)
    (*(*rax_28 + 0x498))(rax_28)
    *(rax_28 + 0x454) = 7
    *(arg_18 + 0x270) = rax_28
    rsi = arg_18

if (test_bit(arg2, 0xb))
    int32_t var_c0_10 = 0x3f800000
    var_b0_1 = 0
    sub_140d19010(rsi, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")
    arg_20 = 0
    void* rax_33 = sub_140d2dfc0(sub_1427bc0b0(), rsi, 0, 0, 0, 0, 0, 0, 0)
    sub_141dba0e0(rsi, rax_33)
    arg_20 = 0
    int64_t zmm8_5
    int64_t zmm9_5
    zmm8_5, zmm9_5 = sub_141f32b40(rax_33, *(rsi + 0x130), &data_143f3f280, 0)
    *(rax_33 + 0x428) = (_mm_unpacklo_ps(zx.o(0), zmm9_5)).q
    float temp0_12[0x4] = _mm_unpacklo_ps(zx.o(0), zmm8_5)
    *(rax_33 + 0x430) = 0
    *(rax_33 + 0x434) = temp0_12.q
    *(rax_33 + 0x43c) = var_c0_10
    float zmm0_11[0x4] = data_14399f600
    *(rax_33 + 0x44c) = 0x41f00000
    *(rax_33 + 0x448) = 0x41f00000
    *(rax_33 + 0x408) = zmm0_11
    *(rax_33 + 0x454) = 6
    sub_141ef1390(rax_33)
    *(rax_33 + 0x440) = 0x430c0000
    *(rax_33 + 0x444) = 0xc1200000
    *(rax_33 + 0x448) = 0x40e00000
    *(rax_33 + 0x44c) = 0x41a00000
    *(rax_33 + 0x450) = arg_10
    sub_141ee8490(rax_33)
    (*(*rax_33 + 0x498))(rax_33)
    *(rax_33 + 0x454) = 7
    *(arg_18 + 0x278) = rax_33
    rsi = arg_18

if (test_bit(arg2, 0xc))
    int32_t var_c0_11 = 0
    var_b0_1 = 0x3f800000
    sub_140d19010(rsi, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")
    arg_20 = 0
    void* rax_38 = sub_140d2dfc0(sub_1427bc0b0(), rsi, 0, 0, 0, 0, 0, 0, 0)
    sub_141dba0e0(rsi, rax_38)
    arg_20 = 0
    int64_t zmm8_6
    float zmm9_6[0x4]
    zmm8_6, zmm9_6 = sub_141f32b40(rax_38, *(rsi + 0x130), &data_143f3f280, 0)
    *(rax_38 + 0x428) = (_mm_unpacklo_ps(zx.o(0), zmm8_6)).q
    float temp0_14[0x4] = _mm_unpacklo_ps(zmm9_6, zmm8_6)
    *(rax_38 + 0x430) = var_b0_1
    *(rax_38 + 0x434) = temp0_14.q
    *(rax_38 + 0x43c) = 0
    float zmm0_13[0x4] = data_14399f610
    *(rax_38 + 0x44c) = 0x41f00000
    *(rax_38 + 0x448) = 0x41f00000
    *(rax_38 + 0x408) = zmm0_13
    *(rax_38 + 0x454) = 6
    sub_141ef1390(rax_38)
    *(rax_38 + 0x440) = 0x430c0000
    *(rax_38 + 0x444) = 0xc1200000
    *(rax_38 + 0x448) = 0x40e00000
    *(rax_38 + 0x44c) = 0x41a00000
    *(rax_38 + 0x450) = arg_10
    sub_141ee8490(rax_38)
    (*(*rax_38 + 0x498))(rax_38)
    *(rax_38 + 0x454) = 7
    *(arg_18 + 0x280) = rax_38
    rsi = arg_18

if (test_bit(arg2, 0xd))
    int32_t var_c0_12 = 0x3f800000
    var_b0_1 = 0
    sub_140d19010(rsi, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")
    arg_20 = 0
    void* rax_43 = sub_140d2dfc0(sub_1427bc0b0(), rsi, 0, 0, 0, 0, 0, 0, 0)
    sub_141dba0e0(rsi, rax_43)
    arg_20 = 0
    int64_t zmm8_7
    int64_t zmm9_7
    zmm8_7, zmm9_7 = sub_141f32b40(rax_43, *(rsi + 0x130), &data_143f3f280, 0)
    *(rax_43 + 0x428) = (_mm_unpacklo_ps(zx.o(0), zmm9_7)).q
    float temp0_16[0x4] = _mm_unpacklo_ps(zx.o(0), zmm8_7)
    *(rax_43 + 0x430) = 0
    *(rax_43 + 0x434) = temp0_16.q
    *(rax_43 + 0x43c) = var_c0_12
    float zmm0_15[0x4] = data_14399f5f0
    *(rax_43 + 0x44c) = 0x41f00000
    *(rax_43 + 0x448) = 0x41f00000
    *(rax_43 + 0x408) = zmm0_15
    *(rax_43 + 0x454) = 6
    sub_141ef1390(rax_43)
    *(rax_43 + 0x444) = 0x42f00000
    *(rax_43 + 0x440) = 0x42f00000
    *(rax_43 + 0x44c) = 0x41a00000
    *(rax_43 + 0x448) = 0x41a00000
    *(rax_43 + 0x450) = arg_10
    sub_141ee8490(rax_43)
    (*(*rax_43 + 0x498))(rax_43)
    *(rax_43 + 0x454) = 6
    *(arg_18 + 0x288) = rax_43
    rsi = arg_18

if (test_bit(arg2, 0xe))
    int32_t var_c0_13 = 0x3f800000
    var_b0_1 = 0
    sub_140d19010(rsi, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")
    arg_20 = 0
    void* rax_48 = sub_140d2dfc0(sub_1427bc0b0(), rsi, 0, 0, 0, 0, 0, 0, 0)
    int64_t* rbx_10 = rax_48
    sub_141dba0e0(rsi, rax_48)
    arg_20 = 0
    int64_t zmm8_8
    float zmm9_8[0x4]
    zmm8_8, zmm9_8 = sub_141f32b40(rbx_10, *(rsi + 0x130), &data_143f3f280, 0)
    rbx_10[0x85] = (_mm_unpacklo_ps(zmm9_8, zmm8_8)).q
    float temp0_18[0x4] = _mm_unpacklo_ps(zx.o(0), zmm8_8)
    rbx_10[0x86].d = 0
    *(rbx_10 + 0x434) = temp0_18.q
    *(rbx_10 + 0x43c) = var_c0_13
    float zmm0_17[0x4] = data_14399f600
    *(rbx_10 + 0x44c) = 0x41f00000
    rbx_10[0x89].d = 0x41f00000
    *(rbx_10 + 0x408) = zmm0_17
    *(rbx_10 + 0x454) = 6
    sub_141ef1390(rbx_10)
    *(rbx_10 + 0x444) = 0x42f00000
    rbx_10[0x88].d = 0x42f00000
    *(rbx_10 + 0x44c) = 0x41a00000
    rbx_10[0x89].d = 0x41a00000
    rbx_10[0x8a].d = arg_10
    sub_141ee8490(rbx_10)
    (*(*rbx_10 + 0x498))(rbx_10)
    *(rbx_10 + 0x454) = 6
    *(arg_18 + 0x290) = rbx_10
    rsi = arg_18

if (not(test_bit(arg2, 0xf)))
    return rsi

int32_t var_c0_14 = 0
var_b0_1 = 0
sub_140d19010(rsi, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
arg_20 = 0
int64_t* rax_53 = sub_140d2dfc0(sub_1427bc0b0(), rsi, 0, 0, 0, 0, 0, 0, 0)
sub_141dba0e0(rsi, rax_53)
arg_20 = 0
int64_t zmm8_9
float zmm9_9[0x4]
zmm8_9, zmm9_9 = sub_141f32b40(rax_53, *(rsi + 0x130), &data_143f3f280, 0)
rax_53[0x85] = (_mm_unpacklo_ps(zmm9_9, zmm8_9)).q
*(rax_53 + 0x434) = (_mm_unpacklo_ps(zx.o(0), zmm9_9[0].q)).q
*(rax_53 + 0x43c) = 0
rax_53[0x86].d = 0
float zmm0_19[0x4] = data_14399f610
*(rax_53 + 0x44c) = 0x41f00000
rax_53[0x89].d = 0x41f00000
*(rax_53 + 0x408) = zmm0_19
*(rax_53 + 0x454) = 6
sub_141ef1390(rax_53)
*(rax_53 + 0x444) = 0x42f00000
rax_53[0x88].d = 0x42f00000
*(rax_53 + 0x44c) = 0x41a00000
rax_53[0x89].d = 0x41a00000
rax_53[0x8a].d = arg_10
sub_141ee8490(rax_53)
(*(*rax_53 + 0x498))(rax_53)
*(rax_53 + 0x454) = 6
*(arg_18 + 0x298) = rax_53
return arg_18
