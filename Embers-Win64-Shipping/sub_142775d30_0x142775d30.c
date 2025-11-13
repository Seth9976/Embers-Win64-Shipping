// 函数: sub_142775d30
// 地址: 0x142775d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rbx = 0
int32_t arg_8 = 0
int64_t var_18
void* const result

if (*(arg1 + 8) == 0)
    result = nullptr
else
    int64_t* rax_1 = sub_140d30800(arg1 + 8, &var_18)
    int16_t* rdi
    
    if (rax_1[1].d == 0)
        rdi = &data_142d40450
    else
        rdi = *rax_1
    
    result = sub_140d2f6f0(sub_140bdf2e0(), 0, rdi, 0, 0, 0, 1, 0)
    rbx = 1

if ((rbx & 1) != 0)
    int64_t rcx_2 = var_18
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)

if (result == 0)
    return sub_142776620() __tailcall

return result
