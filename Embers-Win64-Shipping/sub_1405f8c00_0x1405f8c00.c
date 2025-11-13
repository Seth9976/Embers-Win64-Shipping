// 函数: sub_1405f8c00
// 地址: 0x1405f8c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2

if (arg3 == 0)
    return 0x80004003

void* arg_20 = arg1 + 0x18
EnterCriticalSection(arg1 + 0x18)
void* rcx_1 = *(arg1 + 0x50)
int32_t rdi_1

if (rcx_1 != 0)
    rdi_1 = 0
    int32_t arg_18 = 0
    
    if ((*(*(rcx_1 + 0x10) + 0x40))(rcx_1 + 0x10, &arg_18) s< 0 || arg_18 != arg2)
        rdi_1 = -0x3ff2c94d
    else
        void* rax_4 = *(arg1 + 0x50)
        int64_t* rcx_3 = rax_4 + 0x10
        
        if (rax_4 == 0)
            rcx_3 = nullptr
        
        *arg3 = rcx_3
        (*(*rcx_3 + 8))()
else
    rdi_1 = -0x3ff2c17b

if (arg1 != -0x18)
    LeaveCriticalSection(arg1 + 0x18)

return zx.q(rdi_1)
