// 函数: sub_140d3cab0
// 地址: 0x140d3cab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = arg1[1]
int64_t* r8 = nullptr
int32_t r10 = data_143e1d9b4
int64_t rbx = data_143e1d9a0
void* const rax_8

if (r11 == 0)
    rax_8 = nullptr
else
    int32_t rax_1 = *arg1
    
    if (rax_1 s< 0 || rax_1 s>= r10)
        rax_8 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_1)
        uint32_t rdx_2 = zx.d(temp0_1)
        int32_t rax_3 = temp1_1 + rdx_2
        rax_8 = *(rbx + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_2) * 0x18
        
        if (rax_8 == 0)
            rax_8 = nullptr
        else if (*(rax_8 + 0x10) != r11)
            rax_8 = nullptr

if (rax_8 == 0)
    return 0

int32_t rax_9 = *arg1

if (rax_9 s< r10)
    int16_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rax_9)
    uint32_t rdx_5 = zx.d(temp2_1)
    int32_t rax_11 = temp3_1 + rdx_5
    r8 = *(rbx + (sx.q(rax_11 s>> 0x10) << 3)) + sx.q(zx.d(rax_11.w) - rdx_5) * 0x18

return *r8
