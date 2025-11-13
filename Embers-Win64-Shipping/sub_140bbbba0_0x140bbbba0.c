// 函数: sub_140bbbba0
// 地址: 0x140bbbba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143e1a338 != 0)
    return 

void* rax_1 = sub_140cde0b0()
sub_140d19010(rax_1, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
void* rdi_1 = nullptr
int64_t arg_8 = 0
void* rax_3 = sub_140d2dfc0(sub_140baa6d0(), rax_1, 0, 0, 0, 0, 0, 0, 0)
data_143e1a338 = rax_3
uint64_t rax = zx.q(*(rax_3 + 0xc))

if (rax.d s< data_143e1d9b4)
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax.d)
    uint32_t rdx_3 = zx.d(temp0_1)
    int32_t rax_5 = temp1_1 + rdx_3
    rdi_1 = *(data_143e1d9a0 + (sx.q(rax_5 s>> 0x10) << 3)) + sx.q(zx.d(rax_5.w) - rdx_3) * 0x18

*(rdi_1 + 8) |= 0x40000000
