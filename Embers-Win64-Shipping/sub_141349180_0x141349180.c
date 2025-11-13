// 函数: sub_141349180
// 地址: 0x141349180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int64_t rax_2 = *(arg4 + 0x48)
uint128_t zmm1 = arg4[1]
int32_t rcx = 3
uint128_t var_108 = *arg4

if (rax_2 != 0)
    rcx = 2

int72_t var_f8 = zmm1.9
*arg1 = arg4[2]
arg1[1].q = arg4[3].q

if (rax_2 != 0)
    int16_t var_30_1 = 0x100
    int64_t var_d8
    __builtin_memset(&var_d8, 0, 0x19)
    int64_t var_a0
    __builtin_memset(&var_a0, 0, 0x64)
    int64_t var_38_1 = 0
    
    if (rcx == 2)
        var_d8 = var_108.q
        int128_t var_d0
        var_d0.d = var_108:8.d
        var_d0:4.d = var_108:0xc.d
        var_d0:8.d = var_f8.d
        var_d0:0xc.d = var_f8:4.d
        char var_c0_1 = var_f8:8.b
    
    zmm1 = arg4[2]
    char var_110_1 = 0
    var_f8.q = arg4[3].q
    int64_t var_b8_1 = zmm1.q
    uint32_t var_ac_1 = (_mm_bsrli_si128(zmm1, 8).q u>> 0x20).d
    int32_t var_a8_1 = var_f8.d
    uint32_t var_a4_1 = (var_f8.q u>> 0x20).d
    int32_t var_b0_1 = _mm_bsrli_si128(zmm1, 8).d
    int128_t* rax_15 = sub_14134ba20(&var_108, arg2, arg3, &var_d8, *(arg4 + 0x48), var_110_1)
    *arg1 = *rax_15
    *(arg1 + 8) = *(rax_15 + 8)
    *(arg1 + 0xc) = *(rax_15 + 0xc)
    arg1[1].d = rax_15[1].d
    *(arg1 + 0x14) = *(rax_15 + 0x14)

__security_check_cookie(rax_1 ^ &var_138)
return arg1
