// 函数: sub_1413ab4b0
// 地址: 0x1413ab4b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int32_t r14_1 = 5

if (arg3 u<= 5)
    r14_1 = arg3

int64_t* rax_1 = sub_14081d830(0x10, *(arg1 + 8), 1, 0)
int64_t* rbx_1 = rax_1

if (rax_1 == 0)
    rbx_1 = nullptr
else
    rax_1[1] = 0

int32_t rax_2 = 0
*rbx_1 = 0
rbx_1[1] = 0
*rbx_1 = arg4
int16_t var_9c_1 = 0

if ((*(arg5 + 0x38) & 0x100) != 0)
    rax_2 = 0x1c

int32_t var_a0_1 = rax_2
void*** rax_3
int512_t zmm6_1
rax_3, zmm6_1 = sub_14081d830(0x28, *(arg1 + 8), 1, 0)

if (rax_3 != 0)
    rax_3[1] = *(arg5 + 8)
    *rax_3 = &data_142f285c0
    rax_3[2] = 0
    *(rax_3 + 0x18) = arg5.o

rbx_1[1] = rax_3
int32_t rax_6
int64_t rcx_2

if (data_143f0f222 != 0 && data_1439c7a40 s>= 0x20)
    rcx_2 = sx.q(sub_1422e5a30(arg2))
    rax_6 = 4

if (data_143f0f222 == 0 || data_1439c7a40 s< 0x20
        || ((*(&data_143f025fc + rcx_2 * 0x14) u>> 0x1d).b & 1) == 0)
    rax_6 = -1

int32_t r12_1 = 0x100 << (r14_1.b - 1)
int128_t var_98
char rcx_7 = sub_1419a2ec0(*(arg2 + 0x5150), &var_98, &data_143ec5880, r14_1 + rax_6)
int128_t zmm7 = var_98
void* var_a8_1
var_a8_1:4.d = 1
zmm6_1.o = zx.o(0)
var_a8_1.d = divu.dp.d(0:(arg4 - 1 + r12_1), r12_1)
int128_t var_88 = sub_14139e320(rcx_7)
sub_141998c50(zmm7.q, &data_143ec7570, rbx_1)
int32_t var_58_1 = 1
void* var_60_1 = var_a8_1
void*** rax_10
char rcx_9
rax_10, rcx_9 = sub_14081d830(0x60, *(arg1 + 8), 1, 0)
void*** rdi_2 = rax_10

if (rax_10 == 0)
    rdi_2 = nullptr
else
    sub_14139e320(rcx_9)
    var_a0_1.q = &data_143ec75a0
    var_88 = rbx_1.o
    void arg_18
    sub_141992bd0(rdi_2, &arg_18, &var_88, 2)
    *rdi_2 = &data_142f6e300
    *(rdi_2 + 0x38) = rbx_1.o
    *(rdi_2 + 0x48) = zmm7
    rdi_2[0xb] = var_58_1.q

sub_1419968d0(arg1, rdi_2)
