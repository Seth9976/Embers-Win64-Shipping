// 函数: sub_14243c790
// 地址: 0x14243c790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_8
void* var_10 = &arg_8
int64_t (* var_18)(int64_t arg1, int64_t* arg2) = sub_14242e800
sub_140d3bfe0(arg1, &var_18, 1, 0, 0x20000000)
int32_t rax = *(arg1 + 0xc)
void* const result

if (rax s>= data_143e1d9b4)
    result = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax)
    uint32_t rdx_2 = zx.d(temp0_1)
    int32_t rax_2 = temp1_1 + rdx_2
    result = *(data_143e1d9a0 + (sx.q(rax_2 s>> 0x10) << 3)) + sx.q(zx.d(rax_2.w) - rdx_2) * 0x18

*(result + 8) |= 0x20000000
*(arg1 + 0x598) |= 1
return result
