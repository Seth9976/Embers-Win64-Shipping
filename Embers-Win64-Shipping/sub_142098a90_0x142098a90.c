// 函数: sub_142098a90
// 地址: 0x142098a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rbx = arg2
int64_t* rcx = *(arg1 + 0x20)

if (rcx == 0)
    return 

uint64_t rax = (*(*rcx + 0x260))(rcx)

if (rax == 0)
    return 

void* rax_2
int64_t rcx_1
void* rdx

if (rbx != 0)
    rax_2 = sub_1424d16f0()
    rdx = *(rbx + 0x10)
    rcx_1 = sx.q(*(rax_2 + 0x38))

if (rbx == 0 || rcx_1.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rcx_1 << 3)) != rax_2 + 0x30)
    rbx = nullptr

*(arg1 + 0x50) = sub_142148d70(rax, *(rbx + 0x90))
sub_1420a4450(arg1, rax, rbx + 0x90)
