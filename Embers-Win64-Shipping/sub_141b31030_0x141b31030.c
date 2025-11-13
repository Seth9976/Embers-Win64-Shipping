// 函数: sub_141b31030
// 地址: 0x141b31030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 8)

for (void* rsi = i + sx.q(*(arg1 + 0x10)) * 0xc; i != rsi; i += 0xc)
    int512_t zmm2
    zmm2.o = i[1].d
    (*(*arg2 + 0x868))(arg2, *i, zmm2)

int64_t* rbx = *(arg1 + 0x18)
void* r14 = rbx + sx.q(*(arg1 + 0x20)) * 0x14
uint64_t var_18

if (rbx != r14)
    void* rsi_1 = &rbx[1]
    
    do
        int64_t rdx_1 = *rbx
        int32_t var_10_1 = *(rsi_1 + 8)
        int64_t rax_4 = *arg2
        var_18 = *rsi_1
        (*(rax_4 + 0x870))(arg2, rdx_1, &var_18)
        rbx += 0x14
        rsi_1 += 0x14
    while (rbx != r14)

int64_t result = sx.q(*(arg1 + 0x30))
void* rbx_1 = *(arg1 + 0x28)
void* rbp_1 = rbx_1 + result * 0x18

if (rbx_1 != rbp_1)
    uint128_t* rsi_2 = rbx_1 + 8
    
    do
        var_18.o = *rsi_2
        result = (*(*arg2 + 0x878))(arg2, *rbx_1, &var_18)
        rbx_1 += 0x18
        rsi_2 += 0x18
    while (rbx_1 != rbp_1)

return result
