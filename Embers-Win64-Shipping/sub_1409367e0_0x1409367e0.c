// 函数: sub_1409367e0
// 地址: 0x1409367e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 8)
int32_t rax = *(rbx + 0x20)
int16_t arg_8

if (rax u> 0xc || not(test_bit(0x1015, rax)))
    int64_t* rcx = *(rbx + 8)
    arg_8 = 0x2c
    (*(*rcx + 0x150))(rcx, &arg_8, 2)

int64_t* rcx_1 = *(rbx + 8)
arg_8 = 0x7b
(*(*rcx_1 + 0x150))(rcx_1, &arg_8, 2)
*(rbx + 0x24) += 1
int64_t rsi = sx.q(*(rbx + 0x18))
int32_t rax_3 = (rsi + 1).d
*(rbx + 0x18) = rax_3

if (rax_3 s> *(rbx + 0x1c))
    sub_1406105e0(rbx + 0x10)

int64_t result = *(rbx + 0x10)
*(result + (rsi << 2)) = 6
*(rbx + 0x20) = 2
return result
