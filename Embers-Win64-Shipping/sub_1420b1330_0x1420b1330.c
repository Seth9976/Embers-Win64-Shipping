// 函数: sub_1420b1330
// 地址: 0x1420b1330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_18
int64_t* rax = sub_140596d10(&var_18, arg2)
uint64_t var_28 = 0
int64_t var_20 = 0

if (&var_28 != rax)
    int64_t rbp_1 = *rax
    int32_t rdi_1 = rax[1].d
    var_20.d = rdi_1
    
    if (rdi_1 != 0)
        sub_1405a4c70(&var_28, rdi_1, 0)
        memcpy(var_28, rbp_1, rdi_1 * 2)

int64_t result = sub_1405a9f90(arg1 + 0x228, &var_28)
uint64_t rcx_4 = var_28

if (rcx_4 != 0)
    result = sub_140a74f90(rcx_4)

int64_t rcx_5 = *rax

if (rcx_5 != 0)
    result = sub_140a74f90(rcx_5)

int64_t rcx_6 = *arg2

if (rcx_6 == 0)
    return result

return sub_140a74f90(rcx_6) __tailcall
