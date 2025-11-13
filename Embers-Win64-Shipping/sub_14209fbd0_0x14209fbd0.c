// 函数: sub_14209fbd0
// 地址: 0x14209fbd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x20)

if (rcx == 0)
    return 

int64_t* rax = (*(*rcx + 0x260))(rcx)

if (rax == 0)
    return 

uint64_t rdx_1 = *(arg1 + 0x50)

if (rdx_1 == 0)
    return 

void* rcx_1 = *(arg1 + 0x58)

if (rcx_1 == 0)
    return 

uint64_t r8_1 = zx.q(*(rcx_1 + 0x79)) + rdx_1

if (*(arg1 + 0x60) == 0)
    rdx_1.b = 0
else
    rdx_1 = zx.q(*(rcx_1 + 0x7a))

*r8_1 = (not.b(*(rcx_1 + 0x7b)) & *r8_1) | rdx_1.b
jump(*(*rax + 0x4d8))
