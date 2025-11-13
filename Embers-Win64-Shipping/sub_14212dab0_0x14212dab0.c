// 函数: sub_14212dab0
// 地址: 0x14212dab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)
char rdi = *(*(arg1 + 0x28) + 0x154)
bool rax_1 = sub_1405fba70(rbx.d, 3)
int64_t rdx

if (rax_1 != 0 && (rbx.d u> 0xe || not(test_bit(0x4011, rbx.d))))
    rdx = *(&data_143f025f0 + rbx * 0x14)

if (rax_1 != 0 && ((rbx.d u<= 0xe && test_bit(0x4011, rbx.d)) || rdx == data_143f025a8 || rbx.d == 2
        || rdx == data_143f025c8 || (rbx.d u<= 0x30 && test_bit(0x1000030320000, rbx))
        || rdx == data_143f025c0 || (rbx.d u<= 0x1f && test_bit(0xc8451800, rbx.d))
        || rdx == data_143f025b0))
    rax_1 = true
else
    rax_1 = false

if (rdi == 0xb && rax_1 != 0)
    return true

return false
