// 函数: sub_141b106e0
// 地址: 0x141b106e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x78)

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
*result = &data_1430541a0
result[0xd] = 0
int64_t rsi = sx.q(*(arg1 + 0x70))
int64_t rbp_1 = *(arg1 + 0x68)
result[0xe].d = rsi.d

if (rsi.d == 0)
    *(result + 0x74) = 0
    return result

sub_1407c3650(&result[0xd], rsi.d, 0)
memcpy(result[0xd], rbp_1, (rsi * 0xc).d)
return result
