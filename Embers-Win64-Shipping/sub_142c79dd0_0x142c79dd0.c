// 函数: sub_142c79dd0
// 地址: 0x142c79dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(*arg1 + 0x250)
data_143ccb8a0(arg1[0xe8])
int64_t rcx_1 = arg1[0xe9]
arg1[0xe8] = 0
int64_t r8 = data_143ccb8a0(rcx_1)
arg1[0xe9] = 0
char* rcx_2 = *(rbx + 8)

if (rcx_2 == 0)
    int512_t entry_zmm2
    sub_142c64760(*arg1, "Cannot SELECT without a mailbox.", r8, entry_zmm2)
    return 3

char* rax_2 = sub_142c78cd0(rcx_2, 0, 0)

if (rax_2 == 0)
    return zx.q((&rax_2[0x1b]).d)

int32_t rax_4 = sub_142c79fe0(arg1)
data_143ccb8a0(rax_2)

if (rax_4 == 0)
    arg1[0xe1].d = 8

return zx.q(rax_4)
