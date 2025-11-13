// 函数: sub_142be00b0
// 地址: 0x142be00b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t i_2 = zx.q(*(arg1 + 0x28))
int32_t r8 = *(arg1 + 0x2c)
void* rdi = *(arg1 + 0x18)
int32_t arg_8 = 0
int32_t rsi = (i_2 + 1).d

if (rsi u> r8)
    *(arg1 + 0x38) = arg2
    int64_t rax_2 = sub_142b99a90(arg2, 4, r8, rsi, *(arg1 + 0x30), &arg_8)
    bool cond:0_1 = arg_8 != 0
    *(arg1 + 0x30) = rax_2
    
    if (cond:0_1)
        return 0
    
    *(arg1 + 0x2c) = rsi

void* result = *(arg1 + 0x30)
uint64_t i_3 = 0

if (i_2.d != 0)
    void* r8_1 = rdi + 9
    void* result_1 = result
    void* r9_2 = rdi + 8
    i_3 = i_2
    void* r10_1 = rdi + 7
    uint64_t i_1 = i_2
    uint64_t i
    
    do
        uint32_t rdx = zx.d(*(r10_1 + 3))
        result_1 += 4
        uint32_t rax_3 = zx.d(*(r9_2 + 3))
        r10_1 += 0xb
        uint32_t rcx_1 = zx.d(*(r8_1 + 3))
        r9_2 += 0xb
        r8_1 += 0xb
        *(result_1 - 4) = (rdx << 8 | rax_3) << 8 | rcx_1
        i = i_1
        i_1 -= 1
    while (i != 1)

*(result + (i_3 << 2)) = 0
return result
