// 函数: sub_140da4ac0
// 地址: 0x140da4ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1 + 8
int32_t rax = sub_140d8f360(rbx, 0, *(rbx + 0x128))
void* rcx_1 = *(rbx + 0x120)

if (rcx_1 != 0)
    rbx = rcx_1

int64_t rcx_2 = sx.q(rax) * 9
*arg2 = *(rbx + (rcx_2 << 3) + 0x38)
void* rax_3 = *(rbx + (rcx_2 << 3) + 0x40)
arg2[1] = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

return arg2
