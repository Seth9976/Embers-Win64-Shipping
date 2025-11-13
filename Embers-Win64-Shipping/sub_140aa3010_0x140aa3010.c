// 函数: sub_140aa3010
// 地址: 0x140aa3010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140abd990(arg1 + 0x10)
uint32_t rcx_1 = zx.d(*(arg1 + 0x28))
int64_t var_18

if (rcx_1 == 0)
    int64_t* rcx_5 = *(arg1 + 0x10)
    int64_t* rax_4 = (*(*rcx_5 + 0x28))(rcx_5)
    int64_t r8_1 = *rax_4
    (*(r8_1 + 0x18))(rax_4, &var_18, r8_1)
    sub_140a8e690(arg2, &var_18)
else
    if (rcx_1 != 1)
        *arg2 = 0
        arg2[1] = 0
        return arg2
    
    int64_t* rcx_2 = *(arg1 + 0x10)
    int64_t* rax_2 = (*(*rcx_2 + 0x28))(rcx_2)
    int64_t r8 = *rax_2
    (*(r8 + 0x18))(rax_2, &var_18, r8)
    sub_140a8ef80(arg2, &var_18)

int64_t rcx_8 = var_18

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

return arg2
