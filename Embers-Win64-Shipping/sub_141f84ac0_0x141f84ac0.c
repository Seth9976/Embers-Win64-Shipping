// 函数: sub_141f84ac0
// 地址: 0x141f84ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rdi = 0
int64_t* rcx = *(arg1 + 0x28)
int32_t arg_8 = 0
int64_t var_18
int16_t* const rax_2

if (rcx == 0)
    rax_2 = u"NULL CONNECTION"
else
    int64_t* rax_1 = (*(*rcx + 0x280))(rcx, &var_18)
    
    if (rax_1[1].d == 0)
        rax_2 = &data_142d40450
        rdi = 1
    else
        rax_2 = *rax_1
        rdi = 1

*(arg1 + 0x30)
int16_t* const var_28 = rax_2
sub_140a2e390(arg2, u"[UChannel] ChIndex: %d, Closing: %d %s", zx.q(*(arg1 + 0x34)))

if ((rdi & 1) != 0)
    int64_t rcx_2 = var_18
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)

return arg2
