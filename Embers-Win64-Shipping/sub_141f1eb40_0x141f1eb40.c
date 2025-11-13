// 函数: sub_141f1eb40
// 地址: 0x141f1eb40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x130)

if (rbx == 0)
    return 

void* rbx_1 = *(rbx + 0x258)

if (rbx_1 == 0)
    return 

void* rax_1 = sub_14256a090()
void* rdx_1 = *(rbx_1 + 0x10)
int64_t rax = sx.q(*(rax_1 + 0x38))

if (rax.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax << 3)) != rax_1 + 0x30)
    return 

void* rcx_1 = *(rbx_1 + 0x2b8)

if (rcx_1 == 0)
    return 

rax = zx.q(*(rcx_1 + 0x2710))

if (rax.b s< 0)
    *(rcx_1 + 0x2710) = rax.d | 0x200
