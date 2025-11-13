// 函数: sub_140d21cd0
// 地址: 0x140d21cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg2 + 0xc)
int64_t r9 = data_143e1d9a0
int16_t temp0
int32_t temp1
temp0:temp1 = sx.q(r8)
uint32_t rdx_1 = zx.d(temp0)
int32_t rax_2 = temp1 + rdx_1
int64_t rcx_2 = sx.q(zx.d(rax_2.w) - rdx_1) * 3
int64_t rax_6 = *(r9 + (sx.q(rax_2 s>> 0x10) << 3))
void* rdx_3 = rax_6 + (rcx_2 << 3)

if ((*(rax_6 + (rcx_2 << 3) + 0xb) & 1) == 0)
    r8 = *(rdx_3 + 0xc)

void* result = nullptr

if (r8 == 0)
    return result

int32_t rax_14

if (r8 s<= 0)
    rax_14 = *(rdx_3 + 0xc)
else
    if (r8 s< data_143e1d9b4)
        int16_t temp3_1
        int32_t temp4_1
        temp3_1:temp4_1 = sx.q(r8)
        uint32_t rdx_5 = zx.d(temp3_1)
        int32_t rax_9 = temp4_1 + rdx_5
        result = *(r9 + (sx.q(rax_9 s>> 0x10) << 3)) + sx.q(zx.d(rax_9.w) - rdx_5) * 0x18
    
    rax_14 = *(result + 0xc)

return sx.q(not.d(rax_14)) * 0x50 + data_143e1d678
