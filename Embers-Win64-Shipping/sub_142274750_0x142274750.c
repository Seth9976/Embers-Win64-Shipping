// 函数: sub_142274750
// 地址: 0x142274750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f900b0(arg1)
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

if (((*(rax_7 + 8) u>> 0x1d).b & 1) == 0 && sub_141dcdc50(arg1) != 3)
    (*(*arg1 + 0x6e8))(arg1)

(*(*arg1 + 0xc40))(arg1)
(*(*arg1 + 0xda0))(arg1)

if (sub_141dcdc50(arg1) == 3)
    (*(*arg1 + 0xca0))(arg1)

(*(*arg1 + 0xc98))(arg1, 0)
arg1[0x7a].d |= 0x10
int32_t arg_8 = *sub_140b5e500(&arg_8, 0x142)
int32_t arg_c = 0
int64_t result = arg_8.q
arg1[0x49] = result
return result
