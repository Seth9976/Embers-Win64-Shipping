// 函数: sub_141f85b10
// 地址: 0x141f85b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x88)

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
*result = &data_1432848c8
result[0xe].b = *(arg1 + 0x70)
result[0xf] = 0
int64_t rbp = sx.q(*(arg1 + 0x80))
int64_t rsi_1 = *(arg1 + 0x78)
result[0x10].d = rbp.d

if (rbp.d == 0)
    *(result + 0x84) = 0
    return result

sub_1405c4a00(&result[0xf], rbp.d, 0)
memcpy(result[0xf], rsi_1, (rbp << 3).d)
return result
