// 函数: sub_140d362a0
// 地址: 0x140d362a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* entry_rdx
char* rax = entry_rdx[4]
char arg_10 = 0
uint32_t rcx = zx.d(*rax)
entry_rdx[4] = &rax[1]
wchar16* rax_3
int64_t r9
int512_t entry_zmm1
rax_3, r9 = (&data_143e1cd60)[zx.q(rcx)](entry_rdx[3], entry_zmm1, &arg_10, &data_143e1cd60)

if (arg_10 != 0)
    return rax_3

if (entry_rdx[0xd].d == 0)
    return sub_140b1f850(entry_rdx, 2, u"Tried to pop from an empty flow stack", r9)

void* rax_4 = entry_rdx[0xc]
void* rcx_2 = &entry_rdx[8]
int64_t rdx = sx.q(*(rcx_2 + 0x28))
void* r8_1 = rcx_2 + 0x28

if (rax_4 != 0)
    rcx_2 = rax_4

int64_t rcx_3 = sx.q(*(rcx_2 + (rdx << 2) - 4))
*r8_1 = (rdx - 1).d
int64_t rax_6 = entry_rdx[2]
entry_rdx[4] = rcx_3 + *(rax_6 + 0x60)
return rax_6
