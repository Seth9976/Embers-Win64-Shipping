// 函数: sub_141992630
// 地址: 0x141992630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = arg5
int64_t r14 = sx.q(arg4)
int64_t rcx_2 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
int64_t rax_1 = r14 + rcx_2

if (rax_1 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, arg4 + 0x10)
    rcx_2 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
    rax_1 = r14 + rcx_2

*(arg2 + 0x30) = rax_1
*arg1 = rcx_2
memcpy(rcx_2, arg3, arg4)
int64_t* rax_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rcx_6 = &rax_4[2]

if (rcx_6 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x18)
    rax_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_6 = &rax_4[2]

*(arg2 + 0x30) = rcx_6
*rax_4 = 0
rax_4[1].d = 0
arg1[2] = rax_4
return arg1
