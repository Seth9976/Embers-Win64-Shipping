// 函数: sub_140e164e0
// 地址: 0x140e164e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*(arg1 + 8) + 8))(arg1 + 8)
(*(*(arg1 + 0x4d8) + 8))(arg1 + 0x4d8, arg2)
(*(*(arg1 + 0x9a8) + 8))(arg1 + 0x9a8, arg2)
int64_t rbx_1 = sx.q(arg2[1].d)
int32_t rax_3 = (rbx_1 + 1).d
arg2[1].d = rax_3

if (rax_3 s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

int64_t result = *arg2
*(result + (rbx_1 << 3)) = arg1 + 0xac0
return result
