// 函数: sub_140e88b20
// 地址: 0x140e88b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x64)
int64_t var_38
sub_140a2e390(&var_38, u" Line: %u Ch: %u", zx.q(*(arg1 + 0x60)))
int32_t rdi = arg2[1].d
int32_t var_30
int32_t rsi = var_30
int32_t rbp
int64_t rdi_1

if (rdi s> 1)
    int32_t rsi_1
    
    if (rsi == 0)
        rsi_1 = 0
    else
        rsi_1 = rsi - 1
    
    int32_t rax_1
    
    if (rdi == 0)
        rax_1 = rdi + 1
    
    if (rdi != 0 || rsi_1 == 0)
        rax_1 = 0
    
    int64_t rbp_1 = *arg2
    int32_t rcx_1 = rax_1 + rsi_1
    int64_t var_48 = 0
    int32_t var_3c
    
    if (rdi != 0 || rcx_1 != 0)
        sub_1405a4c70(&var_48, rdi + rcx_1, 0)
        memcpy(var_48, rbp_1, rdi * 2)
    else
        var_3c = 0
    
    sub_140a20ba0(&var_48, var_38, rsi_1)
    rdi_1 = var_48
    rsi = rdi
    rbp = var_3c
    var_48 = 0
    int32_t var_40_1
    var_40_1.q = 0
else
    rdi_1 = var_38
    int32_t var_2c
    rbp = var_2c
    var_38 = 0
    var_30.q = 0

void var_28
void* result = &var_28

if (arg1 + 0x38 != &var_28)
    int64_t rcx_5 = *(arg1 + 0x38)
    
    if (rcx_5 != 0)
        result = sub_140a74f90(rcx_5)
    
    *(arg1 + 0x38) = rdi_1
    *(arg1 + 0x40) = rsi
    *(arg1 + 0x44) = rbp
else if (rdi_1 != 0)
    result = sub_140a74f90(rdi_1)

int64_t rcx_7 = var_38

if (rcx_7 == 0)
    return result

return sub_140a74f90(rcx_7)
