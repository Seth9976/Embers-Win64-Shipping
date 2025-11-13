// 函数: sub_142234b00
// 地址: 0x142234b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result
int64_t arg_10

if (arg2 == 0)
    sub_140d3a3a0(&arg_10, arg2)
    *(arg1 + 8) = arg_10
    sub_140d3a3a0(&arg_10, nullptr)
    *arg1 = arg_10
    arg1[4] = 0xffffffff
    arg_10 = 0
    result = 0
else
    sub_140d3a3a0(&arg1[2], arg2)
    sub_140d3a3a0(arg1, arg2[0x14])
    int64_t rax = *arg2
    int64_t r8_1
    r8_1.b = 1
    arg_10 = 0
    int32_t* rax_1 = (*(rax + 0x6a8))(arg2, 0, r8_1)
    int32_t rcx_3
    
    if (rax_1 == 0)
        rcx_3 = -1
    else
        rcx_3 = *rax_1
    
    arg1[4] = rcx_3
    
    if (rax_1 == 0)
        arg_10 = 0
        result = 0
    else if (sub_140d3e110(&rax_1[0x40]) == 0)
        arg_10 = 0
        result = 0
    else
        result = *(sub_140d3c6e0(rax_1 + 0x100) + 0x80)
*(arg1 + 0x14) = result
return result
