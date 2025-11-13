// 函数: sub_140b90c00
// 地址: 0x140b90c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2[1].d)
int64_t* rbx = arg1

if (rdi.d == 0)
    return 

int32_t rax_1 = arg1[1].d
int32_t rdx = rax_1 + rdi.d

if (rdx s> *(arg1 + 0xc))
    sub_1405c5570(arg1, rdx)
    rax_1 = rbx[1].d

memcpy(*rbx + (sx.q(rax_1) << 3), *arg2, (rdi << 3).d)
rbx[1].d += rdi.d
