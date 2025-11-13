// 函数: sub_14262cf90
// 地址: 0x14262cf90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_38
int64_t rax_1 = __security_cookie ^ &var_38
int64_t r11 = sx.q(arg5)
uint64_t rsi = zx.q(arg6)
int16_t rdx = 0
uint32_t r10_1 = zx.d((*(*(arg1 + 0x48) + r11 * 0xc + 4) u>> (rsi << 3).b).b)

if (r10_1 != 0xff)
    uint64_t rax_5 = zx.q(rsi.d) & 3
    __builtin_memcpy(&var_38, 
        "\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\xff\xff\xff\xff\x00\x00\x00\x"
    "00\x01\x00\x00\x00\x00\x00\x00\x00", 
        0x20)
    int128_t var_28
    int32_t rdx_2 = *(*(arg1 + 0x40) +
        (sx.q((*(&var_38 + (rax_5 << 2)) + arg4) * *arg1 + *(&var_28 + (rax_5 << 2)) + arg3) << 2))
        & 0xffffff
    rdx = *(arg2 + (zx.q(rdx_2 + r10_1) << 1))

uint64_t result
result.b = rdx != *(arg2 + (r11 << 1))
__security_check_cookie(rax_1 ^ &var_38)
return result
