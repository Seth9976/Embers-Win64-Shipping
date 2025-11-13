// 函数: sub_1411e59d0
// 地址: 0x1411e59d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_b0 = 0x309
int32_t var_b4 = 1
void*** result_3 = sub_14081d830(0x48, *(arg1 + 8), 1, 0)
void*** result = result_3

if (result_3 == 0)
    result = nullptr
else
    result[2] = 0
    result[1] = u"VirtualVoxelClearIndirectArgsBuffer"
    result[3].b = 0
    *(result + 0x1c) = 0
    result[4] = 0
    result[5].w = 0x200
    *result = &data_142f285d0
    *(result + 0x30) = 0xc.o
    result[8] = 0

void*** rax = sub_141193740(arg1, &arg3[0x32], u"HairPageIndexGlobalCounter", 0)
void**** rax_1 = sub_14081d830(0x20, *(arg1 + 8), 1, 0)
void**** rdi = rax_1

if (rax_1 == 0)
    rdi = nullptr
else
    *rax_1 = nullptr
    rax_1[1] = 0

int32_t var_b8
var_b8.q = result
__builtin_memset(rdi, 0, 0x20)
rdi[2].d = arg3[8]
int32_t rax_3 = 0

if ((result[7].d & 0x100) != 0)
    rax_3 = 0x1c

var_b0:4.w = 0
var_b0.d = rax_3
void*** rax_4 = sub_14081d830(0x28, *(arg1 + 8), 1, 0)
void*** rcx_1 = rax_4

if (rax_4 == 0)
    rcx_1 = nullptr
else
    rcx_1[1] = result[1]
    *rcx_1 = &data_142f285c0
    rcx_1[2] = 0
    *(rcx_1 + 0x18) = var_b8.o

rdi[1] = rcx_1
void*** rax_6
int512_t zmm6
rax_6, zmm6 = sub_141188b30(arg1, rax, 0x1c)
*rdi = rax_6
int128_t var_a8
char rcx_4 = sub_1419a2ec0(*(arg2 + 0x5150), &var_a8, &data_143e78dc0, 0)
int128_t zmm7 = var_a8
zmm6.o = zx.o(0)
int32_t var_b4_1 = 1
int128_t var_98 = sub_1411e4820(rcx_4)
sub_141998c50(zmm7.q, &data_143e7e3d0, rdi)
int32_t var_68 = 1
int64_t var_70 = 1.q
void*** rax_7
char rcx_6
rax_7, rcx_6 = sub_14081d830(0x60, *(arg1 + 8), 1, 0)
void*** r15_1 = rax_7
int32_t var_b8_1
void arg_8

if (rax_7 == 0)
    r15_1 = nullptr
else
    var_b8_1.q = rdi
    sub_1411e4820(rcx_6)
    var_b0 = &data_143e7e400
    var_98 = var_b8_1.o
    sub_141992bd0(r15_1, &arg_8, &var_98, 2)
    *r15_1 = &data_142f38b38
    *(r15_1 + 0x38) = rdi.o
    *(r15_1 + 0x48) = zmm7
    r15_1[0xb] = var_68.q

sub_1419968d0(arg1, r15_1)
void*** rax_8 = sub_1410fccd0(arg1, &arg3[0x22], u"HairVoxelPageTexture", 0)
sub_141193740(arg1, &arg3[0x30], u"HairVoxelIndirectDispatchArgs", 0)
int32_t* rax_9 = sub_14081d830(0x80, *(arg1 + 8), 1, 0)
int32_t* rdi_1 = rax_9

if (rax_9 == 0)
    rdi_1 = nullptr
else
    __builtin_memset(&rax_9[0x10], 0, 0x28)
    *(rax_9 + 0x70) = 0
    *(rax_9 + 0x78) = 0

memset(rdi_1, 0, 0x80)
*rdi_1 = *arg3
rdi_1[1] = arg3[1]
rdi_1[2] = arg3[2]
rdi_1[3] = arg3[3]
rdi_1[4] = arg3[4]
rdi_1[5] = arg3[5]
rdi_1[6] = arg3[6]
rdi_1[7] = arg3[7]
rdi_1[8] = arg3[8]
rdi_1[9] = arg3[9]
rdi_1[0xa] = arg3[0xa]
rdi_1[0xb] = arg3[0xb]
rdi_1[0xc] = arg3[0xc]
rdi_1[0xd] = arg3[0xd]
rdi_1[0xe] = arg3[0xe]
rdi_1[0xf] = arg3[0xf]
*(rdi_1 + 0x40) = *(arg3 + 0x40)
*(rdi_1 + 0x48) = *(arg3 + 0x48)
*(rdi_1 + 0x50) = *(arg3 + 0x50)
*(rdi_1 + 0x58) = *(arg3 + 0x58)
*(rdi_1 + 0x60) = *(arg3 + 0x60)
var_b8_1.q = rax_8
var_b0.w = 0
void*** rax_31
int512_t zmm6_2
rax_31, zmm6_2 = sub_14081d830(0x28, *(arg1 + 8), 1, 0)
void*** rcx_12 = rax_31

if (rax_31 == 0)
    rcx_12 = nullptr
else
    rcx_12[1] = rax_8[1]
    *rcx_12 = &data_142f285c0
    rcx_12[2] = 0
    *(rcx_12 + 0x18) = var_b8_1.o

*(rdi_1 + 0x70) = rcx_12
*(rdi_1 + 0x78) = result
char rcx_14 = sub_1419a2ec0(*(arg2 + 0x5150), &var_98, &data_143e78ec0, 0)
zmm6_2.o = var_98
void*** result_2
var_b8_1.q = &result_2
int64_t __saved_rbx
int64_t* var_b0_1 = &__saved_rbx
result_2 = result
int128_t zmm6_3 = sub_1411e4990(rcx_14)
var_a8 = var_b8_1.o
sub_141998c50(zmm6_3.q, &data_143e7e470, rdi_1)
void*** result_1 = result
int32_t var_68_1 = 0
void*** rax_33
char rcx_16
rax_33, rcx_16 = sub_14081d830(0x60, *(arg1 + 8), 1, 0)
void*** r14_1 = rax_33

if (rax_33 == 0)
    r14_1 = nullptr
else
    var_b8_1.q = rdi_1
    sub_1411e4990(rcx_16)
    void* var_b0_2 = &data_143e7e4a0
    var_98 = var_b8_1.o
    sub_141992bd0(r14_1, &arg_8, &var_98, 2)
    *r14_1 = &data_142f38b48
    *(r14_1 + 0x38) = rdi_1.o
    *(r14_1 + 0x48) = zmm6_3
    r14_1[0xb] = var_68_1.q

sub_1419968d0(arg1, r14_1)
return result
