// 函数: sub_1427d0100
// 地址: 0x1427d0100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
uint64_t rcx = zx.q(*(arg1 + 0x88))

if ((*(arg1 + 0x8c) & 0x7fffffff) u<= rcx.d)
    return sub_1427d10d0(arg1 + 0x80, &arg_10)

int64_t result = *(arg1 + 0x80)
int64_t* rdx_1 = result + (rcx << 3)

if (rdx_1 != 0)
    *rdx_1 = arg2

*(arg1 + 0x88) += 1
return result
