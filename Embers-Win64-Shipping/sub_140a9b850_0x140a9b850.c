// 函数: sub_140a9b850
// 地址: 0x140a9b850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

wchar16 const* const rbp = u"false"

if (*arg3 != 0)
    rbp = u"true"

int32_t r14 = 0
int32_t rax = 0
int64_t var_28 = 0
int32_t var_1c = 0
int32_t rdx = 0
int64_t rdi = 0
int32_t var_20 = 0

if (*rbp != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (rbp[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_28, rbx_1.d + 1)
        rax = var_1c
        rdx = var_20
        rdi = var_28
    
    int32_t rsi_1 = rdx + rbx_1.d + 1
    
    if (rsi_1 s> rax)
        sub_140594770(&var_28)
        rdi = var_28
    
    UnDecorator::getReferenceType(rdi, rbp, (rbx_1.d + 1) * 2)
    
    if (rsi_1 != 0)
        r14 = rsi_1 - 1

int64_t result = sub_140a20ba0(arg2, rdi, r14)

if (rdi == 0)
    return result

return sub_140a74f90(rdi) __tailcall
