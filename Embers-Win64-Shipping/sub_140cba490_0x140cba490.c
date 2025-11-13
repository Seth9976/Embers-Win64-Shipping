// 函数: sub_140cba490
// 地址: 0x140cba490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_28
sub_140bd59a0(&var_28, arg3)
void* rax = sub_140be0d80(2, &var_28)
int64_t* rbx_1

if (rax != 0)
    int64_t var_38
    int32_t arg_20
    sub_14062d6e0(rax, &arg_20, sub_140b63b70(arg2, &var_38))
    int64_t rcx_3 = sx.q(arg_20)
    void* const rdx_4
    
    if (rcx_3.d == 0xffffffff)
        rdx_4 = nullptr
    else
        rdx_4 = *rax + rcx_3 * 0x28
    
    int64_t rcx_5 = var_38
    rbx_1 = rdx_4 + 0x10
    
    if (rdx_4 == 0)
        rbx_1 = nullptr
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)

if (rax == 0 || rbx_1 == 0)
    *arg1 = 0
else if (rbx_1[1].d == 0)
    sub_140b58260(arg1, &data_142d40450, 1)
else
    sub_140b58260(arg1, *rbx_1, 1)

return arg1
