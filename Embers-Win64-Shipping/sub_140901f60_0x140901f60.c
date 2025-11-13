// 函数: sub_140901f60
// 地址: 0x140901f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x120)
int64_t var_28 = *arg2
int32_t r8
int32_t var_20 = r8
void* result = nullptr
int32_t arg_18
sub_140902030(arg1 + 0xc0, &arg_18, &var_28)
int64_t rax_1 = sx.q(arg_18)
void* const rcx_4

if (rax_1.d == 0xffffffff)
    rcx_4 = nullptr
else
    rcx_4 = (rax_1 << 5) + *(arg1 + 0xc0)

void** rdi_1 = rcx_4 + 0x10

if (rcx_4 == 0)
    rdi_1 = nullptr

if (rdi_1 != 0)
    void* r8_2 = *rdi_1
    
    if (r8_2 != 0)
        result = r8_2 + 8
        sub_140906bc0(arg1, arg2, r8_2)
        sub_1409048f0(arg1, arg2, *rdi_1)

if (arg1 != -0x120)
    LeaveCriticalSection(arg1 + 0x120)

return result
