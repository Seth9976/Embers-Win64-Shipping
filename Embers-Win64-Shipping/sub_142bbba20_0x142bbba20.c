// 函数: sub_142bbba20
// 地址: 0x142bbba20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg1 + 0x118)
int64_t rdi = *(arg1 + 0x20)

if (rax != 0)
    rax(arg1 + 0xc0)

int64_t rax_1 = *(arg1 + 0x1e0)

if (rax_1 != 0)
    rax_1(arg1 + 0x188)

int64_t rax_2 = *(arg1 + 0x180)

if (rax_2 != 0)
    rax_2(arg1 + 0x128)

int64_t rax_3 = *(arg1 + 0x240)

if (rax_3 != 0)
    rax_3(arg1 + 0x1e8)

int64_t rax_4 = *(arg1 + 0x2a8)

if (rax_4 != 0)
    rax_4(arg1 + 0x250)

sub_142b992d0(*(arg1 + 0x2b0), rdi)
sub_142b99980(rdi, *(arg1 + 0x2b0))
*(arg1 + 0x2b0) = 0
int64_t rdi_1 = *(arg1 + 0x20)
sub_142b99980(rdi_1, *(arg1 + 0xa8))
bool cond:0 = *(arg1 + 0xb5) != 0
*(arg1 + 0xa8) = 0

if (not(cond:0))
    sub_142b99980(rdi_1, *(arg1 + 0x98))
    *(arg1 + 0x98) = 0

jump(*(arg1 + 0x30))
