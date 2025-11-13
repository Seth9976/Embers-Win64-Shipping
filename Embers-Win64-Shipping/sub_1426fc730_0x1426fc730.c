// 函数: sub_1426fc730
// 地址: 0x1426fc730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg1
int64_t* var_38 = nullptr
int32_t i_2 = 0
int64_t var_28 = 0
int32_t var_20 = 0
(*(rax + 0x470))(arg1, &var_38, &var_28)
int32_t i_1 = i_2
int32_t rsi = 0
*arg2 = 0
arg2[1] = 0

if (i_1 s> 0)
    int64_t rbx_1 = 0
    int64_t r15_1 = 0
    
    do
        int64_t* rdx_1 = var_38
        int32_t rax_1 = *(rdx_1 + r15_1 + 8)
        int32_t r8_1 = rax_1 - 1
        
        if (rax_1 == 0)
            r8_1 = 0
        
        sub_140a20ba0(arg2, *(rdx_1 + r15_1), r8_1)
        int32_t* const rdx_3
        
        if (rbx_1 s>= 0 && rsi s< var_20)
            rdx_3 = &data_142d85f5c
        
        if (rbx_1 s< 0 || rsi s>= var_20 || *(var_28 + (rbx_1 << 2)) != 1)
            rdx_3 = &data_142d8adc4
        
        int64_t r8_2 = -1
        
        do
            r8_2 += 1
        while (*(rdx_3 + (r8_2 << 1)) != 0)
        
        sub_140a20ba0(arg2, rdx_3, r8_2.d)
        i_1 = i_2
        rsi += 1
        rbx_1 += 1
        r15_1 += 0x10
    while (rsi s< i_1)

int64_t rcx_2 = var_28

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)
    i_1 = i_2

int64_t* rbx_2 = var_38

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_3 = *rbx_2
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        rbx_2 = &rbx_2[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_2 = var_38

if (rbx_2 != 0)
    sub_140a74f90(rbx_2)

return arg2
