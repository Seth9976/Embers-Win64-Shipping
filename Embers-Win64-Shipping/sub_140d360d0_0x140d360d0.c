// 函数: sub_140d360d0
// 地址: 0x140d360d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *(arg2 + 0x20)
int32_t zmm0 = (*rax).d
int32_t rcx = rax[1].d
*(arg2 + 0x20) = rax + 0xc
int32_t arg_14 = rcx
int64_t result = zmm0.q
*arg3 = result
return result
