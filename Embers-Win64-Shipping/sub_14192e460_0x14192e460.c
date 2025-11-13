// 函数: sub_14192e460
// 地址: 0x14192e460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *arg1

if (data_143f01c92 != 0)
    sub_140a80f40()

void* rax = sub_14190d690(arg1[1], 1)
int32_t r9 = *(rsi + 0x84)
int32_t r8_1 = data_1439c7498 - 1
int32_t r10 = *(rsi + 0x80)
int64_t rdx_1 = sx.q(r8_1) * 5
int64_t rcx_2 = *(rax + 8)

if (*(rcx_2 + (rdx_1 << 3) + 0x10) != r9 || *(rcx_2 + (rdx_1 << 3) + 0x14) != r10)
    int32_t var_28_1 = *(rsi + 0x34)
    sub_14190a090(arg1[1], rax, r8_1, r9, r10, 0)

if (*(rax + 0x428) != 0)
    data_143effcd8(0x88ec, 0)
    *(rax + 0x428) = 0

int64_t rax_2 = sx.q(*(rsi + 0x3c))
int64_t rbx_1 = rax_2 * 0x1c
data_143effac0(0xcf2, zx.q(divu.dp.d(0:(arg1[2].d), (&data_1439c85f4)[rax_2 * 0xa])))
data_143effac0(0xcf5, 1)
data_143effb68(zx.q(*(rsi + 0x84)), zx.q(*(arg1 + 0x14)), zx.q(arg1[3].d), zx.q(*(arg1 + 0x1c)), 
    arg1[5].d, *(arg1 + 0x2c), *(rbx_1 + &data_143efedb0), *(rbx_1 + &data_143efedb0:4), arg1[6])
data_143effac0(0xcf5, 4)
int64_t result = data_143effac0(0xcf2, 0)
int64_t rcx_6 = arg1[7]

if (rcx_6 == 0)
    return result

return sub_140a74f90(rcx_6)
