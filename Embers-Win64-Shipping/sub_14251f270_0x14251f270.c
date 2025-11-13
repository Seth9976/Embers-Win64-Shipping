// 函数: sub_14251f270
// 地址: 0x14251f270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = nullptr
uint64_t result_1 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &result_1, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &result_1)

int64_t rax_2 = *(arg2 + 0x20)
int64_t rcx_1
rcx_1.b = rax_2 != 0
uint64_t result = result_1
*(arg2 + 0x20) = rcx_1 + rax_2

if (result != 0)
    int32_t rax_3 = *(result + 0xc)
    
    if (rax_3 s< data_143e1d9b4)
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_3)
        uint32_t rdx_3 = zx.d(temp0_1)
        int32_t rax_5 = temp1_1 + rdx_3
        rdi = *(data_143e1d9a0 + (sx.q(rax_5 s>> 0x10) << 3)) + sx.q(zx.d(rax_5.w) - rdx_3) * 0x18
    
    result = zx.q(*(rdi + 8) u>> 0x1d)
    
    if ((result.b & 1) == 0)
        *arg3 = 1
        return result

*arg3 = 0
return result
