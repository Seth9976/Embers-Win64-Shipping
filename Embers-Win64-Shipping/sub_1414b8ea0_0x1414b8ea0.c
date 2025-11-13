// 函数: sub_1414b8ea0
// 地址: 0x1414b8ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg2 + 0x78)
char var_1d0 = 1
int32_t var_1d8 = 0
void* var_118
void** rax_2
int512_t zmm0
rax_2, zmm0 = sub_142127800(arg8, &var_118, &data_143eeaec0, (*(*rbx + 0x40))(rbx), arg5)
void* r14 = *rax_2
int64_t var_180 = rax_2[1]
int64_t rax_4 = *rbx
void* var_188 = r14
int128_t zmm7 = var_188.o
char var_1d0_1 = 1
int32_t var_1d8_1 = 0
void** rax_6 = sub_142127800(arg8, &var_118, &data_143eeb220, (*(rax_4 + 0x40))(rbx), zmm0)
char var_1d0_2 = 0
void* rdi = *rax_6
void* rdx_2 = *(arg1 + 0x18)
int64_t var_180_1 = rax_6[1]
int64_t var_158 = *(arg1 + 0x28)
int64_t var_150 = *(arg1 + 0x30)
int32_t var_148 = *(arg1 + 0x38)
int64_t var_140 = *(arg1 + 0x40)
int64_t var_138 = *(arg1 + 0x48)
int64_t var_130 = *(arg1 + 0x50)
int64_t var_128 = *(arg1 + 0x58)
int32_t rax_15 = *(arg1 + 0x60)
var_188 = rdi
int128_t zmm6 = var_188.o
int32_t var_120 = rax_15
int128_t var_178 = zx.o(0)
sub_141458e70(&var_178, rdx_2, arg6, arg2, arg4, 0)
void* rbx_2 = *(arg1 + 0x68)
float* rax_17 = sub_1414cb980(*(*(rbx_2 + 0x600) + 8) + 0x80, &var_188, 9.99999994e-09f)
float var_168 = __maxss_xmmss_memss(__maxss_xmmss_memss(rax_17[1], *rax_17), rax_17[2]) * arg9
    / (*(rbx_2 + 0x164) f- *(rbx_2 + 0x168))
int64_t rax_18 = sub_141260e50(r14, rdi)
var_1d0_2.q = arg8
int32_t var_1d8_2
var_1d8_2.q = arg7
int128_t var_108 = zmm7
int128_t var_f8
__builtin_memset(&var_f8, 0, 0x20)
int128_t var_d8 = zmm6
int128_t var_c8
__builtin_memset(&var_c8, 0, 0x30)
return sub_1414b7640(arg1, arg2, arg3, arg6, var_1d8_2, nullptr, &var_158, &var_108, arg10, arg11, 
    rax_18, 0, &var_178)
