// 函数: sub_1421da6d0
// 地址: 0x1421da6d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg1[2].d)
int64_t rbp = sx.q(arg2)
void* rsi_2 = (rbp << 4) + *(*arg1 + 0x38)
int32_t rax_1 = (rbx + 1).d
arg1[2].d = rax_1

if (rax_1 s> *(arg1 + 0x14))
    sub_1405a4cf0(&arg1[1])

int64_t result = arg1[1]
*(result + (rbx << 2)) = rbp.d
*(rsi_2 + 8) = rbx.d
return result
