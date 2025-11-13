// 函数: sub_141e93730
// 地址: 0x141e93730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x58))
int32_t rax = (rdi + 1).d
*(arg1 + 0x58) = rax

if (rax s> *(arg1 + 0x5c))
    sub_140775520(arg1 + 0x50)

uint64_t* rbx_1 = *(arg1 + 0x50) + rdi * 0x48

if (rbx_1 != 0)
    rbx_1[6].d = 0xffffffff

*rbx_1 = *arg2
rbx_1[1].d = arg2[1].d
rbx_1[2].d = arg4.d
*(rbx_1 + 0xc) = arg3.d
rbx_1[3] = arg5
rbx_1[6].d = arg7
*(rbx_1 + 0x20) = *arg6
*(rbx_1 + 0x34) = arg8.d
uint128_t zmm0 = arg9

if (not(zmm0.d f!= 0f))
    zmm0.d = float.s(zx.q((*(*arg5 + 0x40))(arg5)))

rbx_1[7].d = zmm0.d
*(rbx_1 + 0x3c) = arg10.d

if (arg11 != 0f)
    rbx_1[8].d = arg11
else
    zmm0.d = float.s(zx.q((*(*arg5 + 0x48))(arg5, arg11)))
    rbx_1[8].d = zmm0.d

*(rbx_1 + 0x44) = arg12
return arg12
