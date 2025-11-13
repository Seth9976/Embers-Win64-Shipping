// 函数: sub_14271d890
// 地址: 0x14271d890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0xa0)
int64_t rax
int32_t r9
void* const result_1
int64_t r11

if (result == 0)
label_14271d915:
    r9 = data_143e1d9b4
    r11 = data_143e1d9a0
    result_1 = nullptr
    rax.b = 0
else
    void* rax_1 = sub_142497110()
    void* rdx_1 = *(result + 0x10)
    rax = sx.q(*(rax_1 + 0x38))
    
    if (rax.d s> *(rdx_1 + 0x38))
        goto label_14271d915
    
    if (*(*(rdx_1 + 0x30) + (rax << 3)) != rax_1 + 0x30)
        goto label_14271d915
    
    int32_t rax_2 = *(result + 0xc)
    r9 = data_143e1d9b4
    result_1 = result
    r11 = data_143e1d9a0
    void* const rdx_5
    
    if (rax_2 s>= r9)
        rdx_5 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_2)
        uint32_t rdx_3 = zx.d(temp0_1)
        int32_t rax_4 = temp1_1 + rdx_3
        rdx_5 = *(r11 + (sx.q(rax_4 s>> 0x10) << 3)) + sx.q(zx.d(rax_4.w) - rdx_3) * 0x18
    
    if (((*(rdx_5 + 8) u>> 0x1d).b & 1) != 0)
        rax.b = 0
    else
        rax.b = 1

if (rax.b != 0)
    result = *(result_1 + 0x250)

if (result != 0)
    int32_t rax_10 = *(result + 0xc)
    void* const rdx_9
    
    if (rax_10 s>= r9)
        rdx_9 = nullptr
    else
        int16_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rax_10)
        uint32_t rdx_7 = zx.d(temp2_1)
        int32_t rax_12 = temp3_1 + rdx_7
        rdx_9 = *(r11 + (sx.q(rax_12 s>> 0x10) << 3)) + sx.q(zx.d(rax_12.w) - rdx_7) * 0x18
    
    if (((*(rdx_9 + 8) u>> 0x1d).b & 1) == 0)
        return result

return nullptr
