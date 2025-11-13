// 函数: sub_142b3ead0
// 地址: 0x142b3ead0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x80)
int32_t var_38 = arg5.d
int32_t rax_1 = (*(*rcx + 8))(rcx)
int32_t rbx = rax_1
int32_t rax_2

if (*(arg1 + 0x3c) s<= 0)
    int64_t* rcx_2 = *(arg1 + 0x78)
    int32_t rax_4 = (*(*rcx_2 + 8))(rcx_2, arg2, zx.q(arg3), zx.q(rbx + arg4), arg5)
    int64_t* rcx_3 = *(arg1 + 0x70)
    rbx += rax_4
    rax_2 = (*(*rcx_3 + 8))(rcx_3, arg2, zx.q(arg3), zx.q(rbx + arg4), arg5)
else
    rax_2 =
        sub_142b4a990(arg1 + 0x3c, *(arg1 + 0x78), *(arg1 + 0x70), arg2, arg3, rax_1 + arg4, arg5)

return zx.q(rax_2 + rbx)
