// 函数: sub_140aa3b90
// 地址: 0x140aa3b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = *arg2
int64_t rsi

if (rbp == 0)
    rsi = arg3
else
    rsi = arg2[1]

void* rax = *arg1
int64_t i = *(rax + 0x20)
int64_t result = sx.q(*(rax + 0x28))

for (int64_t rdi_2 = result * 0x30 + i; i != rdi_2; i += 0x30)
    arg3 = 0
    result = rbp(rsi, &arg3, i)

return result
