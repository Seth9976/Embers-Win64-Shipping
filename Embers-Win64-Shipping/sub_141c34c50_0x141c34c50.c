// 函数: sub_141c34c50
// 地址: 0x141c34c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg3 + 0xc)
int32_t r8 = 0
arg3[1].d = 0

if (rdx s< 0 && rdx != 0)
    sub_140775b10(arg3, 0)
    r8 = arg3[1].d
    rdx = *(arg3 + 0xc)

int32_t rcx_2 = arg1[1].d + r8
arg3[1].d = rcx_2

if (rcx_2 s> rdx)
    sub_140775270(arg3)

return sub_141c34cd0(*arg1, arg2, *arg3, arg1[1].d) __tailcall
