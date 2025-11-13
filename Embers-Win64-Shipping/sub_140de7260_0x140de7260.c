// 函数: sub_140de7260
// 地址: 0x140de7260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x48)
int64_t rdi = sx.q(rbx[1].d)
int32_t rax = (rdi + 1).d
rbx[1].d = rax

if (rax s> *(rbx + 0xc))
    sub_1405a4cf0(rbx)

int64_t result = *rbx
*(result + (rdi << 2)) = arg2
*(arg1 + 0x68) += 1
return result
