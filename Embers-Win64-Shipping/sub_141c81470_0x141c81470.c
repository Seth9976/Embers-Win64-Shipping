// 函数: sub_141c81470
// 地址: 0x141c81470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x70)
void*** rdi = nullptr

if (result == 0)
    return nullptr

result[1].d = 1
*(result + 0xc) = 1
*result = &data_14320f118
int64_t rdx = *arg1
*arg1 = 0
int32_t rax = *(arg1 + 0xc)
int32_t rcx = arg1[1].d
arg1[1] = 0
result[3] = 0
result[4] = 0
result[2] = &data_14320f550
result[5] = rdx
result[6].d = rcx
*(result + 0x34) = rax
result[9] = *arg2
void* rax_2 = arg2[1]
result[0xa] = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

result[0xb] = 0
result[0xc] = 0
result[0xd] = 2
void*** rax_3 = j_sub_140a82f30(0x170)

if (rax_3 != 0)
    rdi = sub_141c81f60(rax_3)

result[7] = rdi
int16_t* const rdi_1 = &data_142d40450
int16_t* const r8_1

if (result[6].d == 0)
    r8_1 = &data_142d40450
else
    r8_1 = result[5]

int16_t* var_18
sub_140a2e390(&var_18, u"FMessageBus.%s.Router", r8_1)
int32_t var_10

if (var_10 != 0)
    rdi_1 = var_18

void*** rax_5 = sub_140a6e140(result[7], rdi_1, 0x20000, 0, -1, 0)
int16_t* rcx_4 = var_18
result[8] = rax_5

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

return result
