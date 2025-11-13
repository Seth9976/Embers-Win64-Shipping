// 函数: sub_141181fc0
// 地址: 0x141181fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg3 + 0x10) == 0)
    return &__return_addr

int64_t var_a0
__builtin_memset(&var_a0, 0, 0x48)
uint128_t var_a8
sub_14142a030(arg1, &var_a8)
void*** arg_18 = sub_141193740(arg1, arg3 + 0x128, u"External", 0)
void*** rax_1 = sub_141193740(arg1, arg3 + 0x30, u"External", 0)
int64_t r12_1 = *(*arg4 + 0x44)
uint128_t* rax_2 = sub_14081d830(0xb0, arg1[1], 1, 0)
uint128_t* rbx_1 = rax_2

if (rax_2 == 0)
    rbx_1 = nullptr
else
    __builtin_memset(rax_2 + 8, 0, 0x48)
    __builtin_memset(&rax_2[6], 0, 0x20)
    __builtin_memset(&rax_2[9], 0, 0x20)

memset(rbx_1, 0, 0xb0)
sub_1405d16e0(&rbx_1[9], *(arg2 + 0x10))
void*** rdx_5 = arg_18
rbx_1[8].d = _mm_cvtepi32_ps(zx.o(r12_1.d)).d
*(rbx_1 + 0x84) = _mm_cvtepi32_ps(zx.o((r12_1 u>> 0x20).d)).d
*(rbx_1 + 0x88) = *(arg3 + 0x10)
*(rbx_1 + 0x8c) = *(arg3 + 0x120)
*rbx_1 = var_a8
__builtin_memset(&rbx_1[1], 0, 0x40)
*(rbx_1 + 0x98) = sub_141188b30(arg1, rdx_5, 0x1d)
int64_t var_f0_1 = 1

if ((rax_1[7].d & 0x100) != 0)
    var_f0_1.d = 4
    var_f0_1:4.d = 0x1c

void*** rax_6 = sub_14081d830(0x28, arg1[1], 1, 0)

if (rax_6 == 0)
    rax_6 = nullptr
else
    rax_6[1] = rax_1[1]
    *rax_6 = &data_142f285c0
    rax_6[2] = 0
    *(rax_6 + 0x18) = rax_1.o

rbx_1[0xa].q = rax_6
sub_14119c160(arg1, arg2 + 0x51b0, &rbx_1[5])
sub_1414610e0(arg2, &rbx_1[7])
void* rdi_4 = *arg4
var_f0_1.w = 0
void*** rax_7
int512_t zmm6_1
rax_7, zmm6_1 = sub_14081d830(0x28, arg1[1], 1, 0)

if (rax_7 == 0)
    rax_7 = nullptr
else
    rax_7[1] = *(rdi_4 + 8)
    *rax_7 = &data_142f285c0
    rax_7[2] = 0
    *(rax_7 + 0x18) = rdi_4.o

*(rbx_1 + 0xa8) = rax_7
int128_t var_58
sub_1419a2ec0(*(arg2 + 0x5150), &var_58, &data_143e6c260, 0)
void* rcx_11 = *arg4
zmm6_1.o = zx.o(0)
int128_t zmm7 = var_58
int32_t temp0_3
int32_t temp1_1
temp0_3:temp1_1 = sx.q(*(rcx_11 + 0x44) + 7)
void* var_f8_3
var_f8_3.d = (temp1_1 + (temp0_3 & 7)) s>> 3
int32_t temp2_1
int32_t temp3_1
temp2_1:temp3_1 = sx.q(*(rcx_11 + 0x48) + 7)
var_f8_3:4.d = (temp3_1 + (temp2_1 & 7)) s>> 3
int128_t var_e8 = sub_14118d330(rcx_11.b)
sub_141998c50(zmm7.q, &data_143e73510, rbx_1)
int32_t var_b8_1 = 1
void* var_c0_1 = var_f8_3
void*** rax_18
char rcx_13
rax_18, rcx_13 = sub_14081d830(0x60, arg1[1], 1, 0)
void*** rdi_5 = rax_18

if (rax_18 == 0)
    rdi_5 = nullptr
else
    sub_14118d330(rcx_13)
    void* var_f0_2 = &data_143e73540
    var_e8 = rbx_1.o
    sub_141992bd0(rdi_5, &arg_18, &var_e8, 2)
    *rdi_5 = &data_142f2ca58
    *(rdi_5 + 0x38) = rbx_1.o
    *(rdi_5 + 0x48) = zmm7
    rdi_5[0xb] = var_b8_1.q

return sub_1419968d0(arg1, rdi_5)
