// 函数: sub_142635de0
// 地址: 0x142635de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r11 = *(arg1 + 0x48)
int32_t r10 = arg2

if (*(r11 + (sx.q(arg3) << 3) + 8) s< arg2)
    r10 = *(r11 + (sx.q(arg3) << 3) + 8)

*(r11 + (sx.q(arg3) << 3) + 8) = r10
int64_t rdx = *(arg1 + 0x48)
int32_t rax_1 = *(rdx + (sx.q(arg3) << 3) + 8 + 4)

if (rax_1 s< arg2)
    rax_1 = arg2

*(rdx + (sx.q(arg3) << 3) + 8 + 4) = rax_1
int64_t rax_3 = *(arg1 + 0x50)
int64_t rcx_4 = sx.q((*arg1 + 2) * (arg3 + 1) + arg2)
void* rdx_1 = rax_3 + (rcx_4 << 2)
int16_t rax_4 = *(rax_3 + (rcx_4 << 2) + 4)

if (rax_4 s> arg4)
    rax_4 = arg4

*(rdx_1 + 4) = rax_4
int16_t result = *(rdx_1 + 6)

if (result s< arg4)
    result = arg4

*(rdx_1 + 6) = result
return result
