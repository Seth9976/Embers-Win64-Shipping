// 函数: sub_1414c3240
// 地址: 0x1414c3240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = 0
int64_t* rcx = *(arg2 + 0x80)
int64_t* rax_1 = (*(*rcx + 0x40))(rcx, zx.q(*(arg1 + 0x10)), &arg_10)
int64_t rdx_1 = *rax_1
char result = (*(rdx_1 + 0x290))(rax_1, rdx_1)

if (result == 0)
    return result

int64_t arg_8 = sub_141261c60(arg2)
int32_t rax_3 = sub_141261c10(arg2, rax_1, &arg_8)
int32_t rax_4 = sub_141261bd0(arg2, rax_1, &arg_8)
int64_t rsi_1 = arg_10

if (rsi_1 == 0)
    rsi_1 = *(arg2 + 0x80)

int64_t* rcx_5 = *(arg2 + 0x78)
int512_t zmm0
zmm0.o = zx.o(0)
int512_t zmm1
zmm1.o = zx.o(0)
int128_t var_138
__builtin_memset(&var_138, 0, 0x70)
char var_178_1 = 0
char var_188_1 = 0
int128_t var_128
int128_t var_118
int128_t var_108
sub_14107c380(rax_1, (*(*rcx_5 + 0x40))(zmm0, zmm1), 0, *(arg1 + 0x10), zmm0, 0, 0, 0, &var_128, 
    &var_118, &var_138, &var_108)
void* rdx_5 = *(arg1 + 0x18)
char var_180_1 = 0
int128_t var_c8
__builtin_memset(&var_c8, 0, 0x18)
var_188_1.d = arg5
sub_141458e70(&var_c8, rdx_5, arg4, arg2, 0, 0)
int64_t rax_8 = sub_141260e50(var_138.q, var_108.q)
int128_t zmm1_1 = var_128
int128_t* var_160_1
var_160_1.d = rax_4
int128_t var_a8 = var_138
int128_t* var_168_1
var_168_1.d = rax_3
var_178_1.q = arg1 + 0x28
int128_t var_88_1 = var_118
int128_t var_98_1 = zmm1_1
zmm1_1 = var_108
int128_t var_68
__builtin_memset(&var_68, 0, 0x30)
int128_t var_78_1 = zmm1_1
var_180_1.q = rax_1
var_188_1.q = rsi_1
return sub_1410731c0(arg1, arg2, arg3, arg4, nullptr, nullptr, nullptr, &var_a8, var_168_1.d, 
    var_160_1.d, rax_8, 0, &var_c8)
