// 函数: sub_14074a480
// 地址: 0x14074a480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx = 0
int32_t rsi = (data_143cdfdd8.q).d
int32_t rdi = arg2[1].d
int32_t r13 = 1
uint64_t var_58
uint64_t var_48
uint64_t rsi_2

if (rsi s> 1)
    int32_t r14_1 = rdi - 1
    
    if (rdi == 0)
        r14_1 = 0
    
    int32_t rax_1
    
    if (rsi == 0)
        rax_1 = 1
    
    if (rsi != 0 || r14_1 == 0)
        rax_1 = 0
    
    int64_t rdi_1 = data_143cdfdd0
    int32_t rcx_2 = r14_1 + rax_1
    var_58 = 0
    
    if (rsi != 0 || rcx_2 != 0)
        sub_1405a4c70(&var_58, rsi + rcx_2, 0)
        memcpy(var_58, rdi_1, rsi * 2)
    else
        int32_t var_4c_1 = 0
    
    sub_140a20ba0(&var_58, *arg2, r14_1)
    rsi_2 = var_58
    rdi = rsi
    var_58 = 0
    int32_t var_50_1
    var_50_1.q = 0
else
    int64_t rsi_1 = *arg2
    var_48 = 0
    
    if (rdi != 0)
        sub_1405a4c70(&var_48, rdi, 0)
        rsi_2 = var_48
        memcpy(rsi_2, rsi_1, rdi * 2)
    else
        rsi_2 = 0

int16_t* const r12 = &data_142d40450
int16_t* const r8_5 = &data_142d40450

if (rdi != 0)
    r8_5 = rsi_2

sub_1419c6ab0(arg1 + 8, arg3, r8_5, 0)

if (rsi_2 != 0)
    sub_140a74f90(rsi_2)

int32_t rsi_3 = (data_143cdfdc8.q).d
int32_t rdi_2 = arg2[1].d
bool cond:3_1

if (rsi_3 s> 1)
    int32_t r14_2 = rdi_2 - 1
    
    if (rdi_2 == 0)
        r14_2 = 0
    
    if (rsi_3 != 0 || r14_2 == 0)
        r13 = 0
    
    int64_t rdi_4 = data_143cdfdc0
    int32_t rax_2 = r14_2 + r13
    var_58 = 0
    
    if (rsi_3 != 0 || rax_2 != 0)
        sub_1405a4c70(&var_58, rsi_3 + rax_2, 0)
        memcpy(var_58, rdi_4, rsi_3 * 2)
    else
        int32_t var_4c_2 = 0
    
    sub_140a20ba0(&var_58, *arg2, r14_2)
    uint64_t rax_3 = var_58
    var_58 = 0
    rbx = rax_3
    int32_t var_50_2
    var_50_2.q = 0
    cond:3_1 = rsi_3 != 0
else
    int64_t rsi_4 = *arg2
    var_48 = 0
    cond:3_1 = rdi_2 != 0
    
    if (rdi_2 != 0)
        sub_1405a4c70(&var_48, rdi_2, 0)
        rbx = var_48
        memcpy(rbx, rsi_4, rdi_2 * 2)
        cond:3_1 = rdi_2 != 0

if (cond:3_1)
    r12 = rbx

int64_t result = sub_1419c7530(arg1 + 0xe, arg3, r12, 0)

if (rbx == 0)
    return result

return sub_140a74f90(rbx)
