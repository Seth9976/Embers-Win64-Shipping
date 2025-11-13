// 函数: sub_14067a5a0
// 地址: 0x14067a5a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x64)
int64_t var_38
sub_140a2e390(&var_38, u" Line: %u Ch: %u", zx.q(*(arg1 + 0x60)))
int32_t r14 = arg2[1].d
int64_t rsi
int32_t r14_1
int32_t r15
int32_t var_30

if (r14 s> 1)
    int32_t rax_1
    int32_t rsi_2
    
    if (var_30 == 0)
        rsi_2 = 0
        rax_1 = 0
    else
        rsi_2 = var_30 - 1
        rax_1 = rsi_2
    
    int64_t rbx_1 = *arg2
    int64_t var_48 = 0
    sub_1405a4c70(&var_48, r14 + rax_1, 0)
    memcpy(var_48, rbx_1, r14 * 2)
    sub_140a20ba0(&var_48, var_38, rsi_2)
    rsi = var_48
    r14_1 = r14
    int32_t var_3c
    r15 = var_3c
    var_48 = 0
    int32_t var_40_1
    var_40_1.q = 0
else
    rsi = var_38
    r14_1 = var_30
    int32_t var_2c
    r15 = var_2c
    var_38 = 0
    var_30.q = 0
void var_28
void* result = &var_28

if (arg1 + 0x38 != &var_28)
    int64_t rcx_4 = *(arg1 + 0x38)
    
    if (rcx_4 != 0)
        result = sub_140a74f90(rcx_4)
    
    *(arg1 + 0x38) = rsi
    *(arg1 + 0x40) = r14_1
    *(arg1 + 0x44) = r15
else if (rsi != 0)
    result = sub_140a74f90(rsi)

int64_t rcx_6 = var_38

if (rcx_6 == 0)
    return result

return sub_140a74f90(rcx_6)
