// 函数: sub_141a2a790
// 地址: 0x141a2a790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8_5

if (arg1[1].d == *(arg1 + 0x34))
label_141a2a7ff:
    r8_5 = nullptr
else
    void* r10_1 = arg1[8]
    void* r11_1 = &arg1[7]
    
    if (r10_1 != 0)
        r11_1 = r10_1
    
    int32_t rax_5 =
        *(r11_1 + ((sx.q((arg2 u>> 0x20).d * 0x17 + arg2.d) & (sx.q(arg1[9].d) - 1)) << 2))
    
    if (rax_5 == 0xffffffff)
    label_141a2a7ff_1:
        r8_5 = nullptr
    else
        while (true)
            r8_5 = (sx.q(rax_5) << 5) + *arg1
            
            if (*r8_5 == arg2)
                break
            
            rax_5 = r8_5[3].d
            
            if (rax_5 == 0xffffffff)
                goto label_141a2a7ff_2
        
        if (rax_5 == 0xffffffff)
        label_141a2a7ff_2:
            r8_5 = nullptr

void* rdi = &r8_5[1]

if (r8_5 == 0)
    rdi = nullptr

if (rdi != 0)
    int64_t* rsi_1 = *rdi
    TEB* gsbase
    
    if (data_143f2a880
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f2a880)
        
        if (data_143f2a880 == 0xffffffff)
            int64_t rax_12 = data_143f29fa0 + 1
            data_143f29fa0 = rax_12
            data_143f2a878 = sub_141a4fae0(&data_143f29fa0, rax_12.d)
            _Init_thread_footer(&data_143f2a880)
    
    int64_t r8_6 = *rsi_1
    void arg_8
    
    if (*(*(r8_6 + 8))(rsi_1, &arg_8, r8_6) == data_143f2a878)
        return *rdi

return 0
