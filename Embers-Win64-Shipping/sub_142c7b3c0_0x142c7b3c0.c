// 函数: sub_142c7b3c0
// 地址: 0x142c7b3c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result
int512_t entry_zmm2
int512_t zmm2
result, zmm2 = sub_142c5b310(arg1, 0, arg1 + 0x70c, entry_zmm2)

if (result == 0)
    if (arg1[0xe1].d != 4)
        arg1[0xe1].d = 4
    
    if (*(arg1 + 0x70c) != 0)
        arg1[0x7e].b = 1
        arg1[0x87] = "hwkC"
        *(arg1 + 0x72c) = 0
        *(arg1 + 0x734) = 0
        arg1[0xea].b = 0
        result = gzprintf(&arg1[0xd3], &data_1434ccff0, "CAPA", zmm2)
        
        if (result == 0)
            arg1[0xe1].d = 2

return result
