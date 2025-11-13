// 函数: sub_142be9070
// 地址: 0x142be9070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = &arg2[1]
void* rsi = &arg2[2]
void* rdi = &arg2[3]
uint32_t rbp_2 = zx.d(*arg2) << 8 | zx.d(arg2[1])
int32_t arg_8 = 0
int32_t r8 = *(arg1 + 0x2c)
uint32_t i_2 = (rbp_2 << 8 | zx.d(*rsi)) << 8 | zx.d(*rdi)

if (i_2 + 1 u> r8)
    *(arg1 + 0x38) = arg3
    int64_t rax_4 = sub_142b99a90(arg3, 4, r8, i_2 + 1, *(arg1 + 0x30), &arg_8)
    bool cond:0_1 = arg_8 != 0
    *(arg1 + 0x30) = rax_4
    
    if (cond:0_1)
        return nullptr
    
    *(arg1 + 0x2c) = i_2 + 1

void* result = *(arg1 + 0x30)
uint64_t i_3 = 0

if (i_2 != 0)
    void* result_1 = result
    i_3 = zx.q(i_2)
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        uint32_t rdx = zx.d(*(rbx + 3))
        result_1 += 4
        uint32_t rax_5 = zx.d(*(rsi + 3))
        rbx += 5
        uint32_t rcx_1 = zx.d(*(rdi + 3))
        rsi += 5
        rdi += 5
        *(result_1 - 4) = (rdx << 8 | rax_5) << 8 | rcx_1
        i = i_1
        i_1 -= 1
    while (i != 1)

*(result + (i_3 << 2)) = 0
return result
