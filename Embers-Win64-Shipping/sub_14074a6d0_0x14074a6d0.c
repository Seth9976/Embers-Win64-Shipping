// 函数: sub_14074a6d0
// 地址: 0x14074a6d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx = 0
int32_t rdi = arg2[1].d
int32_t r12 = 1
int32_t r14 = (data_143cdfe08.q).d
uint64_t var_58
uint64_t var_48
uint64_t r14_2

if (r14 s> 1)
    int32_t r15_1 = rdi - 1
    
    if (rdi == 0)
        r15_1 = 0
    
    int32_t rax_1
    
    if (r14 == 0)
        rax_1 = 1
    
    if (r14 != 0 || r15_1 == 0)
        rax_1 = 0
    
    int64_t rdi_1 = data_143cdfe00
    int32_t rcx_2 = r15_1 + rax_1
    var_58 = 0
    
    if (r14 != 0 || rcx_2 != 0)
        sub_1405a4c70(&var_58, r14 + rcx_2, 0)
        memcpy(var_58, rdi_1, r14 * 2)
    else
        int32_t var_4c_1 = 0
    
    sub_140a20ba0(&var_58, *arg2, r15_1)
    r14_2 = var_58
    rdi = r14
    var_58 = 0
    int32_t var_50_1
    var_50_1.q = 0
else
    int64_t r14_1 = *arg2
    var_48 = 0
    
    if (rdi != 0)
        sub_1405a4c70(&var_48, rdi, 0)
        r14_2 = var_48
        memcpy(r14_2, r14_1, rdi * 2)
    else
        r14_2 = 0

int16_t* const r13 = &data_142d40450
int16_t* const r8_5 = &data_142d40450

if (rdi != 0)
    r8_5 = r14_2

sub_1419c6ab0(arg1 + 8, arg3, r8_5, 0)

if (r14_2 != 0)
    sub_140a74f90(r14_2)

int32_t r14_3 = (data_143cdfe18.q).d
int32_t rdi_2 = arg2[1].d
int16_t* r14_5

if (r14_3 s> 1)
    int32_t r15_2 = rdi_2 - 1
    
    if (rdi_2 == 0)
        r15_2 = 0
    
    int32_t rax_2
    
    if (r14_3 == 0)
        rax_2 = 1
    
    if (r14_3 != 0 || r15_2 == 0)
        rax_2 = 0
    
    int64_t rdi_3 = data_143cdfe10
    int32_t rcx_11 = rax_2 + r15_2
    var_58 = 0
    
    if (r14_3 != 0 || rcx_11 != 0)
        sub_1405a4c70(&var_58, rcx_11 + r14_3, 0)
        memcpy(var_58, rdi_3, r14_3 * 2)
    else
        int32_t var_4c_2 = 0
    
    sub_140a20ba0(&var_58, *arg2, r15_2)
    r14_5 = var_58
    rdi_2 = r14_3
    var_58 = 0
    int32_t var_50_2
    var_50_2.q = 0
else
    int64_t r14_4 = *arg2
    var_48 = 0
    
    if (rdi_2 != 0)
        sub_1405a4c70(&var_48, rdi_2, 0)
        r14_5 = var_48
        memcpy(r14_5, r14_4, rdi_2 * 2)
    else
        r14_5 = nullptr

int16_t* r8_11 = &data_142d40450

if (rdi_2 != 0)
    r8_11 = r14_5

sub_1419c6ab0(arg1 + 0xe, arg3, r8_11, 0)

if (r14_5 != 0)
    sub_140a74f90(r14_5)

int32_t r14_6 = (data_143cdfdf8.q).d
int32_t rdi_4 = arg2[1].d
bool cond:5_1

if (r14_6 s> 1)
    int32_t r15_3 = rdi_4 - 1
    
    if (rdi_4 == 0)
        r15_3 = 0
    
    if (r14_6 != 0 || r15_3 == 0)
        r12 = 0
    
    int64_t rdi_6 = data_143cdfdf0
    int32_t rax_3 = r12 + r15_3
    var_58 = 0
    
    if (r14_6 != 0 || rax_3 != 0)
        sub_1405a4c70(&var_58, r14_6 + rax_3, 0)
        memcpy(var_58, rdi_6, r14_6 * 2)
    else
        int32_t var_4c_3 = 0
    
    sub_140a20ba0(&var_58, *arg2, r15_3)
    uint64_t rax_4 = var_58
    var_58 = 0
    rbx = rax_4
    int32_t var_50_3
    var_50_3.q = 0
    cond:5_1 = r14_6 != 0
else
    int64_t rsi_1 = *arg2
    var_48 = 0
    cond:5_1 = rdi_4 != 0
    
    if (rdi_4 != 0)
        sub_1405a4c70(&var_48, rdi_4, 0)
        rbx = var_48
        memcpy(rbx, rsi_1, rdi_4 * 2)
        cond:5_1 = rdi_4 != 0

if (cond:5_1)
    r13 = rbx

int64_t result = sub_1419c7530(arg1 + 0x14, arg3, r13, 0)

if (rbx == 0)
    return result

return sub_140a74f90(rbx)
