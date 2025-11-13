// 函数: sub_1405fc3e0
// 地址: 0x1405fc3e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
void* arg_8 = arg1 + 0x28
EnterCriticalSection(arg1 + 0x28)
void* rax = *(arg1 + 0x60)
int32_t rdi_1

if (rax != 0)
    int32_t rax_2 = (*(*(rax + 0x10) + 0x30))(rax + 0x10, 0x12d, &data_1434cb1d0, 0, 0)
    rdi_1 = rax_2
    
    if (rax_2 s>= 0)
        rdi_1 = (*(*(rax + 0x10) + 0x30))(rax + 0x10, 0x131, &data_1434cb1d0, 0, 0)
else
    rdi_1 = -0x3ff2c17b

if (arg1 != -0x28)
    LeaveCriticalSection(arg1 + 0x28)

return zx.q(rdi_1)
