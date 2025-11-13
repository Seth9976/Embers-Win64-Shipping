// 函数: sub_14151f7a0
// 地址: 0x14151f7a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const rsi = &data_142d40450
int16_t* rdi

if (arg2[1].d == 0)
    rdi = &data_142d40450
else
    rdi = *arg2

int32_t rcx = 0
int64_t var_18 = 0
int32_t rdx = 0
int64_t var_10 = 0

if (rdi != 0 && *rdi != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (rdi[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_18, rbx_1.d + 1)
        rdx = var_10:4.d
        rcx = var_10.d
    
    int32_t rax_1 = rbx_1.d + 1 + rcx
    var_10.d = rax_1
    
    if (rax_1 s> rdx)
        sub_140594770(&var_18)
    
    UnDecorator::getReferenceType(var_18, rdi, (rbx_1.d + 1) * 2)

int16_t* r9

if (arg5[1].d == 0)
    r9 = &data_142d40450
else
    r9 = *arg5

int16_t* r8_2

if (arg4[1].d == 0)
    r8_2 = &data_142d40450
else
    r8_2 = *arg4

if (arg3[1].d != 0)
    rsi = *arg3

int64_t* result = sub_140b00d80(data_143ddb400, rsi, r8_2, r9, &var_18)
int64_t rcx_5 = var_18

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5)
