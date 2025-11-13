// 函数: sub_1405fd050
// 地址: 0x1405fd050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2

if (arg3 == 0)
    return 0x80004003

if (arg2 != 0)
    return 0xc00d36b3

if (arg4 != 0)
    return 0x80070057

CRITICAL_SECTION* lpCriticalSection = &arg1[2]
EnterCriticalSection(lpCriticalSection)
int32_t rdi_1 = 0

if (arg1[7] == 0 || arg1[8] == 0 || *arg1[0x15] != 0)
    rdi_1 = -0x3ff2c94b

int64_t* rcx_3 = nullptr
int64_t* var_38 = nullptr

if (rdi_1 s>= 0)
    rdi_1 = (*(*arg3 + 0x148))(arg3, &var_38)
    rcx_3 = var_38

int64_t var_20 = 0
int32_t arg_18 = 0

if (rdi_1 s>= 0)
    int32_t rax_6 = (*(*rcx_3 + 0x18))(rcx_3, &var_20, 0, &arg_18)
    rdi_1 = rax_6
    
    if (rax_6 s>= 0)
        int64_t var_30 = 0
        int64_t rdx_3
        
        if ((*(*arg3 + 0x118))(arg3, &var_30) s>= 0)
            rdx_3 = var_30
        else
            rdx_3 = arg1[0xf]
            var_30 = rdx_3
        
        rdi_1 = (*(*arg1 + 0x108))(arg1, rdx_3, var_20, zx.q(arg_18))
        arg1[0xf] += arg1[0x10]
    
    rcx_3 = var_38

(*(*rcx_3 + 0x20))(rcx_3)
int64_t* rcx_6 = var_38

if (rcx_6 != 0)
    (*(*rcx_6 + 0x10))(rcx_6)

if (lpCriticalSection != 0)
    LeaveCriticalSection(lpCriticalSection)

return zx.q(rdi_1)
