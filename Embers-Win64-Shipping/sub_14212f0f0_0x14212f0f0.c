// 函数: sub_14212f0f0
// 地址: 0x14212f0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_3 = sx.q(data_143f0f1a0)
int64_t rdx_1

if (rax_3.d u> 0x18 || not(test_bit(0x100a040, rax_3.d)))
    rdx_1 = *(&data_143f025f0 + rax_3 * 0x14)

if (((rax_3.d u<= 0x18 && test_bit(0x100a040, rax_3.d)) || rdx_1 == data_143f025b8
        || (rax_3 - 0x19).d u<= 1 || rdx_1 == data_143f025d0)
        && (rax_3.d u> 0x1e || not(test_bit(0x6562c800, rax_3.d)))
        && (*(rax_3 * 0x14 + &data_143f025fc) & 1) == 0)
    int64_t rax
    rax.b = 1
    return rax

void* rax_1 = *(arg1 + 0x10)

if (rax_1 == 0)
    return rax_1

void* rax_2
rax_2.b = (*(*(rax_1 + 0x28) + 0x178) & 0x7ce01dfc) != 0
return rax_2
