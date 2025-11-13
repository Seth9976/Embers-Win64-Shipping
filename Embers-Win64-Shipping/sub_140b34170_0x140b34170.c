// 函数: sub_140b34170
// 地址: 0x140b34170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char const (* rdi)[0x9] = arg1

if (data_143de8178 == 0 || *(zx.q(data_143de7018) + &data_143de7240) == 0)
    return 

void* rax_1 = TlsGetValue(data_143de7a5c)

if (rax_1 == 0)
    rax_1 = sub_140b35c00()

int64_t rsi_1 = sx.q(*(rax_1 + 0xa0))

if (rdi == 0)
    rdi = data_1439a8ff8

int32_t rax_2 = (rsi_1 + 1).d
*(rax_1 + 0xa0) = rax_2

if (rax_2 s> *(rax_1 + 0xa4))
    sub_1405a4d70(rax_1 + 0x98)

*(*(rax_1 + 0x98) + (rsi_1 << 3)) = rdi
