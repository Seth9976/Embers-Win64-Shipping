// 函数: sub_1410e0370
// 地址: 0x1410e0370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = 0
int32_t var_1c = 0xffffffff
int64_t var_28 = 0
int32_t i = 0
int32_t var_20 = 0
int64_t var_38 = 0
int32_t var_30 = 0
int16_t var_18 = 0x100
int32_t var_2c = 0x22
*(arg1 + 0xa0) = 1

do
    uint64_t i_2 = zx.q(i)
    i += 1
    uint64_t rcx = i_2 * 3
    uint64_t rax_1 = i_2 * 3
    int64_t zmm1 = *(&var_18 + (rcx << 3))
    *(arg1 + (rax_1 << 3) + 0xa8) = *(&var_28 + (rcx << 3))
    *(arg1 + (rax_1 << 3) + 0xb8) = zmm1
while (i u< *(arg1 + 0xa0))

*(arg1 + 0x17a) = 0
*(arg1 + 0x168) = var_38.o
void*** result = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rcx_1 = &result[0x1d]

if (rcx_1 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0xf0)
    result = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_1 = &result[0x1d]

*(arg1 + 0x30) = rcx_1
int64_t* rcx_3 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rcx_3 = result
*(arg1 + 8) = &result[1]
result[1] = 0
result[2].d = 1
*result = &data_142f115b8
result[3] = 0
result[4].d = 0
*(result + 0x24) = 0xffffffff
result[5].w = 0
result[6] = 0
result[7].d = 0
*(result + 0x3c) = 0xffffffff
result[8].w = 0
result[9] = 0
result[0xa].d = 0
*(result + 0x54) = 0xffffffff
result[0xb].w = 0
result[0xc] = 0
result[0xd].d = 0
*(result + 0x6c) = 0xffffffff
result[0xe].w = 0
result[0xf] = 0
result[0x10].d = 0
*(result + 0x84) = 0xffffffff
result[0x11].w = 0
result[0x12] = 0
result[0x13].d = 0
*(result + 0x9c) = 0xffffffff
result[0x14].w = 0
result[0x15] = 0
result[0x16].d = 0
*(result + 0xb4) = 0xffffffff
result[0x17].w = 0
result[0x18] = 0
result[0x19].d = 0
*(result + 0xcc) = 0xffffffff
result[0x1a].w = 0
result[0x1b] = 0
result[0x1c] = 0

if (result[2].d u> 0)
    do
        uint64_t i_3 = zx.q(i_1)
        i_1 += 1
        uint64_t rdx = i_3 * 3
        *(result + (rdx << 3) + 0x18) = *(&var_28 + (rdx << 3))
        result[rdx + 5] = *(&var_18 + (rdx << 3))
    while (i_1 u< result[2].d)

*(result + 0xd8) = var_38.o
return result
