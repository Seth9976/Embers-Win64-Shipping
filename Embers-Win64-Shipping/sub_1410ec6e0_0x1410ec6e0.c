// 函数: sub_1410ec6e0
// 地址: 0x1410ec6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg2 + 0x80)
uint64_t rdx = zx.q(*(arg1 + 0x10))
int64_t arg_8 = 0
int64_t* rax_1 = (*(*rcx + 0x40))(rcx, rdx, &arg_8)
int64_t r12 = arg_8

if (r12 == 0)
    r12 = *(arg2 + 0x80)

int64_t arg_10 = sub_141261c60(arg2)
int32_t rax_3 = sub_141261c10(arg2, rax_1, &arg_10)
int32_t rax_4 = sub_141261bd0(arg2, rax_1, &arg_10)
int64_t* rbx = *(arg2 + 0x78)
int64_t rdx_3 = *rbx
char var_1b0 = 1
int32_t var_1b8 = 0
void* var_140
void** rax_6
int512_t zmm0
rax_6, zmm0 = sub_142127800(rax_1, &var_140, &data_143e518b0, (*(rdx_3 + 0x40))(rbx, rdx_3), arg5)
void* rdi_1 = *rax_6
int64_t var_160 = rax_6[1]
char var_1b0_1 = 1
int32_t var_1b8_1 = 0
void** rax_10 = sub_142127800(rax_1, &var_140, &data_143e519c0, (*(*rbx + 0x40))(rbx), zmm0)
void* rdx_6 = *(arg1 + 0x18)
char var_1b0_2 = 1
int64_t var_160_1 = rax_10[1]
int128_t zmm6 = (*rax_10).o
int32_t var_1b8_2 = 0xffffffff
int128_t var_150 = zx.o(0)
sub_141458e70(&var_150, rdx_6, arg4, arg2, 0xffffffff, 1)
int64_t rax_12 = sub_141260e50(rdi_1, 0)
int128_t var_128 = rdi_1.o
var_1b0_2.q = rax_1
var_1b8_2.q = r12
int128_t var_118
__builtin_memset(&var_118, 0, 0x30)
int128_t var_e8 = zmm6
int128_t var_d8
__builtin_memset(&var_d8, 0, 0x20)
return sub_1410e5330(arg1, arg2, arg3, arg4, 0xffffffff, 1, arg1 + 0x28, &var_128, rax_3, rax_4, 
    rax_12, 0, &var_150)
