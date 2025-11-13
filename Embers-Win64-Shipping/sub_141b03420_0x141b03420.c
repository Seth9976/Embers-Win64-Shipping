// 函数: sub_141b03420
// 地址: 0x141b03420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = 0
void* rax
int32_t* rdx
rax, rdx = sub_141af3690(arg1, 0, 8, 0, 0, 0)
rdx.b = 1

if (sub_141a6b7c0(rax) != 0)
    rdx = arg6
    *(rax + 0xf8) = *(rdx + 8)
    *(rax + 0xf0) = *rdx
    *(rax + 0xf4) = rdx[1].b

(*(*rax + 0x2b0))(rax, &arg1[0xb], zx.q(arg2), zx.q(arg3), (*(*arg1 + 0x2a8))(arg1, rdx))
*(rax + 0x110) = arg5
*(rax + 0x108) = arg4
int64_t rbx_1 = sx.q(arg1[0xc].d)
int32_t rax_6 = (rbx_1 + 1).d
arg1[0xc].d = rax_6

if (rax_6 s> *(arg1 + 0x64))
    sub_1405a4d70(&arg1[0xb])

int64_t result = arg1[0xb]
*(result + (rbx_1 << 3)) = rax
return result
