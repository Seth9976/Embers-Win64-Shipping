// 函数: sub_141135720
// 地址: 0x141135720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg2 + 0x78)
int128_t zmm8 = zx.o(0)
int64_t rbx = sx.q(*(arg1 + 0x10))
int128_t zmm9 = zx.o(0)
void* rax_1 = (*(*rcx + 0x40))(rcx)
int64_t rdx = *arg8
int32_t rax_2 = (*(rdx + 0x168))(arg8, rdx)
void* var_128

if (sub_1419803d0((*U"1111")[rbx]) != 0 && (*(rax_1 + 0x60))() != 0 && rax_2 != 0)
    char var_180_1 = 1
    int32_t var_188_1 = 0
    void** rax_5
    int512_t zmm0
    rax_5, zmm0 = sub_142127800(arg8, &var_128, &data_143e57f50, rax_1, arg5)
    char var_180_2 = 1
    int32_t var_188_2 = 0
    int64_t var_130_1 = rax_5[1]
    zmm9 = (*rax_5).o
    void** rax_7
    rax_7, arg5 = sub_142127800(arg8, &var_128, &data_143e57e50, rax_1, zmm0)
    int64_t var_130_2 = rax_7[1]
    zmm8 = (*rax_7).o

char var_180_3 = 1
int32_t var_188_3 = 0
void** rax_9
int512_t zmm0_1
rax_9, zmm0_1 = sub_142127800(arg8, &var_128, &data_143e57d50, rax_1, arg5)
char var_180_4 = 1
int32_t var_188_4 = 0
void* rdi_1 = *rax_9
int64_t var_130_3 = rax_9[1]
void** rax_11 = sub_142127800(arg8, &var_128, &data_143e58050, rax_1, zmm0_1)
void* rdx_5 = *(arg1 + 0x18)
char var_180_5 = 0
void* rbx_1 = *rax_11
int64_t var_130_4 = rax_11[1]
int128_t var_118 = zx.o(0)
sub_141458e70(&var_118, rdx_5, arg4, arg2, arg6, 0)
int64_t rax_14 = sub_141260e50(rdi_1, rbx_1)
var_180_5.q = arg8
int32_t var_188_5
var_188_5.q = arg7
int128_t var_108 = rdi_1.o
int128_t var_f8 = zmm8
int128_t var_e8 = zmm9
int128_t var_d8 = rbx_1.o
int128_t var_c8
__builtin_memset(&var_c8, 0, 0x30)
return sub_1410e6100(arg1, arg2, arg3, arg4, var_188_5, nullptr, arg1 + 0x28, &var_108, arg9, 
    arg10, rax_14, 0, &var_118)
