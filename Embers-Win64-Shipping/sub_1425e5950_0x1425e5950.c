// 函数: sub_1425e5950
// 地址: 0x1425e5950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x28)
int64_t* rcx_1 = *arg3
int128_t* rax_1 = (*(*rcx_1 + 0x48))(rcx_1)
int64_t result = sub_1409146f0(arg1 + 0x18, rax_1)

if (result.d == 0xffffffff)
    int64_t rdi_1 = sx.q(*(arg1 + 0x20))
    int32_t rcx_3 = (rdi_1 + 1).d
    *(arg1 + 0x20) = rcx_3
    
    if (rcx_3 s> *(arg1 + 0x24))
        sub_1405a4f90(arg1 + 0x18)
    
    result = *(arg1 + 0x18)
    *(result + rdi_1 * 0x10) = *rax_1

if (arg1 == -0x28)
    return result

return LeaveCriticalSection(arg1 + 0x28)
