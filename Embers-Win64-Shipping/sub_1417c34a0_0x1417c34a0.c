// 函数: sub_1417c34a0
// 地址: 0x1417c34a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r11 = *arg2
int64_t r10 = 0
int32_t result = *(arg1 + 0x10)
int64_t rdx = sx.q(r11[1].d)

if (rdx s>= 4)
    int64_t r9_1 = *arg3
    void* rcx_1 = *r11 + 0xc
    int64_t i_3 = ((rdx - 4) u>> 2) + 1
    r10 = i_3 << 2
    int64_t i
    
    do
        int64_t rax_1 = sx.q(*(rcx_1 - 8))
        rcx_1 += 0x20
        *(r9_1 + (rax_1 << 2)) = result
        *(r9_1 + (sx.q(*(rcx_1 - 0x20)) << 2)) = result
        *(r9_1 + (sx.q(*(rcx_1 - 0x18)) << 2)) = result
        *(r9_1 + (sx.q(*(rcx_1 - 0x10)) << 2)) = result
        i = i_3
        i_3 -= 1
    while (i != 1)

if (r10 s< rdx)
    int64_t r8_2 = *arg3
    int64_t i_2 = rdx - r10
    int32_t* rcx_4 = *r11 + 4 + (r10 << 3)
    int64_t i_1
    
    do
        int64_t rax_5 = sx.q(*rcx_4)
        rcx_4 = &rcx_4[2]
        *(r8_2 + (rax_5 << 2)) = result
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

return result
