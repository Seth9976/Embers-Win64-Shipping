// 函数: sub_141446eb0
// 地址: 0x141446eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm1 = *arg3
void* r10 = zmm1.q
uint64_t var_b8 = arg3[1].q
int32_t var_a8 = *(r10 + 0x44)
int32_t var_a4 = *(r10 + 0x48)
uint128_t temp0 = _mm_bsrli_si128(zmm1, 8)
int64_t rax_2 = _mm_bsrli_si128(zmm1, 8).q
int32_t var_a0 = temp0.d
zmm1 = *arg4
uint32_t var_9c = (rax_2 u>> 0x20).d
void* rcx = zmm1.q
int32_t rax_4 = var_b8.d
uint32_t var_94 = (var_b8 u>> 0x20).d
int32_t rax_7 = *(rcx + 0x44)
int64_t* rcx_1 = *(arg2 + 0x5150)
int32_t var_c4 = *(rcx + 0x48)
uint64_t var_d8 = arg4[1].q
uint32_t var_bc = (_mm_bsrli_si128(zmm1, 8).q u>> 0x20).d
var_b8.d = var_d8.d
var_b8:4.d = (var_d8 u>> 0x20).d
int32_t var_c0 = _mm_bsrli_si128(zmm1, 8).d
int128_t var_e8
sub_1419a2ec0(rcx_1, &var_e8, &data_143f10550, 0)
int128_t zmm7 = var_e8
int64_t* rax_14
int512_t zmm6
rax_14, zmm6 = sub_14081d830(0xa0, *(arg1 + 8), 1, 0)
int64_t* rdi = rax_14

if (rax_14 == 0)
    rdi = nullptr
else
    *rax_14 = 0
    rax_14[1] = 0
    sub_14117af20(&rax_14[2])

char rcx_4 = memset(rdi, 0, 0xa0)
zmm6.o = zx.o(0)
*rdi = *arg3
rdi[1] = data_14395fa10
char var_f0 = *(arg4 + 0x18)
int16_t var_ef = 0
int32_t var_ec = 0xffffffff
*(rdi + 0x10) = (*arg4).o
int64_t var_f8
var_f8.o = sub_141358900(rcx_4)
sub_141998c50(var_e8.q, &data_143ebdea0, rdi)
uint128_t var_88 = rax_7.o
int64_t* var_48 = rdi
uint64_t var_60 = rax_4.q
uint64_t var_78 = var_b8
char var_40 = 0
void*** rax_19
char rcx_6
rax_19, rcx_6 = sub_14081d830(0x90, *(arg1 + 8), 1, 0)
void*** rbx_1 = rax_19

if (rax_19 == 0)
    rbx_1 = nullptr
else
    var_e8.q = rdi
    int128_t zmm6_2 = sub_141358900(rcx_6)
    var_e8:8.q = &data_143ebded0
    var_e8 = var_e8
    void arg_8
    sub_141992bd0(rbx_1, &arg_8, &var_e8, 1)
    *rbx_1 = &data_142f64c40
    *(rbx_1 + 0x38) = arg2.o
    *(rbx_1 + 0x48) = var_88
    *(rbx_1 + 0x58) = zmm6_2
    *(rbx_1 + 0x68) = var_60.o
    *(rbx_1 + 0x78) = zmm7
    rbx_1[0x11] = var_40.q

return sub_1419968d0(arg1, rbx_1)
