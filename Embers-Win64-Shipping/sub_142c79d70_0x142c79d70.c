// 函数: sub_142c79d70
// 地址: 0x142c79d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int64_t r8 = *(*(rcx + 0x250) + 0x30)

if (r8 == 0)
    int512_t entry_zmm2
    sub_142c64760(rcx, "Cannot SEARCH without a query string.", r8, entry_zmm2)
    return 3

int32_t result = sub_142c79fe0(arg1)

if (result == 0)
    arg1[0xe1].d = 0xd

return result
