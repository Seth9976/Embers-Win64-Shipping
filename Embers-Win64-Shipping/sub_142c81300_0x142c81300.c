// 函数: sub_142c81300
// 地址: 0x142c81300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const r8 = &data_1434cce10
void* rax_1 = *(*(*arg1 + 0x250) + 8)

if (rax_1 != 0)
    r8 = rax_1

int512_t entry_zmm2
int32_t result = gzprintf(&arg1[0xd3], "USER %s", r8, entry_zmm2)

if (result != 0)
    return result

arg1[0xea].d = 3
*(*arg1 + 0x4e20) = 0
return 0
