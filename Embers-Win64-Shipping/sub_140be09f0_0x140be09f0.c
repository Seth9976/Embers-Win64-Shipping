// 函数: sub_140be09f0
// 地址: 0x140be09f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x60)

if (result == 0)
    return result

result[1] = arg1
*result = &data_142e89968
result[2] = *(arg1 + 0xd8)
result[3] = *(arg1 + 0xe0)
int64_t rax = *(arg1 + 0x118)

if (rax == 0 || *(arg1 + 0x58) == 0)
    rax = 0

result[4] = rax
result[5].d = *(arg1 + 0xcc) & 1
result[6] = *(arg1 + 0xd0)
result[7] = *(arg1 + 0xb0)
result[8] = *(arg1 + 0xb8)
result[9] = *(arg1 + 0xc0)
result[0xa] = 0
int64_t rbp = sx.q(*(arg1 + 0x228))
int64_t rdi_1 = *(arg1 + 0x220)
result[0xb].d = rbp.d

if (rbp.d == 0)
    *(result + 0x5c) = rbp.d
    return result

sub_1405a4be0(&result[0xa], rbp.d, 0)
memcpy(result[0xa], rdi_1, (rbp << 4).d)
return result
