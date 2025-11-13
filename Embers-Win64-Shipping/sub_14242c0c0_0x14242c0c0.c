// 函数: sub_14242c0c0
// 地址: 0x14242c0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0 || (*(arg2 + 0x5c) & 8) != 0)
    return 

int32_t rax = *(arg2 + 0xc)
void* const rax_7

if (rax s>= data_143e1d9b4)
    rax_7 = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax)
    uint32_t rdx_1 = zx.d(temp0_1)
    int32_t rax_2 = temp1_1 + rdx_1
    rax_7 = *(data_143e1d9a0 + (sx.q(rax_2 s>> 0x10) << 3)) + sx.q(zx.d(rax_2.w) - rdx_1) * 0x18

if (((*(rax_7 + 8) u>> 0x1d).b & 1) != 0)
    return 

uint64_t i = sub_141dc9840(arg2)
int64_t* r9_1 = *(arg1 + 0x148)
int64_t* rdx_3 = r9_1
void* r8_1 = &r9_1[sx.q(*(arg1 + 0x150))]

if (r9_1 == r8_1)
    return 

while (*rdx_3 != i)
    rdx_3 = &rdx_3[1]
    
    if (rdx_3 == r8_1)
        return 

if (((rdx_3 - r9_1) s>> 3).d == 0xffffffff)
    return 

void* rcx_6 = data_143f5b298

if (rcx_6 == 0 || arg1 == 0)
    return 

i = sub_1423de4b0(rcx_6, arg1)

if (i == 0)
    return 

int64_t* i_1 = *(i + 0x220)

for (void* rdi_3 = &i_1[sx.q(*(i + 0x228)) * 2]; i_1 != rdi_3; i_1 = &i_1[2])
    int64_t* rcx_7 = *i_1
    
    if (rcx_7 != 0)
        sub_14215f720(rcx_7, arg2)
