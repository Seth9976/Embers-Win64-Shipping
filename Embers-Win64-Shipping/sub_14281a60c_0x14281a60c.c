// 函数: sub_14281a60c
// 地址: 0x14281a60c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

class std::wostream* rax = *arg1
int32_t rbx_1 = arg2
int64_t rbp_1 = rax->__offset(0xc8).q

if (rax->__offset(0xd0).b == 0 && rax->__offset(0xd2).b == 0)
    int16_t* const rdx = &data_14370209c
    
    while (true)
        sub_14281f460(&arg1[1], rdx, 1)
        
        if (arg1[7] u>= rbp_1)
            break
        
        char arg_10 = 0x20
        rdx = &arg_10
    
    rax, arg2 = sub_14281f460(&arg1[1], &data_142d6bc34, 1)

if (rbx_1 s<= 0)
    return 

if (rbx_1 s<= 3)
    arg2.b = 1
    sub_14281ba8c(arg1, arg2.b, rbp_1 + 1)
else if (rbx_1 == 4)
label_14281a69f:
    void* rax_1 = *arg1
    
    if (*(rax_1 + 0xd0) != 0 || *(rax_1 + 0xd2) != 0)
        sub_14281f460(&arg1[1], &data_14370209c, 1)
    
    arg2.b = 1
    sub_14281ba8c(arg1, arg2.b, rbp_1 + 1)
else if (rbx_1 == 5)
    arg2.b = 1
    sub_14281ba8c(arg1, arg2.b, rbp_1 + 1)
else if (rbx_1 == 6)
    goto label_14281a69f
