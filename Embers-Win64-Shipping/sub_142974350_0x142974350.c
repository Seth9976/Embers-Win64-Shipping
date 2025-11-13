// 函数: sub_142974350
// 地址: 0x142974350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x90)
int64_t var_98
int64_t rax_1 = __security_cookie ^ &var_98
var_98 = 0
uint8_t r11_1 = (arg3 u>> 0x3d).b
int64_t r10_1 = arg3 & 0x1fffffffffffffff
int64_t var_90 = r10_1
int64_t r8 = r10_1 * 2
int64_t rdx = r8 * 2
int64_t var_88 = r8
int64_t rcx = rdx * 2
int64_t var_78 = rdx
int64_t var_58 = rcx
int64_t var_80 = r8 ^ r10_1
int64_t var_70 = rdx ^ r10_1
int64_t rax_7 = rdx ^ r8
int64_t var_68 = rax_7
int64_t var_60 = rax_7 ^ r10_1
int64_t var_50 = rcx ^ r10_1
int64_t rax_12 = rcx ^ r8
int64_t rcx_1 = rcx ^ rdx
int64_t var_48 = rax_12
int64_t var_40 = rax_12 ^ r10_1
int64_t var_38 = rcx_1
int64_t var_30 = rcx_1 ^ r10_1
int64_t rcx_2 = rcx_1 ^ r8
int64_t var_28 = rcx_2
int64_t var_20 = rcx_2 ^ r10_1
int64_t rdx_1 = (&var_98)[zx.q((arg4 u>> 4).d) & 0xf]
int64_t rcx_6 = (&var_98)[zx.q((arg4 u>> 8).d) & 0xf]
int64_t rcx_8 = (&var_98)[zx.q((arg4 u>> 0xc).d) & 0xf]
int64_t rcx_10 = (&var_98)[zx.q((arg4 u>> 0x10).d) & 0xf]
int64_t rcx_12 = (&var_98)[zx.q((arg4 u>> 0x14).d) & 0xf]
int64_t rcx_14 = (&var_98)[zx.q((arg4 u>> 0x18).d) & 0xf]
int64_t rcx_16 = (&var_98)[zx.q((arg4 u>> 0x1c).d) & 0xf]
int64_t rcx_18 = (&var_98)[zx.q((arg4 u>> 0x20).d) & 0xf]
int64_t rcx_20 = (&var_98)[zx.q((arg4 u>> 0x24).d) & 0xf]
uint64_t rdx_10 = rdx_1 u>> 0x3c ^ rcx_6 u>> 0x38 ^ rcx_8 u>> 0x34 ^ rcx_10 u>> 0x30
    ^ rcx_12 u>> 0x2c ^ rcx_14 u>> 0x28 ^ rcx_16 u>> 0x24 ^ rcx_18 u>> 0x20 ^ rcx_20 u>> 0x1c
int64_t rcx_22 = (&var_98)[zx.q((arg4 u>> 0x28).d) & 0xf]
int64_t rcx_24 = (&var_98)[zx.q((arg4 u>> 0x2c).d) & 0xf]
int64_t rcx_26 = (&var_98)[zx.q((arg4 u>> 0x30).d) & 0xf]
int64_t rcx_28 = (&var_98)[zx.q((arg4 u>> 0x34).d) & 0xf]
int64_t rcx_30 = (&var_98)[zx.q((arg4 u>> 0x38).d) & 0xf]
int64_t r8_15 = (&var_98)[zx.q(arg4.d) & 0xf] ^ rdx_1 << 4 ^ rcx_6 << 8 ^ rcx_8 << 0xc
    ^ rcx_10 << 0x10 ^ rcx_12 << 0x14 ^ rcx_14 << 0x18 ^ rcx_16 << 0x1c ^ rcx_18 << 0x20
    ^ rcx_20 << 0x24 ^ rcx_22 << 0x28 ^ rcx_24 << 0x2c ^ rcx_26 << 0x30 ^ rcx_28 << 0x34
    ^ rcx_30 << 0x38
int64_t rcx_32 = (&var_98)[arg4 u>> 0x3c]
int64_t result = rcx_32 << 0x3c
uint64_t rdx_16 = rdx_10 ^ rcx_22 u>> 0x18 ^ rcx_24 u>> 0x14 ^ rcx_26 u>> 0x10 ^ rcx_28 u>> 0xc
    ^ rcx_30 u>> 8 ^ rcx_32 u>> 4
int64_t r8_16 = r8_15 ^ result

if ((r11_1 & 1) != 0)
    r8_16 ^= arg4 << 0x3d
    result = arg4 u>> 3
    rdx_16 ^= result

if ((r11_1 & 2) != 0)
    r8_16 ^= arg4 << 0x3e
    result = arg4 u>> 2
    rdx_16 ^= result

if ((r11_1 & 4) != 0)
    result = arg4 << 0x3f
    r8_16 ^= result
    rdx_16 ^= arg4 u>> 1

*arg1 = rdx_16
*arg2 = r8_16
__security_check_cookie(rax_1 ^ &var_98)
return result
