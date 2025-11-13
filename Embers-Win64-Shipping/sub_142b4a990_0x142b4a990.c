// 函数: sub_142b4a990
// 地址: 0x142b4a990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx_1 = (*(*arg2 + 0x18))(arg2) + (*(*arg3 + 0x18))(arg3)
int32_t rax_4 = sub_142b3f420(arg4)
int32_t rbx_2 = 0
int32_t rsi_2 = *arg1 - rbx_1 - rax_4

if (rsi_2 s<= 0)
    int32_t rax_6 = (*(*arg2 + 8))(arg2, arg4, zx.q(arg5), zx.q(arg6), arg7)
    return zx.q((*(*arg3 + 8))(arg3, arg4, zx.q(arg5), zx.q(rax_6 + arg6), arg7) + rax_6)

int32_t rbp_1 = arg1[2]
int32_t r15_1 = arg1[1]

if (rbp_1 == 1)
    rbx_2 = sub_142b4a890(r15_1, rsi_2, arg4, arg5, arg7)
else if (rbp_1 == 2)
    rbx_2 = sub_142b4a890(r15_1, rsi_2, arg4, arg6, arg7)

int32_t rbx_4 = rbx_2 + (*(*arg2 + 8))(arg2, arg4, zx.q(arg5), zx.q(rbx_2 + arg6), arg7)
int32_t rbx_5 = rbx_4 + (*(*arg3 + 8))(arg3, arg4, zx.q(arg5), zx.q(rbx_4 + arg6), arg7)

if (rbp_1 == 0)
    rbx_5 += sub_142b4a890(r15_1, rsi_2, arg4, arg5, arg7)
else if (rbp_1 == 3)
    rbx_5 += sub_142b4a890(r15_1, rsi_2, arg4, rbx_5 + arg6, arg7)

return zx.q(rbx_5)
