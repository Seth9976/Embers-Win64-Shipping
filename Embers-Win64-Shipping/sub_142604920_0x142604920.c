// 函数: sub_142604920
// 地址: 0x142604920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0 = arg1[2]
int32_t zmm1 = *arg1
int32_t r9 = 0

if (zmm0 f< arg2[2])
    r9 = 8

int32_t rax = 0

if (zmm0 f>= arg3[2])
    rax = 2

int64_t result = 0

if (zmm1 f< *arg2)
    result = 4

int32_t rcx
rcx.b = zmm1 f>= *arg3

if ((r9 | rax | result.d | rcx) - 1 u<= 0xb)
    switch (&
            __dos_header.e_magic[zx.q(jump_table_1426049a8[sx.q((r9 | rax | result.d | rcx) - 1)])])
        case 0x14260498a
            result.b = 0
            return result
        case 0x14260498d
            result.b = 1
            return result
        case 0x142604990
            result.b = 2
            return result
        case 0x142604993
            result.b = 3
            return result
        case 0x142604996
            return 4
        case 0x14260499b
            result.b = 5
            return result
        case 0x14260499e
            result.b = 6
            return result
        case 0x1426049a1
            result.b = 7
            return result

result.b = 0xff
return result
