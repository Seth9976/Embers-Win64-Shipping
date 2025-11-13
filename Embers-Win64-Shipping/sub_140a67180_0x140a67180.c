// 函数: sub_140a67180
// 地址: 0x140a67180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = &data_143db9920
TEB* gsbase

if (data_143db9960 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143db9960)
    
    if (data_143db9960 == 0xffffffff)
        data_143db9920 = 0
        data_143db9928 = 0
        sub_1405947f0(&data_143db9920, 9)
        int32_t rax_3 = data_143db9928.d + 9
        bool cond:0_1 = rax_3 s<= data_143db9928:4.d
        data_143db9928.d = rax_3
        
        if (not(cond:0_1))
            sub_140594770(&data_143db9920)
        
        UnDecorator::getReferenceType(data_143db9920, u"calendar", 0x12)
        data_143db9930 = 0
        data_143db9938 = 0
        sub_1405947f0(&data_143db9930, 0xa)
        int32_t rax_4 = data_143db9938.d + 0xa
        bool cond:1_1 = rax_4 s<= data_143db9938:4.d
        data_143db9938.d = rax_4
        
        if (not(cond:1_1))
            sub_140594770(&data_143db9930)
        
        UnDecorator::getReferenceType(data_143db9930, u"collation", 0x14)
        data_143db9940 = 0
        data_143db9948 = 0
        sub_1405947f0(&data_143db9940, 9)
        int32_t rax_5 = data_143db9948.d + 9
        bool cond:2_1 = rax_5 s<= data_143db9948:4.d
        data_143db9948.d = rax_5
        
        if (not(cond:2_1))
            sub_140594770(&data_143db9940)
        
        UnDecorator::getReferenceType(data_143db9940, u"currency", 0x12)
        data_143db9950 = 0
        data_143db9958 = 0
        sub_1405947f0(&data_143db9950, 8)
        int32_t rax_6 = data_143db9958.d + 8
        bool cond:3_1 = rax_6 s<= data_143db9958:4.d
        data_143db9958.d = rax_6
        
        if (not(cond:3_1))
            sub_140594770(&data_143db9950)
        
        UnDecorator::getReferenceType(data_143db9950, u"numbers", 0x10)
        atexit(sub_142cbd820)
        _Init_thread_footer(&data_143db9960)

sub_140a35810(arg2)
uint64_t result

while (true)
    int16_t* const r8_1
    
    if (rbx[1].d == 0)
        r8_1 = &data_142d40450
    else
        r8_1 = *rbx
    
    if (arg2[1].d == 0)
        result = &data_142d40450
    else
        result = *arg2
    
    void* r8_2 = r8_1 - result
    uint32_t i
    uint32_t rdx
    
    do
        rdx = zx.d(*result)
        i = zx.d(*(result + r8_2))
        
        if (rdx != i)
            break
        
        result += 2
    while (i != 0)
    
    if (rdx - i == 0)
        break
    
    rbx = &rbx[2]
    
    if (rbx == &data_143db9960)
        int32_t rax_2 = *(arg2 + 0xc)
        arg2[1].d = 0
        
        if (rax_2 s< 0 && rax_2 != 0)
            sub_1405947f0(arg2, 0)
        
        result = *arg2
        
        if (result != 0)
            *result = 0
        
        break

return result
