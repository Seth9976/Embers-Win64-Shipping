// 函数: sub_14189c8f0
// 地址: 0x14189c8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x40)
int64_t rsi = 0

if (result == 0)
    return 0

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142fe81e8
int64_t* rcx = *arg1
int32_t r14 = 0
int32_t r15 = 0
int64_t var_28 = 0
int16_t* rbp = *rcx
int64_t var_20 = 0

if (rbp != 0 && *rbp != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (rbp[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_28, rbx_1.d + 1)
        r15 = var_20:4.d
        r14 = var_20.d
        rsi = var_28
    
    r14 += rbx_1.d + 1
    var_20.d = r14
    
    if (r14 s> r15)
        sub_140594770(&var_28)
        r15 = var_20:4.d
        r14 = var_20.d
        rsi = var_28
    
    UnDecorator::getReferenceType(rsi, rbp, (rbx_1.d + 1) * 2)

result[2] = rsi
result[3].d = r14
*(result + 0x1c) = r15
result[4].b = 1
result[7].b = 0
return result
