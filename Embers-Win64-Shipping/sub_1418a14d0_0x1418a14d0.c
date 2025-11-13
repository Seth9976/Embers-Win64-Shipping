// 函数: sub_1418a14d0
// 地址: 0x1418a14d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0xb0)

if (result == 0)
    return 0

result[2] = arg2
void* rcx = &result[0xb]
result[3] = arg3
*result = &data_142fe9be8
result[1] = arg1
int32_t i = 0
__builtin_memset(&result[4], 0, 0x38)
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
result[0xf].d = 0xffffffff
*(result + 0x7c) = 0
result[0x11] = 0
result[0x12].d = 0
result[0x13].d = 0
result[0x14] = 0
result[0x15] = 0

do
    int32_t i_1 = i
    int64_t var_28 = 0
    sub_14189b970(&result[9], &i_1, &var_28)
    i += 1
while (i != 4)

return result
