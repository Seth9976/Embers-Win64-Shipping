// 函数: sub_14138c960
// 地址: 0x14138c960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax = sub_14081d830(0x80, *(arg1 + 8), 1, 0)
int32_t* rbx = rax

if (rax == 0)
    rbx = nullptr
else
    *(rax + 0x18) = 0
    __builtin_memset(&rax[0xa], 0, 0x50)

memset(rbx, 0, 0x80)
*rbx = *arg4
rbx[1] = arg4[1]
rbx[2] = arg4[2]
rbx[3] = arg4[3]
rbx[4] = arg4[4]
sub_1405d16e0(&rbx[6], *(arg4 + 0xf0))
int32_t rax_6 = 0
int16_t var_9c = 0
*(rbx + 0x20) = *(arg4 + 0x40)
*(rbx + 0x30) = *(arg4 + 0x50)
*(rbx + 0x40) = *(arg4 + 0x60)
*(rbx + 0x50) = *(arg4 + 0x70)
*(rbx + 0x60) = *(arg4 + 0x80)

if ((*(arg3 + 0x38) & 0x100) != 0)
    rax_6 = 0x1c

int32_t var_a0 = rax_6
void*** rax_7
int512_t zmm6
rax_7, zmm6 = sub_14081d830(0x28, *(arg1 + 8), 1, 0)

if (rax_7 == 0)
    rax_7 = nullptr
else
    rax_7[1] = *(arg3 + 8)
    *rax_7 = &data_142f285c0
    rax_7[2] = 0
    *(rax_7 + 0x18) = arg3.o

*(rbx + 0x70) = rax_7
int64_t rcx_4
int32_t r9

if (data_143f0f222 != 0 && data_1439c7a40 s>= 0x20)
    rcx_4 = sx.q(sub_1422e5a30(arg2))
    r9 = 1

if (data_143f0f222 == 0 || data_1439c7a40 s< 0x20
        || ((*(&data_143f025fc + rcx_4 * 0x14) u>> 0x1d).b & 1) == 0)
    r9 = 0

int128_t var_98
char rcx_8 = sub_1419a2ec0(*(arg2 + 0x5150), &var_98, &data_143ec5990, r9)
int128_t zmm7 = var_98
zmm6.o = zx.o(0)
void* var_a8
var_a8.o = sub_14139e040(rcx_8)
char rcx_10 = sub_141998c50(zmm7.q, &data_143ec7680, rbx)
var_a8:4.d = 1
var_a8.d = (arg4[3] * arg4[2] + 0x3ff) u>> 0xa
int128_t var_88 = sub_14139e040(rcx_10)
sub_141998c50(zmm7.q, &data_143ec7680, rbx)
int32_t var_58 = 1
void* var_60 = var_a8
void*** rax_14
char rcx_12
rax_14, rcx_12 = sub_14081d830(0x60, *(arg1 + 8), 1, 0)
void*** rsi_1 = rax_14

if (rax_14 == 0)
    rsi_1 = nullptr
else
    sub_14139e040(rcx_12)
    var_a0.q = &data_143ec76b0
    var_88 = rbx.o
    void arg_8
    sub_141992bd0(rsi_1, &arg_8, &var_88, 2)
    *rsi_1 = &data_142f6e310
    *(rsi_1 + 0x38) = rbx.o
    *(rsi_1 + 0x48) = zmm7
    rsi_1[0xb] = var_58.q

return sub_1419968d0(arg1, rsi_1)
