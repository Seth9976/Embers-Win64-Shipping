// 函数: sub_141a43eb0
// 地址: 0x141a43eb0
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
*result = &data_14302e030
result[0xd] = 0
int64_t rbp = sx.q(*(arg1 + 0x70))
int64_t r14 = *(arg1 + 0x68)
result[0xe].d = rbp.d

if (rbp.d != 0)
    sub_1405c4a00(&result[0xd], rbp.d, 0)
    memcpy(result[0xd], r14, (rbp << 3).d)
else
    *(result + 0x74) = 0

result[0xf].d = *(arg1 + 0x78)
*(result + 0x7c) = *(arg1 + 0x7c)
return result
