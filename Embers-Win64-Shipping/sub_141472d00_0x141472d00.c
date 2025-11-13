// 函数: sub_141472d00
// 地址: 0x141472d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg2 + 0x78)
int512_t zmm0
zmm0.o = zx.o(0)
int512_t zmm1
zmm1.o = zx.o(0)
int64_t rax = *rbx
int128_t var_128
__builtin_memset(&var_128, 0, 0x70)
int64_t r14

if ((*(rax + 0x58))(rbx, zmm1) == 0)
    r14.b = 0
else if (sub_142134f80(arg7, 1) == 0)
    r14.b = 0
else if (sub_14212f090(arg7) != 0)
    r14.b = 0
else
    r14.b = 1

int128_t var_118
int128_t var_108
int128_t var_f8
int128_t var_e8
sub_14146edf0(arg7, rbx, *(arg1 + 0x10), *(arg1 + 0x68), zmm0, *(arg1 + 0x69), r14.b, &var_128, 
    &var_118, &var_108, &var_f8, &var_e8)
void* rdx_2 = *(arg1 + 0x18)
char var_170_1 = 0
int128_t var_b8 = zx.o(0)
char var_178
var_178.d = arg4
sub_141458e70(&var_b8, rdx_2, arg5, arg2, var_178, 0)
int64_t rax_5 = sub_141260e50(var_128.q, var_f8.q)
char rax_7
int32_t r12_1

if (*(arg1 + 0x69) != 0)
    rax_7 = sub_14122e130((*U"1111")[sx.q(*(arg1 + 0x10))])
    r12_1 = 6

if (*(arg1 + 0x69) == 0 || rax_7 != 0)
    r12_1 = 1

int128_t var_c8
int128_t zmm6 = var_c8
int64_t* result = arg1 + 0x28
int32_t r15_1 = 0
int128_t zmm8 = var_e8
int128_t zmm9 = var_f8
int128_t zmm10 = var_108
int128_t zmm11 = var_118
int128_t zmm12 = var_128

do
    void** var_150
    var_150.d = arg9
    int64_t* var_158
    var_158.d = arg8
    var_170_1.q = arg7
    var_178.q = arg6
    int32_t var_a8_1 = r15_1
    var_128 = zmm12
    var_118 = zmm11
    var_108 = zmm10
    var_f8 = zmm9
    var_e8 = zmm8
    int128_t var_d8
    int128_t var_d8_1 = var_d8
    int128_t var_c8_1 = zmm6
    zmm6 = sub_14146d710(arg1, arg2, arg3, arg5, var_178, nullptr, result, &var_128, var_158.d, 
        var_150.d, rax_5, r14.b * 2, &var_b8)
    r15_1 += 1
    result = arg1 + 0x28
while (r15_1 u< r12_1)

return result
