// 函数: sub_1420962c0
// 地址: 0x1420962c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_58 = 0xffffffff
int64_t var_54 = 0
void* i_1 = nullptr
int32_t var_40 = 0
void* i = nullptr
int32_t r15 = 0
EnterCriticalSection(arg1 + 0x68)
int32_t arg_20
sub_14093f560(arg1 + 0x18, &arg_20, *arg2)
int64_t rdi_1 = sx.q(arg_20)

if (rdi_1.d != 0xffffffff)
    sub_142079d10(&var_58, rdi_1 * 0x30 + *(arg1 + 0x18) + 8)
    sub_14209eb70(arg1 + 0x18, rdi_1.d)
    r15 = var_40
    i = i_1

if (arg1 != -0x68)
    LeaveCriticalSection(arg1 + 0x68)

int64_t arg_8 = 0
int64_t rbx_2

if (arg4 != 1)
    rbx_2 = arg_8
else
    arg_8 = *(arg3 + 0x18)
    int16_t* var_88
    sub_140b63b70(&arg_8, &var_88)
    int64_t var_68
    int64_t* rax_4 = sub_140baa460(&var_68, &var_88)
    int16_t* const rbx_1 = &data_142d40450
    
    if (rax_4[1].d != 0)
        *rax_4
    
    int16_t* const r8_1 = &data_142d40450
    int32_t var_80
    
    if (var_80 != 0)
        r8_1 = var_88
    
    int16_t* var_78
    sub_140a2e390(&var_78, u"%s.%s", r8_1)
    int32_t var_70
    
    if (var_70 != 0)
        rbx_1 = var_78
    
    sub_140b58260(&arg_8, rbx_1, 1)
    int16_t* rcx_9 = var_78
    rbx_2 = arg_8
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    int64_t rcx_10 = var_68
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    int16_t* rcx_11 = var_88
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)

for (void* rsi_3 = (sx.q(r15) << 6) + i; i != rsi_3; i += 0x40)
    void* rax_5 = *(i + 0x10)
    void* rcx_12 = i + 0x20
    arg_8 = rbx_2
    int64_t arg_10 = var_54
    
    if (rax_5 != 0)
        rcx_12 = rax_5
    
    (*i)((*(*rcx_12 + 8))(rcx_12), &arg_10, &arg_8)

return sub_1405d5770(&i_1)
