// 函数: sub_142c7b460
// 地址: 0x142c7b460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x3f8) == 0)
    *(arg1 + 0x708) = 0
    return 0

void* rax_1 = *(arg1 + 0x1f0)
void* const r8 = &data_1434cce10

if (rax_1 != 0)
    r8 = rax_1

int512_t entry_zmm2
int32_t result = gzprintf(arg1 + 0x698, "USER %s", r8, entry_zmm2)

if (result == 0)
    *(arg1 + 0x708) = 7

return result
