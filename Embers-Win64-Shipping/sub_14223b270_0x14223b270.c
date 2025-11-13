// 函数: sub_14223b270
// 地址: 0x14223b270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x40)
int64_t rax = sub_140a82f30(0x10018, 0x10)
int64_t* rcx = arg1 + 0x198
__builtin_memset(rax + 0x10000, 0, 0x14)
*(arg1 + 0x40) = rax
*(arg1 + 0x48) = rax
__builtin_memset(arg1 + 0x50, 0, 0xc0)
__builtin_memset(arg1 + 0x118, 0, 0x30)
*(arg1 + 0x158) = 0
*(arg1 + 0x160) = 0
*(arg1 + 0x188) = 0
*(arg1 + 0x190) = 0
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax_1 = rcx[2]

if (rax_1 != 0)
    rcx = rax_1

*rcx = 0
rcx[1] = 0
void* rcx_1 = arg1 + 0x1e8
*(arg1 + 0x1b8) = 0xffffffff
*(arg1 + 0x1bc) = 0
*(arg1 + 0x1c8) = 0
*(arg1 + 0x1d0) = 0
*(arg1 + 0x1d8) = 0
*(arg1 + 0x1e0) = 0
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_2 = *(rcx_1 + 0x10)

if (rax_2 != 0)
    rcx_1 = rax_2

*rcx_1 = 0
*(rcx_1 + 8) = 0
*(arg1 + 0x208) = 0xffffffff
*(arg1 + 0x20c) = 0
*(arg1 + 0x218) = 0
*(arg1 + 0x220) = 0
*(arg1 + 0x230) = 0
*(arg1 + 0x238) = 0
int64_t i_3 = 2
*(arg1 + 0x240) = &data_14330aa30
int64_t i_2 = 2
void* rdi = arg1 + 0x248
int64_t i

do
    int64_t rax_3 = sub_140a82f30(0x10018, 0x10)
    rdi += 0x10
    __builtin_memset(rax_3 + 0x10000, 0, 0x14)
    *(rdi - 0x10) = rax_3
    *(rdi - 8) = rax_3
    i = i_2
    i_2 -= 1
while (i != 1)
*(arg1 + 0x268) = 0
*(arg1 + 0x270) = &data_14330aa40
void* rdi_1 = arg1 + 0x278
int64_t i_1

do
    int64_t rax_4 = sub_140a82f30(0x10018, 0x10)
    rdi_1 += 0x10
    __builtin_memset(rax_4 + 0x10000, 0, 0x14)
    *(rdi_1 - 0x10) = rax_4
    *(rdi_1 - 8) = rax_4
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
*(arg1 + 0x298) = 0
*(arg1 + 0x168) = 0
*(arg1 + 0x170) = 0
*(arg1 + 0x178) = 1
*(arg1 + 0x17c) = 1
*(arg1 + 0x228) = 0
*(arg1 + 0x14c) = 0
*(arg1 + 0x154) = 0
*(arg1 + 0x148) = 0
return arg1
