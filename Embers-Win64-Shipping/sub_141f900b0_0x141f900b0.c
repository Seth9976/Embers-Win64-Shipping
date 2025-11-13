// 函数: sub_141f900b0
// 地址: 0x141f900b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141dd1570(arg1)
int32_t rax = *(arg1 + 0xc)
void* const rax_7

if (rax s>= data_143e1d9b4)
    rax_7 = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax)
    uint32_t rdx_2 = zx.d(temp0_1)
    int32_t rax_2 = temp1_1 + rdx_2
    rax_7 = *(data_143e1d9a0 + (sx.q(rax_2 s>> 0x10) << 3)) + sx.q(zx.d(rax_2.w) - rdx_2) * 0x18

uint64_t result = zx.q(*(rax_7 + 8) u>> 0x1d)

if ((result.b & 1) == 0)
    sub_14242beb0((*(*arg1 + 0x150))(arg1), arg1)
    result = arg1[0x26]
    
    if (result != 0 && (*(result + 0x14c) & 8) != 0)
        void var_18
        int64_t* rax_12 = (*(*arg1 + 0x660))(arg1, &var_18)
        int64_t* rcx_5 = arg1[0x26]
        int32_t rax_13 = rax_12[1].d
        int64_t var_28 = *rax_12
        int32_t var_20_1 = rax_13
        return sub_141f4a3b0(rcx_5, &var_28, 0, 0, 0)

return result
