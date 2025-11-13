// 函数: sub_141bd9a60
// 地址: 0x141bd9a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x30)

if (rdi == 0)
    *(arg1 + 0x68) = 0
    return 

void* rax = sub_141c122a0()
void* r8 = *(rdi + 0x10)
int64_t rax_1 = sx.q(*(rax + 0x38))

if (rax_1.d s> *(r8 + 0x38) || *(*(r8 + 0x30) + (rax_1 << 3)) != rax + 0x30)
    int64_t* rcx_1 = *(arg1 + 0x30)
    (*(*rcx_1 + 0x260))(rcx_1, zx.q(arg2), r8, rax + 0x30)

*(arg1 + 0x68) = 0
