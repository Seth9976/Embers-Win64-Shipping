// 函数: sub_1420a0210
// 地址: 0x1420a0210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x20)

if (rcx == 0 || (*(*rcx + 0x260))(rcx) == 0)
    return 

int64_t rcx_1 = *(arg1 + 0x50)

if (rcx_1 == 0)
    return 

void* rdx_1 = *(arg1 + 0x58)

if (rdx_1 != 0)
    uint64_t rax
    rax.b = (*(rdx_1 + 0x7b) & *(zx.q(*(rdx_1 + 0x79)) + rcx_1)) != 0
    *(arg1 + 0x60) = rax.b
