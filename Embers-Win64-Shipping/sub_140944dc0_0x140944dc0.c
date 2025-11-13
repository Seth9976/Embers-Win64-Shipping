// 函数: sub_140944dc0
// 地址: 0x140944dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x20)
int16_t arg_8

if (rax u> 0xc || not(test_bit(0x1015, rax)))
    int64_t* rcx = *(arg1 + 8)
    arg_8 = 0x2c
    (*(*rcx + 0x150))(rcx, &arg_8, 2)

int64_t* rcx_1 = *(arg1 + 8)
arg_8 = 0x7b
(*(*rcx_1 + 0x150))(rcx_1, &arg_8, 2)
*(arg1 + 0x24) += 1
int64_t rsi = sx.q(*(arg1 + 0x18))
int32_t rax_3 = (rsi + 1).d
*(arg1 + 0x18) = rax_3

if (rax_3 s> *(arg1 + 0x1c))
    sub_1406105e0(arg1 + 0x10)

int64_t result = *(arg1 + 0x10)
*(result + (rsi << 2)) = 6
*(arg1 + 0x20) = 2
return result
