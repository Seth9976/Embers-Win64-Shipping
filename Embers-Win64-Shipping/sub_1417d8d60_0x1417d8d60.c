// 函数: sub_1417d8d60
// 地址: 0x1417d8d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_58[0x4]
sub_1417dbd20(arg1, &var_58)
void* rax = *(arg1 + 0xe8)
int16_t* const rbx = &data_142d40450

if (*(rax + 0x40) != 0)
    *(rax + 0x38)

int64_t arg_8 = *(arg1 + 0xe0)
int64_t var_88
int64_t* rax_2 = sub_140b63b70(&arg_8, &var_88)

if (rax_2[1].d != 0)
    rbx = *rax_2

int64_t var_78
sub_140a2e390(&var_78, u"%s - %s", rbx)
int64_t rcx_2 = var_88

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

void arg_20
int32_t* r9_1
int128_t zmm6_1
r9_1, zmm6_1 = sub_140ae16d0(arg3, &arg_20, 0)
zmm6_1.d = zmm6_1.d f* 0.25f
char var_98 = 1
float var_48[0x4]
var_88.d = var_48[0]
var_88:4.d = _mm_shuffle_ps(var_48, var_48, 0x55)[0]
int512_t zmm3_1
zmm3_1.o = zmm6_1
float var_80 = _mm_shuffle_ps(var_48, var_48, 0xaa)[0]
int64_t* result = sub_1417d9930(arg2, &var_88, &var_78, r9_1, &arg_20, arg4[0].b)
int64_t rcx_5 = var_78

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5)
