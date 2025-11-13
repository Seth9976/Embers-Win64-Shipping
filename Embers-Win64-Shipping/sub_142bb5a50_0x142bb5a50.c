// 函数: sub_142bb5a50
// 地址: 0x142bb5a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *arg1
int64_t* rbx = arg1[0x32]
int32_t rax = sub_142bad3f0(rbx, rsi, arg1)

if (rax != 0)
    return rax

rbx[0x58] = 0x40
int32_t rdx_1 = 0
rbx[0x4d].d = 0
*(rbx + 0x1c) = 0
rbx[0x59].d = 0
*(rbx + 0x2cc) = 0
rbx[0x63].d = 0x4000
*(rbx + 0x315) = arg2
*(rbx + 0x17c) = 0
*(rbx + 0x184) = 0
rbx[0x34].w = 0
*(rbx + 0x1a4) = 0x10000
int64_t rax_1 = *(rsi + 0x3b8)
int32_t rcx_1 = *(rsi + 0x3b0)
rbx[0x50] = rax_1
rbx[0x51].d = rcx_1
rbx[0x52] = 0
rbx[0x53].d = 0
rbx[0x54] = 0
rbx[0x55].d = 0

if (*(rsi + 0x3b0) u> 0)
    *(rbx + 0x214) = rcx_1
    rbx[0x41] = rax_1
    rbx[0x42].d = 0
    *(rbx + 0x204) = 1
    rdx_1 = (*(rsi + 0x3e0))(rbx, 0)

arg1[0x33].d = rdx_1

if (rdx_1 == 0)
    *(arg1 + 0x94) = rbx[0x48].d
    arg1[0x15].d = rbx[0x4a].d
    arg1[0x17].d = rbx[0x4c].d
    *(arg1 + 0xbc) = *(rbx + 0x264)
    *(arg1 + 0xc0) = *(rbx + 0x280)
    *(arg1 + 0xd0) = *(rbx + 0x290)
    *(arg1 + 0xe0) = *(rbx + 0x2a0)

return rdx_1
