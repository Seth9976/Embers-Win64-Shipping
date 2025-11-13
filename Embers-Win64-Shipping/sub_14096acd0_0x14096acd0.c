// 函数: sub_14096acd0
// 地址: 0x14096acd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_140926e00(arg1 + 0x2b8, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
int64_t rcx_1

if (rax.d == 0xffffffff)
    rcx_1 = 0
else
    rcx_1 = *(arg1 + 0x2b8) + rax * 0x28

int64_t rax_2 = rcx_1 + 0x10

if (rcx_1 == 0)
    rax_2 = 0

if (rax_2 != 0)
    return rax_2

int64_t* var_28 = nullptr
int64_t* var_10_1 = &var_28
int32_t var_20_1 = 0
int64_t* var_18 = arg2
sub_140946890(arg1 + 0x2b8, &arg_8, &var_18, nullptr)
sub_140926e00(arg1 + 0x2b8, &arg_8, arg2)
int64_t rax_3 = sx.q(arg_8)
int64_t rcx_4

if (rax_3.d == 0xffffffff)
    rcx_4 = 0
else
    rcx_4 = *(arg1 + 0x2b8) + rax_3 * 0x28

int64_t rbx_1 = rcx_4 + 0x10
int64_t* rcx_5 = var_28

if (rcx_4 == 0)
    rbx_1 = 0

if (var_20_1 == 0)
label_14096adc3:
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
else if (rcx_5 != 0)
    (*(*rcx_5 + 0x38))(rcx_5, 0)
    rcx_5 = var_28
    
    if (rcx_5 != 0)
        int64_t* rax_6 = sub_140a84c80(rcx_5, 0, 0)
        rcx_5 = rax_6
        var_28 = rax_6
    
    int32_t var_20_2 = 0
    goto label_14096adc3

return rbx_1
