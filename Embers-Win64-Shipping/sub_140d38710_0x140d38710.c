// 函数: sub_140d38710
// 地址: 0x140d38710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rbp = *(arg2 + 0x20)
int64_t rsi = 0
int32_t r12 = 0
int32_t r15 = 0
int64_t var_28 = 0
int64_t var_20 = 0

if (rbp != 0 && *rbp != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (rbp[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_28, rbx_1.d + 1)
        r12 = var_20:4.d
        r15 = var_20.d
        rsi = var_28
    
    r15 += rbx_1.d + 1
    var_20.d = r15
    
    if (r15 s> r12)
        sub_140594770(&var_28)
        r12 = var_20:4.d
        r15 = var_20.d
        rsi = var_28
    
    UnDecorator::getReferenceType(rsi, rbp, (rbx_1.d + 1) * 2)

if (arg3 != &var_28)
    int64_t rcx_3 = *arg3
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    *arg3 = rsi
    arg3[1].d = r15
    *(arg3 + 0xc) = r12
else if (rsi != 0)
    sub_140a74f90(rsi)

int16_t* result = *(arg2 + 0x20)

if (*result == 0)
    *(arg2 + 0x20) = &result[1]
    return result

int16_t* result_1

do
    result_1 = &result[1]
    *(arg2 + 0x20) = result_1
    result = result_1
while (*result_1 != 0)

*(arg2 + 0x20) = &result_1[1]
return result
