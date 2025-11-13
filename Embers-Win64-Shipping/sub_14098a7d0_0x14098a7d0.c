// 函数: sub_14098a7d0
// 地址: 0x14098a7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = data_143cedaf0

if (rax != 0)
    return rax

void* rax_1 = sub_140cde0b0()
sub_140d19010(rax_1, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
void* rdi_1 = nullptr
int64_t arg_8 = 0
void* rax_3 = sub_140d2dfc0(sub_14098a970(), rax_1, 0, 0, 0, 0, 0, 0, 0)
data_143cedaf0 = rax_3
int32_t rax_4 = *(rax_3 + 0xc)

if (rax_4 s< data_143e1d9b4)
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax_4)
    uint32_t rdx_3 = zx.d(temp0_1)
    int32_t rax_6 = temp1_1 + rdx_3
    rdi_1 = *(data_143e1d9a0 + (sx.q(rax_6 s>> 0x10) << 3)) + sx.q(zx.d(rax_6.w) - rdx_3) * 0x18

*(rdi_1 + 8) |= 0x40000000
return rax_3
