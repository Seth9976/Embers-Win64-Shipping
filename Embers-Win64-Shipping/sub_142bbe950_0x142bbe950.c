// 函数: sub_142bbe950
// 地址: 0x142bbe950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

int64_t rax_1 = *(arg1 + 0x2d0)
int64_t rdi_1 = *(arg1 + 0x98)

if (rax_1 != 0)
    (*(rax_1 + 0x18))()

void* rcx = *(arg1 + 0x3e8)

if (rcx != 0)
    sub_142bbf6b0(rcx)
    sub_142b99980(rdi_1, *(arg1 + 0x3e8))
    *(arg1 + 0x3e8) = 0

int64_t rax = *(arg1 + 0x2e0)

if (rax != 0)
    (*(rax + 0x58))(arg1)

*(arg1 + 0x410) = 0
