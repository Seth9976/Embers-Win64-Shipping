// 函数: sub_14188c940
// 地址: 0x14188c940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *arg1
int32_t arg_10 = arg2
EnterCriticalSection(rdi + 0x148)
int64_t r8
int64_t var_10 = r8
int32_t* var_18 = &arg_10
void arg_8
int32_t* result = sub_14185a450(rdi + 0x170, &arg_8, &var_18, nullptr)

if (rdi == -0x148)
    return result

return LeaveCriticalSection(rdi + 0x148)
