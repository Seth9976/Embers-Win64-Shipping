// 函数: sub_1411cfa80
// 地址: 0x1411cfa80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_a0 = 0x309
int32_t var_a4 = 1
void*** result_1 = sub_14081d830(0x48, *(arg1 + 8), 1, 0)
void*** result = result_1

if (result_1 == 0)
    result = nullptr
else
    result[2] = 0
    result[1] = u"HairVisibilityIndirectArgBuffer"
    result[3].b = 0
    *(result + 0x1c) = 0
    result[4] = 0
    result[5].w = 0x200
    *result = &data_142f285d0
    *(result + 0x30) = 0xc.o
    result[8] = 0

int32_t* rax = sub_14081d830(0x20, *(arg1 + 8), 1, 0)
*(rax + 0x10) = 0
*(rax + 0x18) = 0
*rax = arg3
rax[1] = arg4
*(rax + 8) = arg5
int32_t rax_2 = 0

if ((result[7].d & 0x100) != 0)
    rax_2 = 0x1c

int32_t var_a8
var_a8.q = result
var_a0:4.w = 0
var_a0.d = rax_2
void*** rax_3
int512_t zmm6
rax_3, zmm6 = sub_14081d830(0x28, *(arg1 + 8), 1, 0)
void*** rcx = rax_3

if (rax_3 == 0)
    rcx = nullptr
else
    rcx[1] = result[1]
    *rcx = &data_142f285c0
    rcx[2] = 0
    *(rcx + 0x18) = var_a8.o

*(rax + 0x10) = rcx
int128_t var_98
char rcx_2 = sub_1419a2ec0(*(arg2 + 0x5150), &var_98, &data_143e77ac0, 0)
int128_t zmm7 = var_98
zmm6.o = zx.o(0)
int32_t var_a4_1 = 1
int128_t var_88 = sub_1411e15d0(rcx_2)
sub_141998c50(zmm7.q, &data_143e7d540, rax)
int32_t var_58 = 1
int64_t var_60 = 1.q
void*** rax_5
char rcx_4
rax_5, rcx_4 = sub_14081d830(0x60, *(arg1 + 8), 1, 0)
void*** rdi_1 = rax_5

if (rax_5 == 0)
    rdi_1 = nullptr
else
    int32_t var_a8_1
    var_a8_1.q = rax
    sub_1411e15d0(rcx_4)
    void* var_a0_1 = &data_143e7d570
    var_88 = var_a8_1.o
    void arg_18
    sub_141992bd0(rdi_1, &arg_18, &var_88, 2)
    *rdi_1 = &data_142f38a48
    *(rdi_1 + 0x38) = rax.o
    *(rdi_1 + 0x48) = zmm7
    rdi_1[0xb] = var_58.q

sub_1419968d0(arg1, rdi_1)
return result
