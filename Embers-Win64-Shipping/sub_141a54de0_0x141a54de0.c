// 函数: sub_141a54de0
// 地址: 0x141a54de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x78)

if (result == 0)
    return 0

memset(result, 0, 0x78)
int64_t* rcx_1 = &result[7]
result[2] = 0
*result = &data_14302d3b0
__builtin_memset(&result[3], 0, 0x20)
rcx_1[2] = 0
rcx_1[3].d = 0
*(rcx_1 + 0x1c) = 0x80
int64_t* rax = rcx_1[2]

if (rax != 0)
    rcx_1 = rax

*rcx_1 = 0
rcx_1[1] = 0
result[0xb].d = 0xffffffff
*(result + 0x5c) = 0
result[0xd] = 0
result[0xe].d = 0
return result
