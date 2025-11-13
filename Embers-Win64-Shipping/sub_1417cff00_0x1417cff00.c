// 函数: sub_1417cff00
// 地址: 0x1417cff00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x1c0)

if (result == 0)
    return 0

sub_1422883b0(result, arg1, arg1[3])
*result = &data_142fcc260
result[0x2a] = 0
result[0x2b] = 0
result[0x2c] = arg1[0x82]
result[0x2d].d = result[0x21][1].d
void* rcx_2 = &result[0x30]
*(result + 0x16c) = arg1[0x88].b
*(result + 0x16d) = *(arg1 + 0x441)
result[0x2e] = 0
result[0x2f] = 0
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_4 = *(rcx_2 + 0x10)

if (rax_4 != 0)
    rcx_2 = rax_4

*rcx_2 = 0
*(rcx_2 + 8) = 0
result[0x34].d = 0xffffffff
*(result + 0x1a4) = 0
result[0x36] = 0
result[0x37].d = 0
int64_t rax_5

if (*(result + 0x16d) == 0)
    rax_5 = result[0x2c]
else
    rax_5 = arg1[0x87]
    result[0x2c] = rax_5

if (rax_5 == 0)
    result[0x2c] = sub_14210f630(0)

return result
