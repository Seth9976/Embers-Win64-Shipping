// 函数: sub_140b9b350
// 地址: 0x140b9b350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x60) = 1
int64_t* rbx = *(arg1 + 0x28)
int64_t rdi = 0
void* result = &rbx[sx.q(*(arg1 + 0x30))]
uint64_t r14_1 = sx.q(*(arg1 + 0x30)) << 3 u>> 3

if (rbx u> result)
    r14_1 = 0

if (r14_1 != 0)
    do
        int64_t* rcx = *rbx
        *(arg1 + 0x68) = rcx
        result = (*(*rcx + 8))(rcx, arg2)
        rdi += 1
        rbx = &rbx[1]
    while (rdi != r14_1)

*(arg1 + 0x68) = 0
*(arg1 + 0x60) = 0
return result
