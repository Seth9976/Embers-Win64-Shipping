// 函数: sub_1407e75f0
// 地址: 0x1407e75f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = (data_143ce2d68.q).d
int32_t rax = 1
int32_t rdi = arg2[1].d
int16_t* rbx = nullptr
int16_t* var_58
uint64_t var_48
uint64_t r12

if (rsi s> 1)
    int32_t r15_1 = rdi - 1
    
    if (rdi == 0)
        r15_1 = 0
    
    if (rsi != 0 || r15_1 == 0)
        rax = 0
    
    int64_t rdi_1 = data_143ce2d60
    int32_t rcx_2 = r15_1 + rax
    var_58 = nullptr
    
    if (rsi != 0 || rcx_2 != 0)
        sub_1405a4c70(&var_58, rcx_2 + rsi, 0)
        memcpy(var_58, rdi_1, rsi * 2)
    else
        int32_t var_4c_1 = 0
    
    sub_140a20ba0(&var_58, *arg2, r15_1)
    r12 = var_58
    rdi = rsi
    rax = 1
else
    int64_t rsi_1 = *arg2
    r12 = 0
    var_48 = 0
    
    if (rdi != 0)
        sub_1405a4c70(&var_48, rdi, 0)
        r12 = var_48
        memcpy(r12, rsi_1, rdi * 2)
        rax = 1

int32_t r15_2 = (data_143ce2d78.q).d
int32_t rsi_2 = arg2[1].d
int16_t* r13_1
int16_t* r15_3

if (r15_2 s> 1)
    int32_t r13_2 = rsi_2 - 1
    
    if (rsi_2 == 0)
        r13_2 = 0
    
    if (r15_2 != 0 || r13_2 == 0)
        rax = 0
    
    int64_t rsi_3 = data_143ce2d70
    int32_t rcx_8 = rax + r13_2
    var_58 = nullptr
    
    if (r15_2 != 0 || rcx_8 != 0)
        sub_1405a4c70(&var_58, r15_2 + rcx_8, 0)
        memcpy(var_58, rsi_3, r15_2 * 2)
    else
        int32_t var_4c_2 = 0
    
    sub_140a20ba0(&var_58, *arg2, r13_2)
    r15_3 = var_58
    rsi_2 = r15_2
    r13_1 = r15_3
else
    int64_t r13 = *arg2
    r15_3 = nullptr
    var_48 = 0
    
    if (rsi_2 != 0)
        sub_1405a4c70(&var_48, rsi_2, 0)
        r15_3 = var_48
        memcpy(r15_3, r13, rsi_2 * 2)
        r13_1 = r15_3
    else
        r13_1 = nullptr

uint64_t r8_10 = &data_142d40450

if (rdi != 0)
    r8_10 = r12

sub_1419c7530(arg1 + 8, arg3, r8_10, 0)
int16_t* const r8_11 = &data_142d40450

if (rsi_2 != 0)
    r8_11 = r13_1

sub_1419c7530(arg1 + 0xc, arg3, r8_11, 0)
int32_t r13_3 = (data_143ce2d88.q).d
int32_t rdi_2 = arg2[1].d
bool cond:3_1

if (r13_3 s> 1)
    int32_t rsi_5 = rdi_2 - 1
    
    if (rdi_2 == 0)
        rsi_5 = 0
    
    int32_t rax_1
    
    if (r13_3 == 0)
        rax_1 = r13_3 + 1
    
    if (r13_3 != 0 || rsi_5 == 0)
        rax_1 = 0
    
    int64_t rdi_4 = data_143ce2d80
    int32_t rcx_18 = rax_1 + rsi_5
    var_58 = nullptr
    
    if (r13_3 != 0 || rcx_18 != 0)
        sub_1405a4c70(&var_58, rcx_18 + r13_3, 0)
        memcpy(var_58, rdi_4, r13_3 * 2)
    else
        int32_t var_4c_3 = 0
    
    sub_140a20ba0(&var_58, *arg2, rsi_5)
    int16_t* rax_2 = var_58
    var_58 = nullptr
    rbx = rax_2
    int32_t var_50_3
    var_50_3.q = 0
    cond:3_1 = r13_3 != 0
else
    int64_t rsi_4 = *arg2
    var_48 = 0
    cond:3_1 = rdi_2 != 0
    
    if (rdi_2 != 0)
        sub_1405a4c70(&var_48, rdi_2, 0)
        rbx = var_48
        memcpy(rbx, rsi_4, rdi_2 * 2)
        cond:3_1 = rdi_2 != 0

int16_t* r8_17 = &data_142d40450

if (cond:3_1)
    r8_17 = rbx

int64_t result = sub_1419c6ab0(arg1 + 0x10, arg3, r8_17, 0)

if (rbx != 0)
    result = sub_140a74f90(rbx)

if (r15_3 != 0)
    result = sub_140a74f90(r15_3)

if (r12 == 0)
    return result

return sub_140a74f90(r12)
