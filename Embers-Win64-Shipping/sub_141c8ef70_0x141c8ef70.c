// 函数: sub_141c8ef70
// 地址: 0x141c8ef70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_141c9fd30(arg1, arg2)

if (result != 0xffffffff)
    return result

int64_t rdi_1 = sx.q(arg1[1].d)
int32_t rax = (rdi_1 + 1).d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1405a4df0(arg1)

int64_t* r8_1 = *arg1 + rdi_1 * 0x18
*r8_1 = *arg2
sub_140596d10(&r8_1[1], &arg2[1])
return rdi_1.d
