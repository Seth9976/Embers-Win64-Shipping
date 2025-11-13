// 函数: sub_140a53ef0
// 地址: 0x140a53ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x80)

if (result == 0)
    return 0

int16_t* const rsi

if (*(arg1 + 0x18) == 0)
    rsi = &data_142d40450
else
    rsi = *(arg1 + 0x10)

int64_t r14 = *(arg1 + 8)
*result = &data_142e5d058
result[4] = 0
result[6] = 0
void** const rax
rax.b = 1
result[0xc].d = 0
*(result + 0x64) = 1

if (arg2 != 0)
    sub_140a3c510(&result[4], arg2)
    rax = zx.q(*(result + 0x64))

char temp0 = rax.b
rax.b = neg.b(rax.b)
result[2] = sbb.q(rax, rax, temp0 != 0)
*result = &data_142e5d150
result[0xd] = 0
result[0xe] = r14
result[0xf] = rsi
void*** rax_2 = j_sub_140a82f30(0x28)

if (rax_2 == 0)
    rax_2 = nullptr
else
    *rax_2 = &data_142e5d138
    rax_2[1] = result
    rax_2[2].d = 0
    rax_2[3] = 0
    rax_2[4] = 0

result[0xd] = rax_2
char rax_3
int64_t rdx_1
rax_3, rdx_1 = sub_140a54810()
void* rcx_1 = result[0xd]

if (rax_3 != 0)
    sub_140a54280(rcx_1, 0, data_143db7ad0)
    return result

rdx_1.b = 1
sub_140a54280(rcx_1, rdx_1, data_143db7ac8)
int512_t zmm1
zmm1.o = zx.o(0)
(*result)[1](result, zmm1)
return result
