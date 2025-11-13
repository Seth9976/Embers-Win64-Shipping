// 函数: sub_1405ff0d0
// 地址: 0x1405ff0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
int64_t rsi = arg2
void* arg_8 = arg1 + 0x20
EnterCriticalSection(arg1 + 0x20)
int32_t rdi_1

if (*(arg1 + 8) == 0)
    int64_t* rcx_1 = *(arg1 + 0x10)
    
    if (rsi u> (*(*rcx_1 + 0x28))(rcx_1))
        int64_t* rcx_2 = *(arg1 + 0x10)
        rsi = (*(*rcx_2 + 0x28))(rcx_2)
    
    int64_t* rcx_3 = *(arg1 + 0x10)
    (*(*rcx_3 + 0x178))(rcx_3, rsi)
    rdi_1 = 0
else
    rdi_1 = 1

if (arg1 != -0x20)
    LeaveCriticalSection(arg1 + 0x20)

return zx.q(rdi_1)
