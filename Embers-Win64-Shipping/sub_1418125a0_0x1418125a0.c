// 函数: sub_1418125a0
// 地址: 0x1418125a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t var_48 = 0
int32_t r8 = 0
int64_t var_40
__builtin_memset(&var_40, 0, 0x19)
int64_t var_30

if (&var_48 != arg2)
    int32_t rbx_1 = arg2[1].d
    int64_t rbp_1 = *arg2
    var_40.d = rbx_1
    
    if (rbx_1 != 0)
        sub_1405a4c70(&var_48, rbx_1, 0)
        memcpy(var_48, rbp_1, rbx_1 * 2)
        r8 = var_30:4.d

uint64_t var_38

if (&var_38 != arg3)
    int32_t rbx_2 = arg3[1].d
    int64_t rdi_1 = *arg3
    var_30.d = rbx_2
    
    if (rbx_2 != 0 || r8 != 0)
        sub_1405a4c70(&var_38, rbx_2, r8)
        memcpy(var_38, rdi_1, rbx_2 * 2)
    else
        var_30:4.d = 0

char r9
char var_28 = r9
char rax_1 = (*(*arg1 + 0xd8))(arg1, &var_48)
uint64_t rcx_5 = var_38

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

uint64_t rcx_6 = var_48

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

return zx.q(rax_1)
