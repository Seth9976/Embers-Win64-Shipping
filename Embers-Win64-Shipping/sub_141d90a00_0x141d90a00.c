// 函数: sub_141d90a00
// 地址: 0x141d90a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = nullptr
void** const var_38 = &data_1432388e8
uint64_t var_28 = 0
int64_t var_20 = 0
int64_t var_18 = 0
int64_t var_48
char rax_1 = sub_140b12f50(sub_141d8ff60(&var_48, arg2))
int64_t rcx_2 = var_48
int64_t rdi
rdi.b = rax_1 == 0

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

if (rdi.b == 0)
    int32_t var_30_1 = 0
    
    if (&var_28 != arg2)
        int32_t rdi_1 = arg2[1].d
        int64_t rsi_1 = *arg2
        int32_t r8 = var_20:4.d
        var_20.d = rdi_1
        
        if (rdi_1 != 0 || r8 != 0)
            sub_1405a4c70(&var_28, rdi_1, r8)
            memcpy(var_28, rsi_1, rdi_1 * 2)
else
    int32_t var_30 = 2

if (arg4[1].d != 0)
    rbx = *arg4

int64_t result = (*(*rbx + 0x48))(rbx, &var_38)
uint64_t rcx_6 = var_28

if (rcx_6 == 0)
    return result

return sub_140a74f90(rcx_6)
