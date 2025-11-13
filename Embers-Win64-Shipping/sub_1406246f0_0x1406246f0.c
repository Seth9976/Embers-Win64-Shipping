// 函数: sub_1406246f0
// 地址: 0x1406246f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_1425a4240()
sub_140d19010(rax, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
int64_t arg_18 = 0
void* result = sub_140d2dfc0(sub_1425a4240(), rax, 0, 0, 0, 0, 0, 0, 0)

if (result == 0)
    return result

*(result + 0x16e) &= 0xfb
*(result + 0x16e) |= 8
*(result + 0x208) = 0xac44
*(result + 0x204) = 2
uint128_t zmm0_1
zmm0_1.d = sub_142366f80(result).d f* _mm_cvtepi32_ps(zx.o(*(result + 0x204) << 4)).d
int32_t rax_4 = int.d(zmm0_1.d)
uint128_t zmm1_1

if (rax_4 == 0)
    zmm1_1 = zx.o(0)
else
    zmm1_1.d = _mm_cvtepi32_ps(zx.o(arg2)).d f* 8f
    zmm1_1.d = zmm1_1.d f/ _mm_cvtepi32_ps(zx.o(rax_4)).d

*(result + 0xf8) = zmm1_1.d
*(result + 0x274) = arg2
*(result + 0x16a) = 0
sub_142371c60(result, arg1, arg2)
return result
