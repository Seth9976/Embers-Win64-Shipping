// 函数: sub_1410f65f0
// 地址: 0x1410f65f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x10)
int32_t var_10 = *(arg1 + 0x1c)
int64_t rdi = sx.q(rbx[1].d)
int32_t rax_1 = (rdi + 1).d
rbx[1].d = rax_1

if (rax_1 s> *(rbx + 0xc))
    sub_14083a990(rbx, rdi.d)

int64_t result = *rbx
*(result + rdi * 0x10) = arg2.o
return result
