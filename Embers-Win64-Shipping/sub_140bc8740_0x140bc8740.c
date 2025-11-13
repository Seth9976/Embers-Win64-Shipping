// 函数: sub_140bc8740
// 地址: 0x140bc8740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[3].b == 0)
    return *arg1

int32_t r11 = *arg1
int64_t result = 0
int64_t rdi = data_143e1d9a0
int64_t rax
int64_t* rdx_3

if (r11 s>= data_143e1d9b4)
    rdx_3 = nullptr
    rax.b = 0
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11)
    uint32_t rdx_1 = zx.d(temp0_1)
    int32_t rax_3 = temp1_1 + rdx_1
    rdx_3 = *(rdi + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_1) * 0x18
    
    if (rdx_3 == 0)
        rax.b = 0
    else
        rax.b = (rdx_3[1].d & 0x30000000) == 0

int64_t* r10 = nullptr

if (rax.b != 0)
    r10 = rdx_3

void* const rdx_7

if (r11 s>= data_143e1d9b4)
    rdx_7 = nullptr
else
    int16_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11)
    uint32_t rdx_5 = zx.d(temp2_1)
    int32_t rax_9 = temp3_1 + rdx_5
    rdx_7 = *(rdi + (sx.q(rax_9 s>> 0x10) << 3)) + sx.q(zx.d(rax_9.w) - rdx_5) * 0x18

if (r10 != 0 && *(rdx_7 + 0x10) == arg1[1])
    result = *r10

*arg1 = result
arg1[3].b = 0
return result
