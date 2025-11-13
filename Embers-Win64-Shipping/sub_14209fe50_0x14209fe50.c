// 函数: sub_14209fe50
// 地址: 0x14209fe50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x20)

if (rcx == 0)
    return 

void* rax = (*(*rcx + 0x260))(rcx)
void* rbx_1 = rax

if (rax == 0)
    return 

void* rax_2 = sub_1424a23e0()
void* rcx_1 = *(rbx_1 + 0x10)
int64_t rdx_1 = sx.q(*(rax_2 + 0x38))

if (rdx_1.d s> *(rcx_1 + 0x38) || *(*(rcx_1 + 0x30) + (rdx_1 << 3)) != rax_2 + 0x30)
    return 

rax = *(rbx_1 + 0x220)

if (rax == 0)
    return 

*(rax + 0x43f) = 0
*(*(rbx_1 + 0x220) + 0x4f0) = 0
*(*(rbx_1 + 0x220) + 0x4f4) = 0
