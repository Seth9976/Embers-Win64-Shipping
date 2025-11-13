// 函数: sub_141aefa10
// 地址: 0x141aefa10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8_5

if (arg1[1].d == *(arg1 + 0x34))
label_141aefa7f:
    r8_5 = nullptr
else
    void* r10_1 = arg1[8]
    void* r11_1 = &arg1[7]
    
    if (r10_1 != 0)
        r11_1 = r10_1
    
    int32_t rax_5 =
        *(r11_1 + ((sx.q((arg2 u>> 0x20).d * 0x17 + arg2.d) & (sx.q(arg1[9].d) - 1)) << 2))
    
    if (rax_5 == 0xffffffff)
    label_141aefa7f_1:
        r8_5 = nullptr
    else
        while (true)
            r8_5 = (sx.q(rax_5) << 5) + *arg1
            
            if (*r8_5 == arg2)
                break
            
            rax_5 = r8_5[3].d
            
            if (rax_5 == 0xffffffff)
                goto label_141aefa7f_2
        
        if (rax_5 == 0xffffffff)
        label_141aefa7f_2:
            r8_5 = nullptr

void* rsi = &r8_5[1]

if (r8_5 == 0)
    rsi = nullptr

if (rsi != 0)
    int64_t* rdi_1 = *rsi
    void arg_8
    int64_t* rax_6 = sub_141a2acc0(&arg_8)
    int64_t r8_6 = *rdi_1
    void arg_18
    
    if (*(*(r8_6 + 8))(rdi_1, &arg_18, r8_6) == *rax_6)
        return *rsi

return 0
