// 函数: sub_140a43bc0
// 地址: 0x140a43bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0xd0)
int64_t* result = nullptr
int64_t var_28 = 0
int32_t rdx = 0
int32_t var_20 = 0
int64_t rbp = 0
int32_t var_1c = 0
int32_t r8 = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rdi_1 = -1
    
    do
        rdi_1 += 1
    while (arg2[rdi_1] != 0)
    
    if (rdi_1.d + 1 s> 0)
        sub_1405947f0(&var_28, rdi_1.d + 1)
        r8 = var_1c
        rdx = var_20
        rbp = var_28
    
    int32_t rax_1 = rdi_1.d + 1 + rdx
    int32_t var_20_1 = rax_1
    
    if (rax_1 s> r8)
        sub_140594770(&var_28)
        rbp = var_28
    
    memcpy(rbp, arg2, (rdi_1.d + 1) * 2)

int32_t arg_8
sub_140a45180(arg1 + 8, &arg_8, &var_28)
int64_t rax_2 = sx.q(arg_8)

if (rax_2.d != 0xffffffff)
    int64_t rcx_6 = rax_2 << 5
    
    if (rcx_6 != neg.q(*(arg1 + 8)))
        result = *(rcx_6 + *(arg1 + 8) + 0x10)

if (rbp != 0)
    sub_140a74f90(rbp)

if (arg1 != -0xd0)
    LeaveCriticalSection(arg1 + 0xd0)

if (result != 0 && (((*(*result + 0x18))(result) u>> 4).b & 1) != 0)
    return nullptr

return result
