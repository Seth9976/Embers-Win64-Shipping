// 函数: sub_1408ed190
// 地址: 0x1408ed190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax
uint128_t zmm0
rax, zmm0 = sub_141a6e000()
void* rax_1 = sub_140d226f0(arg1, rax)
void* rcx_1 = *(arg1 + 0xe0)
int64_t rbx = *(rax_1 + 0x108)

if (rcx_1 == 0)
    zmm0 = zx.o(0)
else
    zmm0 = sub_1408df1b0(rcx_1, zmm0)

int32_t arg_8
sub_1408ec3b0(&arg_8, zmm0, rbx)
int64_t rax_2 = *(arg1 + 0x90)
int128_t zmm0_1
zmm0_1.d = arg3.d f+ 0.5f
uint32_t rcx_4 = (rax_2 u>> 0x20).d

if (rax_2.b != 1)
    rcx_4 += 1

uint32_t rax_3

if (rax_2.b != 1)
    rax_3 = (rax_2 u>> 0x20).d + 1
else
    rax_3 = (rax_2 u>> 0x20).d

uint32_t var_14 = rax_3
char var_10 = 0
int32_t var_c = rcx_4 + 1 + int.d(zmm0_1.d) + arg_8
*arg2 = 1.o
arg2[1].b = 1
return arg2
