// 函数: sub_1422c66e0
// 地址: 0x1422c66e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3

if (arg2 != 0 && ((*(arg2 + 0xa4) u>> 1).b & 1) == 0)
    return 0

int16_t* var_38
int32_t var_30

if (arg1 == 0)
    var_38 = nullptr
    var_30 = 0
    sub_1405947f0(&var_38, 5)
    int32_t rax_4 = var_30 + 5
    var_30 = rax_4
    
    if (rax_4 s> 0)
        sub_140594770(&var_38)
    
    UnDecorator::getReferenceType(var_38, u"None", 0xa)
else
    sub_140b63b70(&arg1[5], &var_38)

int64_t var_28
int64_t* rax_5 = sub_140a35790(&var_38, &var_28)
int16_t* const rdi = &data_142d40450
int16_t* rcx_5

if (rax_5[1].d == 0)
    rcx_5 = &data_142d40450
else
    rcx_5 = *rax_5

int32_t rax_6 = sub_140a5ff80(rcx_5, arg4)
int64_t rcx_6 = var_28

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int16_t* rcx_7 = var_38

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t* rax_9 = sub_140a35790((*(*arg1 + 0x60))(arg1, &var_38, 0, 0), &var_28)
int16_t* rcx_10

if (rax_9[1].d == 0)
    rcx_10 = &data_142d40450
else
    rcx_10 = *rax_9

int32_t rax_10 = sub_140a5ff80(rcx_10, rax_6)
int64_t rcx_11 = var_28

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int16_t* rcx_12 = var_38

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

int32_t rbx_1

if (arg2 == 0 || *(arg2 + 0x1358) u>= 4)
    rbx_1 = sub_140b21160(&arg_18, 4, rax_10)
else
    sub_140a2e390(&var_38, u"%i", zx.q(arg_18))
    int16_t* rsi_1 = var_38
    
    if (var_30 != 0)
        rdi = rsi_1
    
    rbx_1 = sub_140a5ff80(rdi, rax_10)
    
    if (rsi_1 != 0)
        sub_140a74f90(rsi_1)

return zx.q(rbx_1)
