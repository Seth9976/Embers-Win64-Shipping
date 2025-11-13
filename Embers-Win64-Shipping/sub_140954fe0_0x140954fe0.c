// 函数: sub_140954fe0
// 地址: 0x140954fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t var_18 = 0
int64_t var_10 = 0

if (&var_18 != arg2)
    int64_t rbp_1 = *arg2
    int32_t rdi_1 = arg2[1].d
    var_10.d = rdi_1
    
    if (rdi_1 != 0)
        sub_1405a4c70(&var_18, rdi_1, 0)
        memcpy(var_18, rbp_1, rdi_1 * 2)

int64_t result = sub_1405a9f90(arg1, &var_18)
uint64_t rcx_3 = var_18

if (rcx_3 != 0)
    result = sub_140a74f90(rcx_3)

int64_t rcx_4 = *arg2

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4) __tailcall
