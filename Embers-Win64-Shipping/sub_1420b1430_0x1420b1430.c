// 函数: sub_1420b1430
// 地址: 0x1420b1430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
int64_t* rax = sub_140596d10(&var_48, arg2)
uint64_t var_38 = 0
int64_t var_30 = 0

if (&var_38 != rax)
    int64_t rbp_1 = *rax
    int32_t rdi_1 = rax[1].d
    var_30.d = rdi_1
    
    if (rdi_1 != 0)
        sub_1405a4c70(&var_38, rdi_1, 0)
        memcpy(var_38, rbp_1, rdi_1 * 2)

int32_t r8
int32_t var_28 = r8
char r9
char var_24 = r9
int64_t result = sub_1405a9f90(arg1 + 0x248, &var_38)
uint64_t rcx_4 = var_38

if (rcx_4 != 0)
    result = sub_140a74f90(rcx_4)

int64_t rcx_5 = *rax

if (rcx_5 != 0)
    result = sub_140a74f90(rcx_5)

int64_t rcx_6 = *arg2

if (rcx_6 == 0)
    return result

return sub_140a74f90(rcx_6) __tailcall
