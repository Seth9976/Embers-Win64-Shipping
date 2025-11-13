// 函数: sub_1414c29e0
// 地址: 0x1414c29e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *arg1
int64_t rsi = sx.q(*(rdi + 0x1c40))
int32_t rax = (rsi + 1).d
*(rdi + 0x1c40) = rax

if (rax s> *(rdi + 0x1c44))
    sub_1405a4d70(rdi + 0x1c38)

*(*(rdi + 0x1c38) + (rsi << 3)) = arg1[1]
int64_t* rax_2 = j_sub_140a82f30(0xe0)
int64_t* rcx_3

if (rax_2 == 0)
    rcx_3 = nullptr
else
    rcx_3 = sub_1414c0070(rax_2, arg1[1])

*(arg1[1] + 8) = rcx_3
*(*arg1 + 0x1c30) = *(arg1[1] + 8)
*arg1[1] = arg1[2].b
char* result = arg1[1]

if (*result == 0)
    result = *arg1
    *(result + 0x61c4) += 1

return result
