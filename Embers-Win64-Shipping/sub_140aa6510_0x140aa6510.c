// 函数: sub_140aa6510
// 地址: 0x140aa6510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 8)
int32_t arg_8
sub_1405e21c0(arg1 + 0xd0, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
void* const rcx_4

if (rax.d == 0xffffffff)
    rcx_4 = nullptr
else
    rcx_4 = (rax << 5) + *(arg1 + 0xd0)

int16_t* rdx_1 = rcx_4 + 0x10

if (rcx_4 == 0)
    rdx_1 = nullptr

int16_t result

if (rdx_1 == 0)
    int64_t* var_18 = arg2
    arg_8.w = 1
    int32_t* var_10_1 = &arg_8
    void arg_18
    result = sub_140a92090(arg1 + 0xd0, &arg_18, &var_18, nullptr)
else
    result = *rdx_1
    int16_t i
    
    do
        i = result
        result += 1
    while (i == 0xffff)
    *rdx_1 = result

if (arg1 == -8)
    return result

return LeaveCriticalSection(arg1 + 8)
