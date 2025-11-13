// 函数: sub_142c79ea0
// 地址: 0x142c79ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t entry_zmm2
int32_t result = sub_142c5b310(arg1, 0, arg1 + 0x70c, entry_zmm2)

if (result == 0)
    if (arg1[0xe1].d != 4)
        arg1[0xe1].d = 4
    
    if (*(arg1 + 0x70c) != 0)
        arg1[0x7e].b = 1
        arg1[0x87] = &data_1436b72c0
        *(arg1 + 0x71c) = 0
        *(arg1 + 0x724) = 0
        *(arg1 + 0x73d) = 0
        result = sub_142c79fe0(arg1)
        
        if (result == 0)
            arg1[0xe1].d = 2

return result
