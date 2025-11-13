// 函数: sub_142c7c560
// 地址: 0x142c7c560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x724) = 0
*(arg1 + 0x72c) = 0
int64_t r8 = *(arg1 + 0x710)
*(arg1 + 0x738) = 0
*(arg1 + 0x73a) = 0
int512_t entry_zmm2
int32_t result = gzprintf(arg1 + 0x698, "EHLO %s", r8, entry_zmm2)

if (result == 0)
    *(arg1 + 0x708) = 2

return result
