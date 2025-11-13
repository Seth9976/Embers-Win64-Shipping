// 函数: sub_142bae100
// 地址: 0x142bae100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg1)
int32_t r9_2 = (temp1 ^ temp0) - temp0
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(arg2)
int32_t rax_4 = (temp3 ^ temp2) - temp2
int32_t r8_1 = zx.d((r9_2 s>> 0x10).w) * rax_4
uint32_t rdx_3 = r8_1 u>> 0x10
int32_t rcx_4 = zx.d(r9_2.w) * rax_4 + (r8_1 << 0x10) + 0x2000
uint32_t rax_5 = rdx_3 + 1

if (rcx_4 u>= (r8_1 << 0x10) + 0x2000)
    rax_5 = rdx_3

uint32_t result = rax_5 << 0x12 | rcx_4 u>> 0xe

if ((arg1 ^ arg2) s>= 0)
    return result

return neg.d(result)
