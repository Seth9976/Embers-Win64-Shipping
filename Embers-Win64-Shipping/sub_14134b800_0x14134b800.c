// 函数: sub_14134b800
// 地址: 0x14134b800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
void* rdi = arg5
uint128_t* result = arg1
*arg1 = arg4[2]
arg1[1].q = arg4[3].q
void* rax_2 = *(arg5 + 0x50)

if (rax_2 != 0)
    rdi = rax_2

int64_t rsi = 0
int64_t r14 = sx.q(*(arg5 + 0x58)) << 3
uint64_t r14_1 = r14 u>> 3

if (rdi u> r14 + rdi)
    r14_1 = 0

if (r14_1 != 0)
    do
        int64_t* rdx = *rdi
        uint128_t zmm1 = arg4[1]
        uint128_t var_100 = *arg4
        uint128_t var_f0_1 = zmm1
        uint128_t var_e0_1 = arg4[2]
        uint128_t var_d0_1 = arg4[3]
        uint128_t var_c0_1 = arg4[4]
        uint128_t var_b0_1 = arg4[5]
        uint128_t var_a0_1 = arg4[6]
        uint128_t var_90_1 = arg4[7]
        uint128_t var_80_1 = arg4[8]
        uint128_t var_70_1 = arg4[9]
        zmm1 = *result
        uint128_t var_60_1 = arg4[0xa]
        void* rcx = arg5
        uint64_t var_128_1 = result[1].q
        var_e0_1.q = zmm1.q
        int64_t rax_5 = _mm_bsrli_si128(zmm1, 8).q
        uint128_t temp0_2 = _mm_bsrli_si128(zmm1, 8)
        var_e0_1:0xc.d = (rax_5 u>> 0x20).d
        var_d0_1.d = var_128_1.d
        var_d0_1:4.d = (var_128_1 u>> 0x20).d
        void* rax_10 = *(arg5 + 0x50)
        var_e0_1:8.d = temp0_2.d
        
        if (rax_10 != 0)
            rcx = rax_10
        
        if (rdx != *(rcx + (sx.q(*(arg5 + 0x58)) << 3) - 8))
            __builtin_memset(&var_100, 0, 0x19)
            var_60_1:8.b = 0
        
        void var_118
        int128_t* rax_12 = sub_14134ba20(&var_118, arg2, arg3, &var_100, rdx, 0)
        rdi += 8
        rsi += 1
        *result = *rax_12
        *(result + 8) = *(rax_12 + 8)
        *(result + 0xc) = *(rax_12 + 0xc)
        result[1].d = rax_12[1].d
        *(result + 0x14) = *(rax_12 + 0x14)
    while (rsi != r14_1)

__security_check_cookie(rax_1 ^ &var_168)
return result
