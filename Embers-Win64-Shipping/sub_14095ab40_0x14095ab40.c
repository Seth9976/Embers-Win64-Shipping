// 函数: sub_14095ab40
// 地址: 0x14095ab40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0xe0)

if (rdi == 0)
    return 

void* rax_1 = sub_140986690()
int64_t rdx = *(rdi + 0x10)
int64_t rax = sx.q(*(rax_1 + 0x38))

if (rax.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax << 3)) != rax_1 + 0x30 || arg2 == 0
        || arg2[0x4c].b == 1)
    return 

int32_t rax_2 = *(arg2 + 0xc)
void* const rax_9

if (rax_2 s>= data_143e1d9b4)
    rax_9 = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax_2)
    uint32_t rdx_2 = zx.d(temp0_1)
    int32_t rax_4 = temp1_1 + rdx_2
    rdx = sx.q(zx.d(rax_4.w) - rdx_2) * 3
    rax_9 = *(data_143e1d9a0 + (sx.q(rax_4 s>> 0x10) << 3)) + (rdx << 3)

if (((*(rax_9 + 8) u>> 0x1d).b & 1) != 0)
    return 

arg2[0x4c].b = 1
int64_t rdx_3
rax, rdx_3 = (*(*arg2 + 0x4a0))(arg2, rdx)

if (rax == 0 || *(rax + 0x134) == 1)
    return 

int64_t r8_2 = *rax
rdx_3.b = 1
(*(r8_2 + 0x2a8))(rax, rdx_3, r8_2)
sub_14213f9e0(rax)
