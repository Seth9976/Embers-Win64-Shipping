// 函数: sub_141136330
// 地址: 0x141136330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm0
zmm0.o = zx.o(0)
int512_t zmm1
zmm1.o = zx.o(0)
int128_t var_148 = zx.o(0)
int64_t* rcx = *(arg2 + 0x78)
int128_t var_138
__builtin_memset(&var_138, 0, 0x60)
char var_1b8 = 0
int128_t var_118
sub_14126cdb0(0, 0, arg4, (*(*rcx + 0x40))(zmm0, zmm1), 0, &var_148, &var_118)
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
    sub_141299330(&var_d8, arg4)

int64_t arg_8 = sub_141261c60(arg2)
int32_t rax_11 = sub_141261c10(arg2, arg4, &arg_8)
int32_t rax_12 = sub_141261bd0(arg2, arg4, &arg_8)
void* rdx_3 = *(arg1 + 0x18)
int128_t* var_1b0
var_1b0.b = 0
var_1b8.d = arg7
int128_t var_168
__builtin_memset(&var_168, 0, 0x18)
sub_141458e70(&var_168, rdx_3, arg6, arg2, 0, var_1b0.b)
int64_t rax_13 = sub_141260e50(var_148.q, var_118.q)
int128_t zmm1_1 = var_138
int128_t var_98 = var_148
int128_t var_88 = zmm1_1
int128_t var_128
int128_t var_78 = var_128
int128_t var_68 = var_118
int128_t var_58
__builtin_memset(&var_58, 0, 0x30)
var_1b8.q = arg5
return sub_141110750(arg1, arg2, arg3, arg6, nullptr, arg4, &var_d8, &var_98, rax_11, rax_12, 
    rax_13, 0, &var_168)
