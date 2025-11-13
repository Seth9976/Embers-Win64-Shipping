// 函数: sub_141936220
// 地址: 0x141936220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

data_143eff66c -= 1
uint64_t result

if (data_143eff5c6 == 0)
    result = data_143effd90(zx.q(*(arg1 + 0x5e8)))
else
    result = data_143f00480(1, arg1 + 0x5e8)

if (data_143eff5c6 == 0)
    int32_t rbx_1 = *(arg1 + 0x5e8)
    sub_14193d470()
    sub_140e85600(&data_1439c7620, rbx_1)
    int32_t rbx_2 = *(arg1 + 0x5e8)
    sub_14193d400()
    result = sub_14194b910(&data_1439c7670, rbx_2)

void* rbx_3 = arg1 + 0x4d4
*(arg1 + 0x5e8) = 0
int64_t i_1 = 6
int64_t i

do
    *(rbx_3 - 4) = 0
    
    if (*rbx_3 != 0)
        result = sub_1405c5570(rbx_3 - 0xc, 0)
    
    rbx_3 += 0x30
    i = i_1
    i_1 -= 1
while (i != 1)
return result
