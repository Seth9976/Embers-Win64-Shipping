// 函数: sub_14221a770
// 地址: 0x14221a770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1 + 0x10
int64_t rdi = sx.q(*(rbx + 0x88))
int32_t rax = (rdi + 1).d
*(rbx + 0x88) = rax

if (rax s> *(rbx + 0x8c))
    sub_14088f800(rbx, rdi.d)

void* rax_1 = *(rbx + 0x80)
void* rdx_2 = rbx

if (rax_1 != 0)
    rdx_2 = rax_1

int64_t rax_3 = rdi << 4
int16_t rdi_1 = 0
void* rdx_3 = rdx_2 + rax_3

if (rdx_2 == neg.q(rax_3))
    rdx_3 = nullptr
else
    *(rdx_3 + 0xe) = 0

*(rdx_3 + 8) = 0
*rdx_3 = &data_143a2efb0
*(rdx_3 + 0xc) = 8
int64_t rbp = sx.q(*(rbx + 0x88))
int32_t rax_4 = (rbp + 1).d
*(rbx + 0x88) = rax_4

if (rax_4 s> *(rbx + 0x8c))
    sub_14088f800(rbx, rbp.d)

void* rax_5 = *(rbx + 0x80)
void* rdx_5 = rbx

if (rax_5 != 0)
    rdx_5 = rax_5

int64_t rax_7 = rbp << 4
void* rdx_6 = rdx_5 + rax_7

if (rdx_5 != neg.q(rax_7))
    *rdx_6 = 0
    *(rdx_6 + 8) = 0

int64_t rbp_1 = sx.q(*(rbx + 0x88))
int32_t rax_8 = (rbp_1 + 1).d
*(rbx + 0x88) = rax_8

if (rax_8 s> *(rbx + 0x8c))
    sub_14088f800(rbx, rbp_1.d)

void* rax_9 = *(rbx + 0x80)

if (rax_9 != 0)
    rbx = rax_9

int64_t rcx_4 = rbp_1 << 4
void* rcx_5 = rcx_4 + rbx

if (rcx_4 == neg.q(rbx))
    rcx_5 = nullptr
else
    *rcx_5 = 0
    *(rcx_5 + 8) = 0

if (*(arg1 + 0x171) != 0)
    rdi_1 = (*(arg1 + 0x174)).w

*(rcx_5 + 0xc) = rdi_1
void* rdx_8 = data_143a2f120

if (*(arg1 + 0x171) == 0)
    rdx_8 = data_143a2f100

return sub_14081d930(arg1 + 0x118, rdx_8) __tailcall
