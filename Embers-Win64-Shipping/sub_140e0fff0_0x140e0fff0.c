// 函数: sub_140e0fff0
// 地址: 0x140e0fff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x50)
int64_t rdi = sx.q(*(arg1 + 0x38))
int32_t rax = (rdi + 1).d
*(arg1 + 0x38) = rax

if (rax s> *(arg1 + 0x3c))
    sub_1405c5060(arg1 + 0x30)

int64_t* rdi_3 = rdi * 0x50 + *(arg1 + 0x30)
*rdi_3 = *arg2
rdi_3[2] = 0

if (*rdi_3 != 0)
    void* rax_2 = arg2[2]
    void* rcx_2 = &arg2[4]
    
    if (rax_2 != 0)
        rcx_2 = rax_2
    
    (**rcx_2)(rcx_2)

int64_t result = arg2[8]
rdi_3[8] = result

if (arg1 == -0x50)
    return result

return LeaveCriticalSection(arg1 + 0x50)
