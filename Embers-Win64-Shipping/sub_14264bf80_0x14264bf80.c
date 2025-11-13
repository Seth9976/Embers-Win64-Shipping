// 函数: sub_14264bf80
// 地址: 0x14264bf80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x628))()
int64_t rdx
rdx.b = 1
(*(*arg1 + 0x2f8))(arg1, rdx)
sub_1424414e0((*(*arg1 + 0x150))(arg1), arg1)
int32_t rax_4 = *(arg1 + 0xc)
void* const rax_11

if (rax_4 s>= data_143e1d9b4)
    rax_11 = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax_4)
    uint32_t rdx_3 = zx.d(temp0_1)
    int32_t rax_6 = temp1_1 + rdx_3
    rax_11 = *(data_143e1d9a0 + (sx.q(rax_6 s>> 0x10) << 3)) + sx.q(zx.d(rax_6.w) - rdx_3) * 0x18

*(rax_11 + 8) |= 0x20000000
jump(*(*arg1 + 0x4e0))
