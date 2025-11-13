// 函数: sub_1426ba4c0
// 地址: 0x1426ba4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg1[0x5d]
uint64_t result

if (rax != 0)
    int32_t rax_1 = *(rax + 0xc)
    void* const rax_8
    
    if (rax_1 s>= data_143e1d9b4)
        rax_8 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_1)
        uint32_t rdx_2 = zx.d(temp0_1)
        int32_t rax_3 = temp1_1 + rdx_2
        rax_8 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_2) * 0x18
    
    result = zx.q(*(rax_8 + 8) u>> 0x1d)

if (rax == 0 || (result.b & 1) != 0)
    int64_t rax_10 = sub_142724af0()
    int64_t r8_1 = *arg1
    result = (*(r8_1 + 0x610))(arg1, rax_10, r8_1)
    arg1[0x5d] = result

return result
