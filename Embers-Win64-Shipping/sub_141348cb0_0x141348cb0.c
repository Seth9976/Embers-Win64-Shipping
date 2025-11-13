// 函数: sub_141348cb0
// 地址: 0x141348cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = sx.q((*U"1111")[sx.q(*(arg2 + 0x1548))])
int64_t var_e8

if ((r8.d u<= 0x18 && test_bit(0x100a040, r8.d))
        || *(r8 * 0x14 + &data_143f025f0) == data_143f025b8)
    int128_t var_e0
    var_e0:4.d = *(arg3 + 0x44)
    var_e0:8.d = *(arg3 + 0x48)
    int32_t var_cc_1 = *(arg4 + 0x44)
    int32_t rax_6 = *(arg4 + 0x48) - 1
    var_e8 = 0
    int32_t var_d0_1 = rax_6
    int64_t var_c4_1 = 0
    int32_t var_bc_1 = 0
    var_e0.d = 0
    var_e0:0xc.d = 0
    int32_t var_c8_1 = 0xffffffff
    return sub_141996800(arg1, arg3, arg4, &var_e8)

int64_t rcx_2 = *(arg3 + 0x44)
int64_t rax_8 = data_143dbb180
int64_t var_100_1 = rcx_2
int64_t rax_9 = *(arg4 + 0x44)
int64_t var_100_2 = rcx_2
int128_t var_e0_1 = rax_8.o
var_e8 = rcx_2
int128_t var_f8
sub_1419a2ec0(*(arg2 + 0x5150), &var_f8, &data_143f10550, 0)
int128_t zmm7 = var_f8
void** rax_10
int512_t zmm6_1
rax_10, zmm6_1 = sub_14081d830(0xa0, *(arg1 + 8), 1, 0)
void** rsi_1 = rax_10

if (rax_10 == 0)
    rsi_1 = nullptr
else
    rax_10[1] = 0
    sub_14117af20(&rax_10[2])

char rcx_6 = memset(&rsi_1[1], 0, 0x98)
*rsi_1 = arg3
zmm6_1.o = zx.o(0)
rsi_1[1] = data_14395fa10
var_100_2.w = 0
var_100_2:2.b = 0
var_100_2:4.d = 0xffffffff
*(rsi_1 + 0x10) = arg4.o
void* var_108_3
var_108_3.o = sub_141358900(rcx_6)
sub_141998c50(var_f8.q, &data_143ebdea0, rsi_1)
uint128_t var_98_1 = rax_9.o
void** var_58_1 = rsi_1
uint64_t var_70_1 = var_e0_1:8.q
int64_t var_88_1 = rax_8.o:8.q
char var_50_1 = 1
void*** rax_12
char rcx_8
rax_12, rcx_8 = sub_14081d830(0x90, *(arg1 + 8), 1, 0)
void*** rdi_1 = rax_12

if (rax_12 == 0)
    rdi_1 = nullptr
else
    var_f8.q = rsi_1
    int128_t zmm6_3 = sub_141358900(rcx_8)
    var_f8:8.q = &data_143ebded0
    var_f8 = var_f8
    void arg_10
    sub_141992bd0(rdi_1, &arg_10, &var_f8, 1)
    *rdi_1 = &data_142f64c40
    *(rdi_1 + 0x38) = arg2.o
    *(rdi_1 + 0x48) = var_98_1
    *(rdi_1 + 0x58) = zmm6_3
    *(rdi_1 + 0x68) = var_70_1.o
    *(rdi_1 + 0x78) = zmm7
    rdi_1[0x11] = var_50_1.q

return sub_1419968d0(arg1, rdi_1)
