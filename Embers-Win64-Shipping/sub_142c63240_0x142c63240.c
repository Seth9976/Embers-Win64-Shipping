// 函数: sub_142c63240
// 地址: 0x142c63240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = *(arg1 + 0x3b8)
*(arg1 + 0x4e50) = result

if (result == 0 && *(arg1 + 0x6d8) == result)
    *(arg1 + 0x4e41) = result.b
    return result

if (*(arg1 + 0x4e42) != 0)
    data_143ccb8a0(*(arg1 + 0x4e48))

int64_t rdx = *(arg1 + 0x4e50)
int64_t rax
int512_t entry_zmm2

if (rdx == 0)
    rax = data_143ccb8b0(*(arg1 + 0x6d8), rdx)
else
    rax = sub_142c563e0("%I64u-", rdx, entry_zmm2)
*(arg1 + 0x4e48) = rax
int64_t rcx_2 = rax
rax.b = rax != 0
*(arg1 + 0x4e42) = rax.b

if (rcx_2 == 0)
    return zx.q((rcx_2 + 0x1b).d)

*(arg1 + 0x4e41) = 1
return 0
