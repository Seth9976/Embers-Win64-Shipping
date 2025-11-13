// 函数: sub_140db26f0
// 地址: 0x140db26f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 8) = *(arg5 + 0x1c)
*(arg1 + 0x18) = *(arg5 + 0x2c)
*(arg1 + 0x20) = *arg5
*(arg1 + 0x48) = arg5[1].d
*(arg1 + 0x28) = *(arg5 + 0x14)
int64_t rax_1 = sx.q(*(arg2 + 0xb0))
int32_t rdx

if (rax_1.d s<= 0)
    rdx = -1
else
    rdx = *(*(arg2 + 0xa8) + (rax_1 << 2) - 4)

*(arg1 + 0x4d) = arg6
*(arg1 + 0x40) = rdx
*(arg1 + 0x30) = arg4
*(arg1 + 0x4e) = arg3
int64_t* rcx_1 = *(data_143e20d08 + 0x20)
*(arg1 + 0x4c) = (*(*rcx_1 + 0x148))(rcx_1)
char result = arg6 & 0xf
*(arg1 + 0x4f) = result

if (arg6 s< 0)
    result |= 0x80
    *(arg1 + 0x4f) = result

return result
