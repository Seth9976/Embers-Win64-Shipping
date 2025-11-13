// 函数: sub_1418aa220
// 地址: 0x1418aa220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 8)
int32_t rax = *(arg1 + 0x60)
*(arg1 + 0x60) += 1
int64_t* var_18 = arg2
int32_t var_28 = rax + 1
int32_t* var_20 = &var_28
void var_24
sub_14189bad0(arg1 + 0x68, &var_24, &var_20, nullptr)
int32_t rdi_1 = var_28

if (arg1 != -8)
    LeaveCriticalSection(arg1 + 8)

if (*arg2 != 0)
    void* rdx_1 = arg2[2]
    void* rcx_3 = &arg2[4]
    
    if (rdx_1 != 0)
        rcx_3 = rdx_1
    
    int64_t rdx_2 = *rcx_3
    (*(rdx_2 + 0x10))(rcx_3, rdx_2)

return zx.q(rdi_1)
