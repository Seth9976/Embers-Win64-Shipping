// 函数: sub_1411d65a0
// 地址: 0x1411d65a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg4 + 0x30)
int32_t var_9c = 2
int32_t var_a0 = 0x209
int32_t var_a4 = *(arg4 + 0x34)
void*** result_1 = sub_14081d830(0x48, *(arg1 + 8), 1, 0)
void*** result = result_1

if (result_1 == 0)
    result = nullptr
else
    result[2] = 0
    result[1] = u"HairCompactNodeData"
    result[3].b = 0
    *(result + 0x1c) = 0
    result[4] = 0
    result[5].w = 0x200
    *result = &data_142f285d0
    *(result + 0x30) = rax.o
    result[8] = 0

int32_t* rax_2 = sub_14081d830(0x20, *(arg1 + 8), 1, 0)
int32_t* rsi = rax_2

if (rax_2 == 0)
    rsi = nullptr
else
    __builtin_memset(&rax_2[2], 0, 0x18)

int32_t var_a8
var_a8.q = arg4
__builtin_memset(rsi, 0, 0x20)
*rsi = *(arg3 + 0x44)
rsi[1] = *(arg3 + 0x48)
*(rsi + 8) = arg3
var_a0.q = 1

if ((*(arg4 + 0x38) & 0x100) != 0)
    int32_t var_a0_1 = 4
    var_9c = 0x1c

void*** rax_5 = sub_14081d830(0x28, *(arg1 + 8), 1, 0)
void*** rcx = rax_5

if (rax_5 == 0)
    rcx = nullptr
else
    rcx[1] = *(arg4 + 8)
    *rcx = &data_142f285c0
    rcx[2] = 0
    *(rcx + 0x18) = var_a8.o

*(rsi + 0x10) = rcx
int32_t rax_7 = 0

if ((result[7].d & 0x100) != 0)
    rax_7 = 0x1c

var_a8.q = result
var_9c.w = 0
int32_t var_a0_2 = rax_7
void*** rax_8
int512_t zmm6
rax_8, zmm6 = sub_14081d830(0x28, *(arg1 + 8), 1, 0)
void*** rcx_1 = rax_8

if (rax_8 == 0)
    rcx_1 = nullptr
else
    rcx_1[1] = result[1]
    *rcx_1 = &data_142f285c0
    rcx_1[2] = 0
    *(rcx_1 + 0x18) = var_a8.o

*(rsi + 0x18) = rcx_1
int128_t var_98
char rcx_3 = sub_1419a2ec0(*(arg2 + 0x5150), &var_98, &data_143e77620, 0)
zmm6.o = zx.o(0)
int128_t zmm7 = var_98
uint32_t rax_12 = (*rsi + 7) u>> 3
uint32_t var_a4_1 = (rsi[1] + 3) u>> 2
int128_t var_88 = sub_1411e39c0(rcx_3)
sub_141998c50(zmm7.q, &data_143e7c130, rsi)
int32_t var_58 = 1
int64_t var_60 = rax_12.q
void*** rax_16
char rcx_5
rax_16, rcx_5 = sub_14081d830(0x60, *(arg1 + 8), 1, 0)
void*** r14_1 = rax_16

if (rax_16 == 0)
    r14_1 = nullptr
else
    uint32_t var_a8_1
    var_a8_1.q = rsi
    sub_1411e39c0(rcx_5)
    var_a0_2.q = &data_143e7c160
    var_88 = var_a8_1.o
    void arg_8
    sub_141992bd0(r14_1, &arg_8, &var_88, 2)
    *r14_1 = &data_142f38a18
    *(r14_1 + 0x38) = rsi.o
    *(r14_1 + 0x48) = zmm7
    r14_1[0xb] = var_58.q

sub_1419968d0(arg1, r14_1)
return result
