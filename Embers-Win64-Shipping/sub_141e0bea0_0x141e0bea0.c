// 函数: sub_141e0bea0
// 地址: 0x141e0bea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const result

if (arg1 == 0)
    result = nullptr
else
    void* rsi_1 = arg1[4]
    
    if (rsi_1 != 0)
        void* rax_1 = sub_142591550()
        void* rdx = *(rsi_1 + 0x10)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
            void* r8_1
            r8_1.b = 1
            sub_141f3e990(arg1[4], 1, r8_1.b)
    
    result = arg1[0x48]
    
    if (result == 0)
        result = (*(*arg1 + 0x300))(arg1)
        arg1[0x48] = result

void* rbp = arg1[4]

if (rbp == 0)
    return result

void* i = *(result + 0x6c8)
int64_t rsi_2 = sx.q(*(result + 0x6d0))

for (void* rcx_4 = rsi_2 * 0x38 + i; i != rcx_4; i += 0x38)
    if (*(i + 0x28) == arg2)
        return sub_141f4b140(rbp, i)

int32_t rax_5 = (rsi_2 + 1).d
*(result + 0x6d0) = rax_5

if (rax_5 s> *(result + 0x6d4))
    sub_1407c3b60(result + 0x6c8)

int64_t rdx_2 = rsi_2 * 0x38
__builtin_memset(rdx_2 + *(result + 0x6c8), 0, 0x31)
i = rdx_2 + *(result + 0x6c8)
*(i + 0x28) = arg2
return sub_141f4b140(rbp, i)
