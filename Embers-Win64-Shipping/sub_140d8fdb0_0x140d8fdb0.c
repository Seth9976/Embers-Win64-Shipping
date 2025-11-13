// 函数: sub_140d8fdb0
// 地址: 0x140d8fdb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x118)

if (result == 0)
    return 0

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142ec7a98
char rbx_1 = *arg4
int64_t** rsi_1 = *arg1
uint32_t rbp = *arg3
__builtin_memset(&result[2], 0, 0x18)
sub_140d91fd0(&result[5], arg2)
result[0x18] = 0
void* rcx_1 = &result[0x1a]
result[0x19] = 0
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax = *(rcx_1 + 0x10)

if (rax != 0)
    rcx_1 = rax

*rcx_1 = 0
*(rcx_1 + 8) = 0
result[0x1e].d = 0xffffffff
*(result + 0xf4) = 0
result[0x20] = 0
result[0x21].d = 0
result[0x22].b = rbx_1
result[7] = 0
*(result + 0x44) = 0
result[0xa] = 0
__builtin_memset(&result[0xd], 0, 0x18)
result[8].d = result[6].d
result[0xc] = sub_140d9b860
result[0xb] = sub_140db8b60
result[9] = &result[5]
__builtin_memset(result + 0x84, 0, 0x1c)
__builtin_memset(&result[0x15], 0, 0x18)
result[0x14] = &result[7]
result[0x10].d = 2

if (sub_142b941f0(*rsi_1, &result[0x10], rbp, &result[2], arg5) != 0)
    result[2] = 0

sub_140db5cd0(&result[2])
return result
