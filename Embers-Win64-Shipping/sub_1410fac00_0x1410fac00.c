// 函数: sub_1410fac00
// 地址: 0x1410fac00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg2 + 0x78)
void* rax_1 = (*(*rcx + 0x40))(rcx)
int128_t zmm8 = zx.o(0)
int128_t zmm9 = zx.o(0)
int64_t rdx = *arg8
int32_t rax_2 = (*(rdx + 0x168))(arg8, rdx)
void* var_128

if (sub_1419803d0((*U"1111")[sx.q(*(arg1 + 0x10))]) != 0 && (*(rax_1 + 0x60))() != 0 && rax_2 != 0)
    char var_180_1 = 1
    int32_t var_188_1 = 0
    void** rax_5
    int512_t zmm0
    rax_5, zmm0 = sub_142127800(arg8, &var_128, &data_143e51470, rax_1, arg5)
    char var_180_2 = 1
    int32_t var_188_2 = 0
    int64_t var_130_1 = rax_5[1]
    zmm9 = (*rax_5).o
    void** rax_7
    rax_7, arg5 = sub_142127800(arg8, &var_128, &data_143e51360, rax_1, zmm0)
    int64_t var_130_2 = rax_7[1]
    zmm8 = (*rax_7).o

char var_180_3 = 1
int32_t var_188_3 = 0
void** rax_9
int512_t zmm0_1
rax_9, zmm0_1 = sub_142127800(arg8, &var_128, &data_143e51250, rax_1, arg5)
void** rdx_4 = &var_128
char var_180_4 = 1
int32_t var_188_4 = 0
void* r14 = *rax_9
int64_t var_130_3 = rax_9[1]
void* rsi_1
int128_t zmm6

if (*(arg1 + 0x68) != 5)
    void** rax_12 = sub_142127800(arg8, rdx_4, &data_143e51580, rax_1, zmm0_1)
    int64_t var_130_4 = rax_12[1]
    zmm6 = (*rax_12).o
    rsi_1 = zmm6.q
else
    void** rax_11 = sub_142127800(arg8, rdx_4, &data_143e51690, rax_1, zmm0_1)
    rsi_1 = *rax_11
    int128_t var_d8
    var_d8.q = rsi_1
    var_d8:8.q = rax_11[1]
    zmm6 = var_d8

void* rdx_5 = *(arg1 + 0x18)
char var_180_5 = 1
int128_t var_118 = zx.o(0)
sub_141458e70(&var_118, rdx_5, arg6, arg2, arg4, 1)
int64_t rax_14 = sub_141260e50(r14, rsi_1)
var_180_5.q = arg8
int32_t var_188_5
var_188_5.q = arg7
int128_t var_108 = r14.o
int128_t var_f8 = zmm8
int128_t var_e8 = zmm9
int128_t var_d8_2 = zmm6
int128_t var_c8
__builtin_memset(&var_c8, 0, 0x30)
return sub_1410e6100(arg1, arg2, arg3, arg6, var_188_5, 1, arg1 + 0x28, &var_108, arg9, arg10, 
    rax_14, 0, &var_118)
