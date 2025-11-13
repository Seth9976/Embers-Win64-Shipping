// 函数: sub_142bc4160
// 地址: 0x142bc4160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg3 + 0xc)

if (rdx == 0xb)
    (*(arg3 + 0x10))(arg1, arg2, arg1)
    return zx.q(*(arg2 + 0x18))

int32_t rcx = *(arg3 + 8)
void* rcx_4

if (rcx == 0)
    rcx_4 = arg1 + 0xe8
else if (rcx == 2)
    rcx_4 = arg1 + 0x1c8
else if (rcx == 3)
    rcx_4 = arg1 + 0x110
else if (rcx == 5)
    rcx_4 = arg1 + 0x148
else
    int64_t rax_2 = sx.q(*(arg2 + 0xb8))
    
    if (rax_2.d s< 0 || rax_2.d s>= *(arg1 + 0x1b0))
        return 0xa0
    
    rcx_4 = rax_2 * 0xfc + *(arg1 + 0x1b8)

void* arg_8 = rcx_4
void** r8_1 = &arg_8

if (rdx - 9 u<= 1)
    return (*(arg2 + 0x88))(arg2, arg3, r8_1, 0, 0)

return (*(arg2 + 0x80))(arg2, arg3, r8_1, 0, 0)
