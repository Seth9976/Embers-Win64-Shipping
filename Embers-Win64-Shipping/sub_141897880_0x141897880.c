// 函数: sub_141897880
// 地址: 0x141897880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140a3c510(arg1 + 0x20, arg2)
int64_t* rbx_1 = *(*(arg1 + 8) + (sx.q(*(arg1 + 0x10)) << 3) - 8)
int64_t rax_1 = *arg2
int64_t var_48 = rax_1
int64_t var_38 = 0

if (rax_1 != 0)
    void* rax_2 = arg2[2]
    void* rcx_1 = &arg2[4]
    
    if (rax_2 != 0)
        rcx_1 = rax_2
    
    (**rcx_1)(rcx_1, &var_38)

int64_t result = (*(*rbx_1 + 0x20))(rbx_1, &var_48)

if (*arg2 == 0)
    return result

void* rax_5 = arg2[2]
void* rcx_3 = &arg2[4]

if (rax_5 != 0)
    rcx_3 = rax_5

return (*(*rcx_3 + 0x10))(rcx_3)
