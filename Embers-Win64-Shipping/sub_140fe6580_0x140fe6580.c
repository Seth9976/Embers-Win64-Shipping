// 函数: sub_140fe6580
// 地址: 0x140fe6580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 0x10)
int64_t var_28 = *(rdx + 0xa0)
int32_t var_20 = *(arg1 + 0x18)
void* rdi = *(rdx + 0x80)
EnterCriticalSection(rdi + 0x2658)
int64_t* var_18 = &var_28
void* var_10 = arg1 + 0x20
void arg_8
int32_t* result = sub_140fd4a30(rdi + 0x2608, &arg_8, &var_18, nullptr)

if (rdi != -0x2658)
    result = LeaveCriticalSection(rdi + 0x2658)

int64_t* rcx_3 = *(arg1 + 0x20)

if (rcx_3 == 0)
    return result

return (*(*rcx_3 + 0x10))(rcx_3)
