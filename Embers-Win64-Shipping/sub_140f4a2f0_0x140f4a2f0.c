// 函数: sub_140f4a2f0
// 地址: 0x140f4a2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e2adb8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e2adb8)
    
    if (data_143e2adb8 == 0xffffffff)
        data_143e2ada8 = 0
        data_143e2adb0 = 0
        sub_1405947f0(&data_143e2ada8, 0x18)
        int32_t rax_1 = data_143e2adb0.d + 0x18
        bool cond:0_1 = rax_1 s<= data_143e2adb0:4.d
        data_143e2adb0.d = rax_1
        
        if (not(cond:0_1))
            sub_140594770(&data_143e2ada8)
        
        UnDecorator::getReferenceType(data_143e2ada8, u"1234567890()-+=\/.,*^%%", 0x30)
        atexit(sub_142ccbf20)
        _Init_thread_footer(&data_143e2adb8)

uint64_t result

if (arg2 != 0)
    for (int16_t* i = data_143e2ada8; i != &i[sx.q(data_143e2adb0.d)]; i = &i[1])
        if (*i == arg2)
            goto label_140f4a386
    
    result = sub_140ad7b30()
    
    if (arg2 == *(result + 0x70) || arg2 == *(result + 0x72))
    label_140f4a386:
        result.b = 1
        return result
    
    int16_t* rcx_2 = result + 0x76
    
    if (rcx_2 != result + 0x8a)
        while (*rcx_2 != arg2)
            rcx_2 = &rcx_2[1]
            
            if (rcx_2 == result + 0x8a)
                goto label_140f4a37e
        
        goto label_140f4a386

label_140f4a37e:
result.b = 0
return result
