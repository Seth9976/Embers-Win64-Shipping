// 函数: sub_140a37f40
// 地址: 0x140a37f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = (sx.q(arg2) + 2) * 5
int64_t rsi = result << 3
int64_t* r10_1 = *(arg1 + 0xd0) + rsi

if (*r10_1 != 0)
    uint32_t rdx_1 = arg3 u>> 8
    uint32_t rcx_3 = ((arg4 + 0xff + arg3) u>> 8) - rdx_1
    int64_t rax_4
    
    if (rcx_3 u>= 0x40)
        rax_4 = -1
    else
        rax_4 = ((1 << rcx_3.b) - 1) << rdx_1.b
    
    result = not.q(rax_4)
    int64_t temp0_1 = *r10_1 & result
    *r10_1 = temp0_1
    
    if (temp0_1 == 0 && r10_1[4].w == 0)
        void* rdx_2 = *(arg1 + 0xd0)
        *(rsi + rdx_2 + 0x14) = 1
        *(rsi + rdx_2 + 0x18) = *(rdx_2 + 0x40)
        result = *(arg1 + 0xd0)
        *(result + sx.q(*(rdx_2 + 0x40)) * 0x28 + 0x14) = arg2 + 2
        *(rdx_2 + 0x40) = arg2 + 2
        *(r10_1 + 0x1c) = 0

return result
