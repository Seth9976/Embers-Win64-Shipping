// 函数: sub_1427a4700
// 地址: 0x1427a4700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_70
sub_142427eb0(&var_70)
void* result
int512_t zmm6
int512_t zmm7
int512_t zmm8
result, zmm6, zmm7, zmm8 =
    sub_1420efae0(arg1, sub_1427c0790(), &data_143dbb1f8, &data_143dbb208, &var_70)
zmm8.o = data_1434ba160
zmm6.o = 0x3f800000
int32_t var_74 = 0x3f800000
zmm7.o = zx.o(0)
int32_t var_80 = 0
sub_140d19010(result, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
int64_t arg_10 = 0
void* var_b8
var_b8.d = 0
void* rax_2 = sub_140d2dfc0(sub_1427bbfd0(), result, 0, 0, var_b8.d, 0, 0, 0, 0)
sub_141dba0e0(result, rax_2)
arg_10 = 0
int64_t zmm6_1
int64_t zmm7_1
int128_t zmm8_1
zmm6_1, zmm7_1, zmm8_1 = sub_141f32b40(rax_2, *(result + 0x130), &data_143f3f280, 0)
*(rax_2 + 0x428) = _mm_unpacklo_ps(zx.o(0), zmm6_1)
int64_t temp0_1 = _mm_unpacklo_ps(zx.o(0), zmm7_1)
*(rax_2 + 0x430) = 0
*(rax_2 + 0x43c) = temp0_1
*(rax_2 + 0x444) = 0x3f800000
*(rax_2 + 0x448) = 0x42700000
*(rax_2 + 0x44c) = 0
*(rax_2 + 0x408) = zmm8_1
sub_141ef1390(rax_2)
*(result + 0x220) = rax_2
int32_t var_80_1 = 0x3f800000
int32_t var_74_1 = 0
sub_140d19010(result, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
arg_10 = 0
void* rax_4 = sub_140d2dfc0(sub_1427bbfd0(), result, 0, 0, 0, 0, 0, 0, 0)
sub_141dba0e0(result, rax_4)
arg_10 = 0
int64_t zmm6_2
int64_t zmm7_2
int128_t zmm8_2
zmm6_2, zmm7_2, zmm8_2 = sub_141f32b40(rax_4, *(result + 0x130), &data_143f3f280, 0)
*(rax_4 + 0x448) = 0x42700000
*(rax_4 + 0x428) = _mm_unpacklo_ps(zx.o(0), zmm6_2)
*(rax_4 + 0x430) = 0
*(rax_4 + 0x43c) = _mm_unpacklo_ps(zx.o(0), zmm7_2)
*(rax_4 + 0x444) = 0x3f800000
*(rax_4 + 0x44c) = 0
*(rax_4 + 0x408) = zmm8_2
sub_141ef1390(rax_4)
*(result + 0x228) = rax_4
int32_t var_80_2 = 0
int32_t var_74_2 = 0
sub_140d19010(result, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
arg_10 = 0
void* rax_6 = sub_140d2dfc0(sub_1427bbfd0(), result, 0, 0, 0, 0, 0, 0, 0)
sub_141dba0e0(result, rax_6)
arg_10 = 0
float zmm6_3[0x4]
int64_t zmm7_3
int128_t zmm8_3
zmm6_3, zmm7_3, zmm8_3 = sub_141f32b40(rax_6, *(result + 0x130), &data_143f3f280, 0)
*(rax_6 + 0x448) = 0x42700000
*(rax_6 + 0x428) = (_mm_unpacklo_ps(zmm6_3, zmm7_3)).q
*(rax_6 + 0x430) = 0
*(rax_6 + 0x43c) = (_mm_unpacklo_ps(zx.o(0), zmm6_3[0].q)).q
*(rax_6 + 0x444) = 0
*(rax_6 + 0x44c) = 0
*(rax_6 + 0x408) = zmm8_3
sub_141ef1390(rax_6)
*(result + 0x230) = rax_6
return result
