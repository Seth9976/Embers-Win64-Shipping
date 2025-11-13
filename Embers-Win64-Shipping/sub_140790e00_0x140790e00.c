// 函数: sub_140790e00
// 地址: 0x140790e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *arg1

if (result == 0)
    return result

int64_t rdx = sx.q(*(result + 0x10c))
int64_t rdi = rdx << 3
int64_t* rbx = *(arg1[1] + 0x10)
int64_t rax_1 = rbx[3]

if (*(rdi + rax_1) == 0)
    sub_1419ccf30(rbx, rdx.d)
    rax_1 = rbx[3]

return *(rdi + rax_1)
