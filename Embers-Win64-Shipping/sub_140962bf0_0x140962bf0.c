// 函数: sub_140962bf0
// 地址: 0x140962bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
void var_28

if (arg3 != &var_28)
    int64_t rcx = *arg3
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    *arg3 = 0
    arg3[1] = 0

if (*(arg1 + 0x48) s<= 0)
    void* rax
    rax.b = 0
    return rax

int64_t rdi = 0
char rax_1

do
    void* rbp_1 = *(arg1 + 0x40)
    int64_t* rcx_1 = *(rbp_1 + rdi + 0x30)
    int64_t r8 = *rcx_1
    rax_1 = (*r8)(rcx_1, arg2, r8)
    
    if (rax_1 != 0)
        sub_140597df0(arg3, rbp_1 + 0x50 + rdi)
        return 1
    
    i += 1
    rdi += 0x78
while (i s< *(arg1 + 0x48))

return rax_1
