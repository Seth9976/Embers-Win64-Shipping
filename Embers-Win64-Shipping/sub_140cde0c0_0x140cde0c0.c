// 函数: sub_140cde0c0
// 地址: 0x140cde0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *arg1
int32_t result = 0

while (i != &i[sx.q(arg1[1].d) * 2])
    uint32_t rdx_2 = (*i u>> 4).d
    int32_t r8_2 = (0x9e3779b9 - rdx_2) ^ rdx_2 << 8
    int32_t r9_3 = neg.d(r8_2 + rdx_2) ^ r8_2 u>> 0xd
    int32_t rdx_5 = (rdx_2 - r8_2 - r9_3) ^ r9_3 u>> 0xc
    int32_t r8_5 = (r8_2 - rdx_5 - r9_3) ^ rdx_5 << 0x10
    int32_t r9_6 = (r9_3 - r8_5 - rdx_5) ^ r8_5 u>> 5
    int32_t rdx_8 = (rdx_5 - r8_5 - r9_6) ^ r9_6 u>> 3
    int32_t r8_8 = (r8_5 - rdx_8 - r9_6) ^ rdx_8 << 0xa
    int32_t r9_9 = (r9_6 - r8_8 - rdx_8) ^ r8_8 u>> 0xf
    int32_t rax_1 = (result - r9_9) ^ r9_9 u>> 0xd
    int32_t r8_12 = (0x9e3779b9 - rax_1 - r9_9) ^ rax_1 << 8
    int32_t rax_6 = (r9_9 - r8_12 - rax_1) ^ r8_12 u>> 0xd
    int32_t rdx_12 = (rax_1 - r8_12 - rax_6) ^ rax_6 u>> 0xc
    int32_t r8_15 = (r8_12 - rdx_12 - rax_6) ^ rdx_12 << 0x10
    int32_t rax_9 = (rax_6 - r8_15 - rdx_12) ^ r8_15 u>> 5
    int32_t rdx_15 = (rdx_12 - r8_15 - rax_9) ^ rax_9 u>> 3
    int32_t r8_18 = (r8_15 - rdx_15 - rax_9) ^ rdx_15 << 0xa
    i = &i[2]
    result = (rax_9 - r8_18 - rdx_15) ^ r8_18 u>> 0xf

return result
