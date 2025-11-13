// 函数: sub_14078aa60
// 地址: 0x14078aa60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x80)

if (result == 0)
    return 0

int64_t* rcx = &result[3]
*result = &data_142d6a040
result[1] = 0
result[2] = 0
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax = rcx[2]

if (rax != 0)
    rcx = rax

*rcx = 0
rcx[1] = 0
result[7].d = 0xffffffff
*(result + 0x3c) = 0
result[9] = 0
result[0xa].d = 0
result[0xb] = 0
result[0xc] = 0
*result = &data_142da7b28
result[0xd].d = *(arg1 + 0x68)
*(result + 0x6c) = *(arg1 + 0x6c)
*(result + 0x6d) = *(arg1 + 0x6d)
*result = &data_142da7f70
result[0xe] = 0
int32_t rsi = *(arg1 + 0x78)
int64_t rbp_1 = *(arg1 + 0x70)
result[0xf].d = rsi

if (rsi == 0)
    *(result + 0x7c) = 0
    return result

sub_1405c4b20(&result[0xe], rsi, 0)
memcpy(result[0xe], rbp_1, rsi * 0x1c)
return result
