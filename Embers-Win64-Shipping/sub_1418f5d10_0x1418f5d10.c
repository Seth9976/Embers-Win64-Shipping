// 函数: sub_1418f5d10
// 地址: 0x1418f5d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x80) != 0)
    return 

void* rcx = *(arg1 + 0x110)
int64_t (* var_20_1)(void* arg1) = sub_1418f85f0
int64_t var_38_1 = 0
void** const var_28_1 = &data_142e347e8
int64_t var_48[0x2]
var_48[0] = sub_1418f6830
char rax
int64_t r9_1
rax, r9_1 = sub_1418f8b90(rcx, &var_48)

if (rax == 0)
    sub_140af98a0("Unknown", 0xe9, u"Swapchain acquire image index failed!", r9_1)
    sub_140afbb40()

void* rcx_1 = *(arg1 + 0x110)

if (rcx_1 == 0)
    return 

void* rax_1 = *(rcx_1 + 0x130)
void* rdx_1 = rcx_1 + 0xa0

if (rax_1 != 0)
    rdx_1 = rax_1

int64_t rcx_2 = sx.q(*(rcx_1 + 0x190)) * 3
*(arg1 + 0x80) = *(rdx_1 + (rcx_2 << 3) + 8)
*(arg1 + 0xe8) = *(rdx_1 + (rcx_2 << 3))
*(arg1 + 0xf8) = *(rdx_1 + (rcx_2 << 3) + 0x10)
*sub_1418e1230(arg2 + 0x248, *(rdx_1 + (rcx_2 << 3) + 8), 0) = 0
void* rdi_1 = *(arg2 + 0x240)

if (*(rdi_1 + 0x78) != 0)
    sub_1418c86c0(rdi_1, 0, 0)

void* rdi_2 = *(rdi_1 + 0x70)

if (*(rdi_2 + 0x2c) == 2)
    sub_1418e06b0(arg2 + 0x248, rdi_2)

sub_1418bb120(rdi_2, 0x400, *(*(arg1 + 0x110) + 0x1b0))
