// 函数: sub_141e6a970
// 地址: 0x141e6a970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = arg1[0x86]

if (rsi == 0)
    int64_t* rax_1 = sub_14246dc80()
    rsi = rax_1[0x23]
    
    if (rsi == 0)
        int64_t rdx_1 = *rax_1
        (*(rdx_1 + 0x390))(rax_1, rdx_1)
        rsi = rax_1[0x23]
    
    arg1[0x86] = rsi

int64_t* i = *(rsi + 0x58)

for (void* rbp_1 = sx.q(*(rsi + 0x60)) * 0x1c + i; i != rbp_1; i += 0x1c)
    if (*i != data_143f39960)
        int64_t rax_4 = *arg1
        int128_t var_18 = *i
        (*(rax_4 + 0x390))(arg1, &var_18, &i[2])

int64_t i_1 = *(rsi + 0x68)
int64_t result = sx.q(*(rsi + 0x70))

for (int64_t rsi_2 = result * 0x38 + i_1; i_1 != rsi_2; i_1 += 0x38)
    result = (*(*arg1 + 0x468))(arg1, i_1)

return result
