// 函数: sub_140b2b2d0
// 地址: 0x140b2b2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = 0
*(arg1 + 0x18) = 0
int64_t* rax = *arg2
int64_t var_28 = 0
int32_t rbp = 0
int64_t var_20 = 0
int32_t r15 = 0
int16_t* rsi = *rax

if (rsi != 0 && *rsi != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (rsi[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_28, rbx_1.d + 1)
        r15 = var_20:4.d
        rbp = var_20.d
        r14 = var_28
    
    rbp += rbx_1.d + 1
    var_20.d = rbp
    
    if (rbp s> r15)
        sub_140594770(&var_28)
        r15 = var_20:4.d
        rbp = var_20.d
        r14 = var_28
    
    UnDecorator::getReferenceType(r14, rsi, (rbx_1.d + 1) * 2)

*(arg1 + 0x20) = r14
*(arg1 + 0x28) = rbp
*(arg1 + 0x2c) = r15
*(arg1 + 0x30) = 1
return arg1
