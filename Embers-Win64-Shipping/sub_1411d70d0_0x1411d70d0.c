// 函数: sub_1411d70d0
// 地址: 0x1411d70d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_90
__builtin_memset(&var_90, 0, 0x48)
uint128_t var_98
sub_14142a030(arg1, &var_98)
void*** rax = sub_1410fccd0(arg1, &arg3[0x22], u"HairVoxelPageTexture", 0)
void*** rax_1 = sub_141193740(arg1, &arg3[0x30], u"HairVoxelIndirectDispatchArgs", 0)
uint128_t* rax_2 = sub_14081d830(0x100, arg1[1], 1, 0)
uint128_t* rdi = rax_2

if (rax_2 == 0)
    rdi = rax_2
else
    __builtin_memset(rdi + 8, 0, 0x48)
    __builtin_memset(&rdi[9], 0, 0x28)
    __builtin_memset(&rdi[0xe], 0, 0x20)

memset(rdi, 0, 0x100)
sub_1405d16e0(rdi + 0xf8, *(arg2 + 0x10))
rdi[5].d = *arg3
*(rdi + 0x54) = arg3[1]
*(rdi + 0x58) = arg3[2]
*(rdi + 0x5c) = arg3[3]
rdi[6].d = arg3[4]
*(rdi + 0x64) = arg3[5]
*(rdi + 0x68) = arg3[6]
*(rdi + 0x6c) = arg3[7]
rdi[7].d = arg3[8]
*(rdi + 0x74) = arg3[9]
*(rdi + 0x78) = arg3[0xa]
*(rdi + 0x7c) = arg3[0xb]
rdi[8].d = arg3[0xc]
*(rdi + 0x84) = arg3[0xd]
*(rdi + 0x88) = arg3[0xe]
*(rdi + 0x8c) = arg3[0xf]
rdi[9].q = *(arg3 + 0x40)
*(rdi + 0x98) = *(arg3 + 0x48)
rdi[0xa].q = *(arg3 + 0x50)
*(rdi + 0xa8) = *(arg3 + 0x58)
rdi[0xb].q = *(arg3 + 0x60)
int32_t rax_24 = data_1439b6134

if (rax_24 s<= 0)
    rax_24 = 0

*(rdi + 0xd8) = rax_24
int32_t rax_25 = data_1439b6138

if (rax_25 s<= 0)
    rax_25 = 0

*(rdi + 0xdc) = rax_25
int64_t rcx_4 = *(var_90 + 0x44)
rdi[0xd].d = _mm_cvtepi32_ps(zx.o(rcx_4.d)).d
*(rdi + 0xd4) = _mm_cvtepi32_ps(zx.o((rcx_4 u>> 0x20).d)).d
rdi[0xe].q = var_90
*rdi = var_98
__builtin_memset(&rdi[1], 0, 0x40)
*(rdi + 0xcc) = *(arg4 + 0xcc)
int16_t var_e0 = 0
void*** rax_29
int512_t zmm6
rax_29, zmm6 = sub_14081d830(0x28, arg1[1], 1, 0)

if (rax_29 == 0)
    rax_29 = nullptr
else
    rax_29[1] = rax[1]
    *rax_29 = &data_142f285c0
    rax_29[2] = 0
    *(rax_29 + 0x18) = rax.o

rdi[0xf].q = rax_29
rdi[0xc].d = *(arg4 + 0x18)
*(rdi + 0xc4) = *(arg4 + 0x1c)
*(rdi + 0xc8) = *(arg4 + 0x20)
*(rdi + 0xe8) = rax_1
int128_t var_d8
char rcx_8 = sub_1419a2ec0(*(arg2 + 0x5150), &var_d8, &data_143e784c0, 0)
uint64_t rax_33 = zx.q(*(rdi + 0xcc))
zmm6.o = var_d8
void*** arg_10 = rax_1
int64_t __saved_rbx
var_e0.q = &__saved_rbx
int128_t zmm6_1 = sub_1411e3e10(rcx_8)
void**** var_e8_1
var_e8_1.o = (&arg_10).o
sub_141998c50(zmm6_1.q, &data_143e7ddc0, rdi)
void*** var_b0 = rax_1
void*** rax_34
char rcx_10
rax_34, rcx_10 = sub_14081d830(0x60, arg1[1], 1, 0)
void*** rbx_3 = rax_34

if (rax_34 == 0)
    rbx_3 = rax_34
else
    sub_1411e3e10(rcx_10)
    var_e0.q = &data_143e7ddf0
    var_d8 = rdi.o
    void arg_8
    sub_141992bd0(rbx_3, &arg_8, &var_d8, 2)
    *rbx_3 = &data_142f38a98
    *(rbx_3 + 0x38) = rdi.o
    *(rbx_3 + 0x48) = zmm6_1
    rbx_3[0xb] = ((rax_33 * 3).d << 2).q

return sub_1419968d0(arg1, rbx_3)
