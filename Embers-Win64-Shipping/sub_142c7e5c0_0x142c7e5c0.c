// 函数: sub_142c7e5c0
// 地址: 0x142c7e5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int64_t entry_r8
int512_t entry_zmm2

if (*(arg1 + 0x3fb) != 0)
    sub_142c64760(rcx, "Failed EPSV attempt, exiting\n", entry_r8, entry_zmm2)
    return 8

int512_t zmm2 = sub_142c64850(rcx, "Failed EPSV attempt. Disabling EPSV\n", entry_r8, entry_zmm2)
void* rax_1 = *arg1
*(arg1 + 0x404) = 0
*(rax_1 + 0x4b10) = 0
int32_t result = gzprintf(&arg1[0xd3], &data_1434ccff0, "PASV", zmm2)

if (result == 0)
    *(arg1 + 0x744) += 1
    arg1[0xea].d = 0x1e

return result
