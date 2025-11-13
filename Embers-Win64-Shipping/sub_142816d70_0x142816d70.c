// 函数: sub_142816d70
// 地址: 0x142816d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rbx = arg2

if (*(arg1 + 0x151) != 0)
    return 

int32_t i = 0

if (*(arg3 + 0x18) s<= 0)
    return 

do
    bool cond:1_1 = *(arg1 + 0x140) == 0
    int16_t rax_1 = *rbx
    rbx = &rbx[1]
    int16_t arg_8 = rax_1
    
    if (not(cond:1_1))
        arg_8.b = arg_8:1.b
        arg_8:1.b = rax_1.b
    
    int64_t* rcx_1 = *(arg1 + 0x138)
    int32_t rax_4 = (**rcx_1)(rcx_1, &arg_8, 2)
    i += 1
    *(arg1 + 0x144) += rax_4
while (i s< *(arg3 + 0x18))
