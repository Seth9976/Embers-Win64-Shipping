// 函数: sub_141446b70
// 地址: 0x141446b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_108

if (*(arg3 + 0x5c) == *(arg4 + 0x5c))
    int32_t rax_1 = data_143dbb190
    void* zmm0 = data_143dbb188.q
    int32_t var_100_1 = rax_1
    int32_t var_f4_1 = rax_1
    int32_t var_e8_1 = rax_1
    void* var_fc_1 = zmm0
    var_fc_1.d = arg5.d
    var_fc_1:4.d = (arg5 u>> 0x20).d
    void* var_f0 = zmm0
    var_f0.d = arg6.d
    var_f0:4.d = (arg6 u>> 0x20).d
    uint32_t rax_7 = (arg7.q u>> 0x20).d
    bool cond:0_1 = arg7 != data_143dbb180.d
    var_108 = zmm0
    int64_t var_e4_1 = 0
    int64_t var_dc_1 = 1
    int32_t var_d4_1 = 0
    int32_t var_d0_1 = 1
    
    if (cond:0_1 || rax_7 != data_143dbb180:4.d)
        var_108.d = arg7
        var_108:4.d = rax_7
        int32_t var_100_2 = 1
    
    return sub_141996750(arg1, arg3, arg4, &var_108)

int32_t rax_9 = (data_143dbb180).d
int32_t r9_1 = arg7
int32_t rdx_1 = data_143dbb180:4.d
int32_t r8_1 = arg8

if (r9_1 == rax_9 && r8_1 == rdx_1)
    r9_1 = *(arg3 + 0x44)
    r8_1 = *(arg3 + 0x48)

int64_t rbx

if (arg6.d != rax_9 || arg6:4.d != rdx_1 || r9_1 != *(arg4 + 0x44) || r8_1 != *(arg4 + 0x48))
    rbx.b = 1
else
    rbx.b = 0

int64_t arg_18 = arg5
arg_18:4.d += r8_1
arg_18.d = arg5.d + r9_1
int64_t var_110_1 = arg_18
int64_t rax_12 = *(arg3 + 0x44)
double zmm9[0x2] = arg5.o
arg_18 = arg6
arg_18:4.d += r8_1
int64_t var_80_1 = rax_12
arg_18.d = arg6.d + r9_1
int64_t var_110_2 = arg_18
int64_t rax_15 = *(arg4 + 0x44)
double zmm7[0x2] = arg6.o
double var_78_1[0x2] = zmm9
double var_90_1[0x2] = zmm7
int128_t var_a8
sub_1419a2ec0(*(arg2 + 0x5150), &var_a8, &data_143f10550, 0)
int128_t zmm8 = var_a8
void** rax_16
int512_t zmm6_1
rax_16, zmm6_1 = sub_1413354a0(arg1)
var_110_2.b = rbx.b
zmm6_1.o = zx.o(0)
var_110_2:1.w = 0
*rax_16 = arg3
int64_t rcx_5 = data_14395fa10
rax_16[1] = rcx_5
var_110_2:4.d = 0xffffffff
*(rax_16 + 0x10) = arg4.o
void* var_118_3
var_118_3.o = sub_141358900(rcx_5.b)
sub_141998c50(zmm8.q, &data_143ebdea0, rax_16)
int64_t* rdx_4 = *(arg1 + 8)
var_108 = arg2
int32_t var_100
var_100.o = rax_15.o
void** var_c0_1 = rax_16
int64_t var_f0_1 = (_mm_unpackhi_pd(zmm7, zmm7[0])).q
int64_t var_dc = (_mm_unpackhi_pd(zmm9, zmm9[0])).q
int32_t var_d0
var_d0.o = zmm8
char var_b8_1 = 0
void*** rax_17
char rcx_7
rax_17, rcx_7 = sub_14081d830(0x90, rdx_4, 1, 0)
void*** rbx_1 = rax_17

if (rax_17 == 0)
    rbx_1 = nullptr
else
    int128_t zmm6_3 = sub_141358900(rcx_7)
    void* var_110_3 = &data_143ebded0
    var_a8 = rax_16.o
    sub_141992bd0(rbx_1, &arg_18, &var_a8, 1)
    uint128_t zmm0_4 = var_108.o
    *rbx_1 = &data_142f64c40
    *(rbx_1 + 0x38) = zmm0_4
    int64_t var_fc
    *(rbx_1 + 0x48) = var_fc:4.o
    *(rbx_1 + 0x58) = zmm6_3
    *(rbx_1 + 0x68) = var_dc:4.o
    int128_t var_c8
    *(rbx_1 + 0x78) = var_c8
    rbx_1[0x11] = var_b8_1.q

return sub_1419968d0(arg1, rbx_1)
