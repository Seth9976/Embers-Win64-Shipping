// 函数: sub_1420a0400
// 地址: 0x1420a0400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x20)

if (rcx == 0)
    return 

void* rax = (*(*rcx + 0x260))(rcx)

if (rax == 0)
    return 

void* rax_2 = sub_1424a23e0()
void* rcx_1 = *(rax + 0x10)
int64_t rdx = sx.q(*(rax_2 + 0x38))

if (rdx.d s> *(rcx_1 + 0x38) || *(*(rcx_1 + 0x30) + (rdx << 3)) != rax_2 + 0x30)
    return 

int64_t* rcx_3 = *(rax + 0x220)

if ((*(*rcx_3 + 0x928))(rcx_3, *(arg2 + 0x90), arg1 + 0x28).b == 0)
    *(arg1 + 0x28) = 0
