// 函数: sub_140f87ac0
// 地址: 0x140f87ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 0x7b8)

if (rdx != 0xffffffff)
    sub_140f89710(arg1 + 0x7a8, rdx, *(arg1 + 0x7b0) - rdx, 1)
    *(arg1 + 0x7b8) = 0xffffffff

int64_t rbp = sx.q(*(arg1 + 0x7b0))
int32_t rax = (rbp + 1).d
*(arg1 + 0x7b0) = rax

if (rax s> *(arg1 + 0x7b4))
    sub_1405c4fe0(arg1 + 0x7a8)

int64_t* rdx_4 = (rbp << 6) + *(arg1 + 0x7a8)
*rdx_4 = *arg2
void* rax_2 = arg2[1]
rdx_4[1] = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

uint64_t result = zx.q(arg2[2].d)
rdx_4[2].d = result.d
rdx_4[4].b = 0

if (arg2[4].b != 0)
    result = arg2[3]
    rdx_4[3] = result
    rdx_4[4].b = 1

*(rdx_4 + 0x28) = *(arg2 + 0x28)
rdx_4[7] = arg2[7]

if (*(arg1 + 0x7b0) s<= 0x63)
    return result

return sub_140f89710(arg1 + 0x7a8, 0, 1, 1)
