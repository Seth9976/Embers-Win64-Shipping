// 函数: sub_141ba7be0
// 地址: 0x141ba7be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x368) == 0)
    return 

int64_t* rbx_1 = *(arg1 + 0x2e8)
int64_t rdi_1 = 0
uint64_t r14_2 = sx.q(*(arg1 + 0x2f0)) << 3 u>> 3

if (rbx_1 u> &rbx_1[sx.q(*(arg1 + 0x2f0))])
    r14_2 = 0

if (r14_2 == 0)
    return 

do
    int64_t r8
    r8.b = 1
    int64_t* rcx_1 = *(arg1 + 0x368) + 0x4f8
    void* rax
    rax, r8 = (*(*rcx_1 + 0x50))(rcx_1, *rbx_1, r8)
    rdi_1 += 1
    rbx_1 = &rbx_1[1]
while (rdi_1 != r14_2)
