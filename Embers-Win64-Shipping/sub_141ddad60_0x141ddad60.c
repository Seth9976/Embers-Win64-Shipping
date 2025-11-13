// 函数: sub_141ddad60
// 地址: 0x141ddad60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0xc)
void* const rax_7

if (rax s>= data_143e1d9b4)
    rax_7 = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax)
    uint32_t rdx_1 = zx.d(temp0_1)
    int32_t rax_2 = temp1_1 + rdx_1
    arg3 = rax_2 s>> 0x10
    arg2 = sx.q(zx.d(rax_2.w) - rdx_1) * 3
    rax_7 = *(data_143e1d9a0 + (sx.q(arg3) << 3)) + (arg2 << 3)

uint64_t result = zx.q(*(rax_7 + 8) u>> 0x1d)

if ((result.b & 1) == 0)
    result = (*(*arg1 + 0x150))(arg1, arg2, arg3)
    
    if (result != 0)
        return (*(*arg1 + 0x450))(arg1, arg4)

return result
