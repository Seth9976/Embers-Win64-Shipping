// 函数: sub_140d36250
// 地址: 0x140d36250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t entry_r9

if (arg2[0xd].d == 0)
    return sub_140b1f850(arg2, 2, u"Tried to pop from an empty flow stack", entry_r9) __tailcall
void* rax = arg2[0xc]
void* rcx = &arg2[8]
int64_t r8 = sx.q(*(rcx + 0x28))
void* r9 = rcx + 0x28

if (rax != 0)
    rcx = rax

int64_t rcx_1 = sx.q(*(rcx + (r8 << 2) - 4))
*r9 = (r8 - 1).d
int64_t result = arg2[2]
arg2[4] = rcx_1 + *(result + 0x60)
return result
