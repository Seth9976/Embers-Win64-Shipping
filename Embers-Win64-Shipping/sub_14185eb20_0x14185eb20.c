// 函数: sub_14185eb20
// 地址: 0x14185eb20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg2 + 0x10)
void* rcx = arg2 + 0x20

if (rax != 0)
    rcx = rax

void var_18
int64_t* rax_3 = (*arg2)(&var_18, (*(*rcx + 8))(rcx))
int64_t rsi = *rax_3
*rax_3 = 0
int32_t rdi = rax_3[1].d
int32_t rbx_1 = *(rax_3 + 0xc)
rax_3[1] = 0
sub_141821690(&var_18)
CRITICAL_SECTION* rbp_1 = *arg1
int64_t var_38 = rsi
int64_t var_28 = 0
int32_t var_30 = rdi
int32_t var_2c = rbx_1
int64_t var_20 = 0
sub_1418691e0(rbp_1 + 0x80, &var_38)
sub_1405fc0f0(rbp_1, sub_141821690(&var_38), arg3, arg4)
return sub_141821690(&var_28)
