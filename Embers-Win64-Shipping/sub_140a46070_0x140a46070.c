// 函数: sub_140a46070
// 地址: 0x140a46070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_28
int64_t var_18
sub_140b1a660(&var_28, sub_140b1aa20(&var_18))
int64_t rcx_2 = var_18

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_140b21570(&var_28)
int16_t* const rdx_1 = &data_142d40450
int32_t var_20

if (var_20 != 0)
    rdx_1 = var_28

int64_t* rax_1 = sub_140a41c90(&var_18, rdx_1)

if (&var_28 != rax_1)
    int16_t* rcx_5 = var_28
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    var_28 = *rax_1
    *rax_1 = 0
    var_20 = rax_1[1].d
    int32_t var_1c_1 = *(rax_1 + 0xc)
    rax_1[1] = 0

int64_t rcx_7 = var_18

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

var_18 = 0
int32_t var_10 = 0
sub_1405947f0(&var_18, 2)
int32_t rax_4 = var_10 + 2
var_10 = rax_4

if (rax_4 s> 0)
    sub_140594770(&var_18)

sub_1405a7220(var_18, 2, &data_142d63b88, 2, 0x3f)
char rax_5 = sub_140a236f0(&var_28, &var_18, 1)
int64_t rcx_12 = var_18
int64_t* rbx
rbx.b = rax_5 == 0

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

if (rbx.b != 0)
    sub_140a20ba0(&var_28, &data_142d5a024, 1)

int16_t* rbx_1 = var_28
int16_t** result = &var_28

if (arg1 != &var_28)
    int32_t r8_1 = *(arg1 + 0xc)
    arg1[1].d = var_20
    
    if (var_20 != 0 || r8_1 != 0)
        sub_1405a4c70(arg1, var_20, r8_1)
        result = memcpy(*arg1, rbx_1, var_20 * 2)
        rbx_1 = var_28
    else
        *(arg1 + 0xc) = 0

if (rbx_1 == 0)
    return result

return sub_140a74f90(rbx_1)
