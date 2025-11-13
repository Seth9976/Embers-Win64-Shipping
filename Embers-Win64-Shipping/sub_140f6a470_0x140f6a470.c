// 函数: sub_140f6a470
// 地址: 0x140f6a470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg1 + 0x790)
int32_t rdx = 0
bool cond:0 = *(arg1 + 0x798) == 1
int32_t arg_8 = r8
int32_t rax
rax.b = cond:0

if (rax + *(arg1 + 0x794) s>= 0)
    rdx = rax + *(arg1 + 0x794)

int32_t arg_c = rdx
void* rax_2 = arg1 + 0x780

if (*(arg1 + 0x788) == 0)
    rax_2 = &arg_8

uint64_t result = *rax_2

if (result.d == r8 && (result u>> 0x20).d == rdx)
    result.b = 0
    return result

result.b = 1
return result
