// 函数: sub_142320020
// 地址: 0x142320020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f465f0(arg1)
void* rax = *(arg1 + 0xa8)
int32_t rdi = *(arg1 + 0xc)
void* const rcx_1

if (rax != 0)
    rcx_1 = *(rax + 0x1f8)
else
    rax = sub_141ee69e0(arg1)
    
    if (rax == 0)
        rcx_1 = nullptr
    else
        rcx_1 = *(rax + 0x1f8)

if (rcx_1 != 0)
    sub_142266080(rcx_1, rdi)

void* arg_8 = arg1
void** var_10 = &arg_8
int64_t (* var_18)(int64_t* arg1) = j_sub_142308250
return sub_14226a780(arg1, &var_18)
