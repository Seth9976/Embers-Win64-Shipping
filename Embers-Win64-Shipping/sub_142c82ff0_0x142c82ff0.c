// 函数: sub_142c82ff0
// 地址: 0x142c82ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
char* arg_18 = nullptr
char* arg_20
int32_t rax = sub_142c51e30(arg1, arg2, 0, &arg_18, &arg_20, 0)

if (arg_18 == 0 || rax != 0)
    return 0

char* result = data_143ccb898((arg_20 << 1) + 1)

if (result != 0)
    char* r8_1 = arg_18
    char i = *r8_1
    
    if (i != 0)
        char* result_1 = result
        
        do
            if ((i - 0x21 u> 0x3a || not(test_bit(0x7ffffffffffffbd, sx.q(i - 0x21))))
                    && i - 0x5d u> 0x21)
                rbx += 1
                *result_1 = 0x5c
                result_1 = &result_1[1]
            
            r8_1 = &r8_1[1]
            *result_1 = i
            rbx += 1
            result_1 = &result_1[1]
            i = *r8_1
        while (i != 0)
    
    *(sx.q(rbx) + result) = 0

data_143ccb8a0(arg_18)
return result
