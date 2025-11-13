// 函数: sub_140ff9560
// 地址: 0x140ff9560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
uint64_t r10 = zx.q(arg3)
int64_t rcx = *(arg4 + 0x18)
arg_10 = rcx

if (*(arg1 + 0x158 + (r10 << 3) + 0x1ed0) == rcx)
    return 

*(arg1 + 0x158 + (r10 << 3) + 0x1ed0) = rcx
int64_t* rcx_1 = *(arg1 + 0x170)
(*(*rcx_1 + 0x230))(rcx_1, zx.q(r10.d), 1, &arg_10)
