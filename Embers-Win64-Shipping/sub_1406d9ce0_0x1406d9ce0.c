// 函数: sub_1406d9ce0
// 地址: 0x1406d9ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_1406daa50(arg1, arg2)

if (result != 0xffffffff)
    return result

int64_t rdi_1 = sx.q(arg1[1].d)
int32_t rax = (rdi_1 + 1).d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1405a4f90(arg1)

int64_t* rdx_3 = (rdi_1 << 4) + *arg1
*rdx_3 = 0
*rdx_3 = *arg2
*arg2 = 0
rdx_3[1].d = arg2[1].d
*(rdx_3 + 0xc) = *(arg2 + 0xc)
arg2[1] = 0
return rdi_1.d
