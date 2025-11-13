// 函数: sub_142c7f500
// 地址: 0x142c7f500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result
int512_t entry_zmm2

if (*(arg1 + 0x2c0) == 0)
    result = gzprintf(arg1 + 0x698, &data_1434ccff0, &data_1436b8004, entry_zmm2)
    
    if (result == 0)
        *(arg1 + 0x750) = 9
else
    result = gzprintf(arg1 + 0x698, "PBSZ %d", 0, entry_zmm2)
    
    if (result == 0)
        *(arg1 + 0x750) = 6
return result
