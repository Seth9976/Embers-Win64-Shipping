// 函数: sub_140b11c80
// 地址: 0x140b11c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg2[1].d
int32_t rdi = 0
int64_t rsi = *arg2
int64_t var_18 = 0
int32_t var_10 = rbx

if (rbx != 0)
    sub_1405a4c70(&var_18, rbx, 0)
    memcpy(var_18, rsi, rbx * 2)
else
    int32_t var_c_1 = 0

sub_140b65060()
int64_t var_28 = 0
int32_t rcx_2 = 0
int32_t var_1c = 0
int32_t var_20 = 0

if (data_143e189c0 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while ((&data_143e189c0)[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_28, rbx_1.d + 1)
        rcx_2 = var_1c
        rdi = var_20
    
    int32_t rax_1 = rbx_1.d + 1 + rdi
    int32_t var_20_1 = rax_1
    
    if (rax_1 s> rcx_2)
        sub_140594770(&var_28)
    
    UnDecorator::getReferenceType(var_28, &data_143e189c0, (rbx_1.d + 1) * 2)

sub_140b11da0(arg1, &var_28, &var_18)
int64_t rcx_7 = var_28

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t rcx_8 = var_18

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

return arg1
