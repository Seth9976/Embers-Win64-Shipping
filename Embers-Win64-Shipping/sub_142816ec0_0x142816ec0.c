// 函数: sub_142816ec0
// 地址: 0x142816ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2

if (*(arg1 + 0x151) != 0)
    return 

int32_t i = 0

if (*(arg3 + 0x18) s<= 0)
    return 

do
    bool cond:1_1 = *(arg1 + 0x140) == 0
    int64_t rcx = *rbx
    rbx = &rbx[1]
    int64_t var_18 = rcx
    
    if (not(cond:1_1))
        int64_t arg_8 = rcx
        arg_8.b = var_18:7.b
        char rax_2 = arg_8:6.b
        arg_8:7.b = rcx.b
        char rcx_1 = arg_8:1.b
        arg_8:1.b = rax_2
        char rax_3 = arg_8:5.b
        arg_8:6.b = rcx_1
        char rcx_2 = arg_8:2.b
        arg_8:2.b = rax_3
        char rax_4 = arg_8:4.b
        arg_8:5.b = rcx_2
        char rcx_3 = arg_8:3.b
        arg_8:3.b = rax_4
        arg_8:4.b = rcx_3
        var_18 = arg_8
    
    int64_t* rcx_4 = *(arg1 + 0x138)
    int32_t rax_7 = (**rcx_4)(rcx_4, &var_18, 8)
    i += 1
    *(arg1 + 0x144) += rax_7
while (i s< *(arg3 + 0x18))
