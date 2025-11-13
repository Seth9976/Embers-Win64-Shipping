// 函数: sub_142022470
// 地址: 0x142022470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_1423de540(data_143f5b298, arg1, 1)
int64_t result = 0
int64_t var_18 = 0
int64_t rcx_1 = 0
int64_t var_10 = 0

if (rax != 0)
    void* rax_1 = sub_142021e50(*(rax + 0x188), arg2, &var_18, arg3)
    rcx_1 = var_18
    
    if (rax_1 != 0)
        result = *(rax_1 + 0x30)

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

return result
