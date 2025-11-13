// 函数: sub_1411359b0
// 地址: 0x1411359b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm0
zmm0.o = zx.o(0)
int512_t zmm1
zmm1.o = zx.o(0)
int128_t var_168
__builtin_memset(&var_168, 0, 0x70)
int64_t* rcx = *(arg2 + 0x78)
char var_1a8 = 0
char var_1b8 = 0
int128_t var_158
int128_t var_148
int128_t var_138
int512_t zmm1_1
int512_t zmm2
zmm1_1, zmm2 = sub_14107c380(arg4, (*(*rcx + 0x40))(rcx, zmm1), 0, *(arg1 + 0x10), zmm0, 0, 0, 0, 
    &var_158, &var_148, &var_168, &var_138)
bool cond:0 = *(arg1 + 0x68) == 0
int64_t var_d8 = *(arg1 + 0x28)
int64_t var_d0 = *(arg1 + 0x30)
int32_t var_c8 = *(arg1 + 0x38)
int64_t var_c0 = *(arg1 + 0x40)
int64_t var_b8 = *(arg1 + 0x48)
int64_t var_b0 = *(arg1 + 0x50)
int64_t var_a8 = *(arg1 + 0x58)
int32_t var_a0 = *(arg1 + 0x60)

if (not(cond:0))
    sub_1410b7640(&var_d8, arg4, (*U"1111")[sx.q(*(*(arg1 + 8) + 8))], 0, zmm1_1, zmm2)

int64_t arg_8 = sub_141261c60(arg2)
int32_t rax_12 = sub_141261c10(arg2, arg4, &arg_8)
int32_t rax_13 = sub_141261bd0(arg2, arg4, &arg_8)
void* rdx_4 = *(arg1 + 0x18)
char var_1b0 = 0
var_1b8.d = arg7
int128_t var_f8
__builtin_memset(&var_f8, 0, 0x18)
sub_141458e70(&var_f8, rdx_4, arg6, arg2, 0, 0)
int64_t rax_14 = sub_141260e50(var_168.q, var_138.q)
zmm1_1.o = var_158
int128_t* var_190
var_190.d = rax_13
int128_t var_98 = var_168
int128_t* var_198
var_198.d = rax_12
var_1a8.q = &var_d8
int128_t var_88 = zmm1_1.o
zmm1_1.o = var_138
int128_t var_78 = var_148
int128_t var_68 = zmm1_1.o
int128_t var_118
zmm1_1.o = var_118
int128_t var_58
__builtin_memset(&var_58, 0, 0x30)
var_1b0.q = arg4
var_1b8.q = arg5
return sub_1410731c0(arg1, arg2, arg3, arg6, nullptr, var_1b0, var_1a8, &var_98, var_198.d, 
    var_190.d, rax_14, 0, &var_f8)
