// 函数: sub_14128d190
// 地址: 0x14128d190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg2 + 0x78)
char var_170 = 1
int32_t var_178 = 0
void* var_108
void** rax_2
int512_t zmm0
rax_2, zmm0 = sub_142127800(arg4, &var_108, &data_143e8f350, (*(*rbx + 0x40))(rbx), arg5)
int64_t var_120 = rax_2[1]
int128_t zmm11 = (*rax_2).o
char var_170_1 = 1
int32_t var_178_1 = 0
void** rax_6
int128_t zmm6_1
rax_6, zmm6_1 = sub_142127800(arg4, &var_108, &data_143e8f460, (*(*rbx + 0x40))(rbx), zmm0)
int64_t var_120_1 = rax_6[1]
int128_t zmm12 = (*rax_6).o
int128_t var_f8
sub_141299330(&var_f8, arg4)
int32_t rcx_6 = *(arg2 + 0x9c)
int32_t rbx_8 =
    (((rcx_6 u>> 0x10 & 0x20) | (rcx_6 & 0x40)) u>> 3 | (rcx_6 & 2)) u>> 1 | (rcx_6 & 1) << 3
(*(*arg4 + 0x28))(arg4)
int32_t rdi = rbx_8
int32_t rbp_1

if ((*(*arg4 + 0xb0))(arg4) != 0 || (not.b((rbx_8 u>> 2).b) & 1) == 0)
    rbx_8 = zx.d(rbx_8.b)
    rbp_1 = 1
else
    rbp_1 = 2

rbx_8.b &= 1
int32_t rdi_2

if ((*(*arg4 + 0x28))(arg4) != 0 || rbx_8.b != 0)
    rdi_2 = 0
else
    rdi_2 = (rdi u>> 3) + 1

void* rdx_4 = *(arg1 + 0x18)
char var_170_2 = 0
int128_t var_118 = zx.o(0)
sub_141458e70(&var_118, rdx_4, arg7, arg2, arg8, 0)
uint64_t rax_20 = sub_141091090(arg7, *(arg2 + 0x98))
var_f8 = zmm11
var_170_2.q = arg4
int32_t var_178_2
var_178_2.q = arg6
int128_t var_e8 = zmm6_1
int128_t var_d8 = zx.o(0)
int128_t var_c8 = zmm12
int128_t var_b8
__builtin_memset(&var_b8, 0, 0x30)
return sub_141250990(arg1, arg2, arg3, arg7, var_178_2, var_170_2, arg1 + 0x28, &var_f8, rbp_1, 
    rdi_2, rax_20, 0, &var_118)
