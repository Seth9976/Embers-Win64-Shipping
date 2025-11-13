// 函数: sub_142c799c0
// 地址: 0x142c799c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
char* r8 = *(*(rcx + 0x250) + 8)
int512_t entry_zmm2

if (r8 == 0)
    sub_142c64760(rcx, "Cannot APPEND without a mailbox.", r8, entry_zmm2)
    return 3

if (*(rcx + 0x4e68) s< 0)
    sub_142c64760(rcx, "Cannot APPEND with unknown input file size\n", r8, entry_zmm2)
    return 0x19

int64_t rsi
char* rax_3 = sub_142c78cd0(r8, 0, rsi)

if (rax_3 == 0)
    return zx.q((&rax_3[0x1b]).d)

int64_t arg_8 = rsi
*(*arg1 + 0x4e68)
int32_t rax_5 = sub_142c79fe0(arg1)
data_143ccb8a0(rax_3)

if (rax_5 == 0)
    arg1[0xe1].d = 0xb

return zx.q(rax_5)
