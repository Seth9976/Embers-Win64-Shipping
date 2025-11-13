// 函数: sub_142a6c030
// 地址: 0x142a6c030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)

if (*(arg1 + 0xb) != 0)
    int64_t rax_1 = *arg1
    int32_t arg_10 = 0
    (*(rax_1 + 0xe0))(arg1, &arg_10)

*(arg1 + (rdi << 2) + 0xc) = arg3

if (*(arg1 + 0xdc) == 0x2710)
    sub_142a6b700(arg1)

int32_t result = *(arg1 + 0xdc)
*(arg1 + (rdi << 2) + 0x80) = result
*(arg1 + 0xdc) += 1
*(rdi + arg1 + 0x68) = 1
*(arg1 + 0xb) = 0
arg1[1].w = 0
return result
