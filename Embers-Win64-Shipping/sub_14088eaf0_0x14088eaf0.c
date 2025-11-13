// 函数: sub_14088eaf0
// 地址: 0x14088eaf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1 + 0x10
int64_t rdi = sx.q(*(rbx + 0x88))
int32_t rax = (rdi + 1).d
*(rbx + 0x88) = rax

if (rax s> *(rbx + 0x8c))
    sub_14088f800(rbx, rdi.d)

void* rax_1 = *(rbx + 0x80)

if (rax_1 != 0)
    rbx = rax_1

int64_t rdx_3 = rdi << 4
void* rdx_4 = rdx_3 + rbx

if (rdx_3 == neg.q(rbx))
    rdx_4 = nullptr
else
    *rdx_4 = 0
    *(rdx_4 + 8) = 0

void** rax_2 = *(arg1 + 0x160)
void** rcx_1 = &data_143a2efb0
*(rdx_4 + 8) = 0

if (rax_2 != 0)
    rcx_1 = rax_2

*rdx_4 = rcx_1
*(rdx_4 + 0xc) = 8
return sub_14081d930(arg1 + 0x118, data_14397f9f0) __tailcall
