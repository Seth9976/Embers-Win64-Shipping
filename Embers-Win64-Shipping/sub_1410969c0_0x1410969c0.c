// 函数: sub_1410969c0
// 地址: 0x1410969c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20
sub_14126c520(&arg_20, arg9, *(arg1 + 0x18), *(arg1 + 0x20))
int64_t var_48 = arg10
sub_141296520(arg11, arg2, arg3, arg_20)
int32_t var_24 = arg5
int64_t* rbx_2 = *(arg1 + 0x10)
int64_t var_20 = -1
int64_t rdi_1 = sx.q(rbx_2[1].d)
int64_t var_30 = arg8
int32_t rax_7 = (rdi_1 + 1).d
rbx_2[1].d = rax_7

if (rax_7 s> *(rbx_2 + 0xc))
    sub_1410b38f0(rbx_2, rdi_1.d)

int64_t result = *rbx_2
int64_t rcx_8 = rdi_1 * 5
*(result + (rcx_8 << 3)) = arg11.o
*(result + (rcx_8 << 3) + 0x10) = arg4.o
int32_t var_18
*(result + (rcx_8 << 3) + 0x20) = ((arg7 & 7) << 3 | (var_18 & 0xffffffc0) | (arg6 & 7)).q
return result
