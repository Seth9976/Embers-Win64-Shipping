// 函数: sub_14242fb80
// 地址: 0x14242fb80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 0xb8)
int32_t rax

if (rdx == 0)
    rax = 0
else
    rax = *(rdx + 0xc)

int64_t rcx = sx.q(rax) * 5
int64_t rax_1

if ((&data_1439c8600)[rcx << 3] == 0)
    rax_1.b = 0
else if (*((rcx << 3) + 0x1439c85e8) s<= 1)
    rax_1.b = 1
else
    rax_1 = sx.q(data_143f0f1a0)
    
    if (rax_1.d u> 0x1c || not(test_bit(0x10100015, rax_1.d)))
        if (((*(rax_1 * 0x14 + &data_143f025fc) u>> 7).b & 1) == 0)
            rax_1.b = 0
        else
            rax_1.b = 1
    else
        rax_1.b = 1

if (rdx == 0 || *(rdx + 0x20) s<= 0 || data_1439c7a17 == 0 || rax_1.b == 0)
    return 0

void*** rax_2 = j_sub_140a82f30(0x148)

if (rax_2 == 0)
    return nullptr

return sub_142428240(rax_2, arg1, *(arg1 + 0x38))
