// 函数: sub_14282ac7c
// 地址: 0x14282ac7c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
void* rsi = &data_143b7fe70

if (*(arg1 + 0x14) == 4)
    rsi = &data_143b7fe80

char arg_8 = sub_14282a994(arg1)
char arg_9 = sub_14282a994(arg1)
char arg_a = sub_14282a994(arg1)
char rax_3 = sub_14282a994(arg1)
uint64_t* rdx = *arg1
char arg_b = rax_3
uint64_t result = *rdx

if (*(sx.q(*(result + 4)) + rdx + 0x10) != 0)
    return result

for (int64_t i = 0; i s< 4; )
    int64_t rax_4 = sx.q(*(rsi + (i << 2)))
    i += 1
    rbx = rbx << 8 | zx.d((&arg_8)[rax_4])

return sub_14282aa14(&arg1[3], rbx)
