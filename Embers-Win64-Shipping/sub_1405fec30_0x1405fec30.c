// 函数: sub_1405fec30
// 地址: 0x1405fec30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
void* arg_8 = arg1 + 0x20
EnterCriticalSection(arg1 + 0x20)
int32_t rdi_1

if (*(arg1 + 8) == 0)
    if (arg2 != 1)
        int64_t* rcx_3 = *(arg1 + 0x10)
        (*(*rcx_3 + 0x178))(rcx_3, arg3)
    else
        int64_t* rdi_2 = *(arg1 + 0x10)
        int64_t rsi_1 = *rdi_2
        (*(rsi_1 + 0x178))(rdi_2, arg3 + (*(rsi_1 + 0x20))(rdi_2))
    
    if (arg4 != 0)
        int64_t* rcx_4 = *(arg1 + 0x10)
        *arg4 = (*(*rcx_4 + 0x20))(rcx_4)
    
    rdi_1 = 0
else
    rdi_1 = 1

if (arg1 != -0x20)
    LeaveCriticalSection(arg1 + 0x20)

return zx.q(rdi_1)
