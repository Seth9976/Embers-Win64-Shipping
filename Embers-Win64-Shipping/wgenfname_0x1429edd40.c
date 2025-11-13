// 函数: wgenfname
// 地址: 0x1429edd40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_68[0xe]
int64_t rax_1 = __security_cookie ^ &var_68
void* r11 = &arg4[0xf]
int128_t* rdi = arg1

for (int64_t i = 0; i s< 0xe; i += 1)
    uint32_t rax_2 = zx.d(*(r11 - 2))
    uint64_t r9 = zx.q(*(r11 - 1))
    r11 -= 1
    var_68[i] = ((rax_2 + 2 + (r9 << 1).d + zx.d(*(r11 + 1))) u>> 2).b

uint32_t r9_4 = zx.d(arg3[-1])
uint32_t r8 = zx.d(*arg4)
uint32_t rdx = zx.d(*arg3)
uint32_t rcx_3 = zx.d(arg3[1]) + r9_4
uint8_t var_5a = ((zx.d(arg4[1]) + r9_4 + ((r8 + 1) << 1)) u>> 2).b
int64_t i_4 = 0xe
uint8_t var_59 = ((rdx + ((r9_4 + 1) << 1) + r8) u>> 2).b
uint8_t var_58 = ((rcx_3 + ((rdx + 1) << 1)) u>> 2).b
void* rax_15 = &arg3[2]
int64_t i_1

do
    uint32_t rcx_4 = zx.d(*(rax_15 - 2))
    uint64_t r8_1 = zx.q(*(rax_15 - 1))
    rax_15 += 1
    *(&var_59 - arg3 + rax_15 - 1) = ((rcx_4 + 2 + (r8_1 << 1).d + zx.d(*(rax_15 - 1))) u>> 2).b
    i_1 = i_4
    i_4 -= 1
while (i_1 != 1)
uint8_t* result = &var_59
uint64_t i_3 = zx.q((i_4 + 0x10).d)
uint64_t i_2

do
    int128_t zmm0 = *result
    result = &result[-1]
    *rdi = zmm0
    rdi += arg2
    i_2 = i_3
    i_3 -= 1
while (i_2 != 1)
__security_check_cookie(rax_1 ^ &var_68)
return result
