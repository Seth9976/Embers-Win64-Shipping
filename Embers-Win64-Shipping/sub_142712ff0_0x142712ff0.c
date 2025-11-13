// 函数: sub_142712ff0
// 地址: 0x142712ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rdi = arg2

if (arg2 == *(arg1 + 0x278) || *(arg1 + 0x1b8) != 0)
    return 

void* rax_1 = *(arg1 + 0xa8)
int64_t rsi
int64_t arg_10 = rsi

if (rax_1 == 0)
    rax_1 = sub_141ee69e0(arg1)

int64_t* rax_2 = sub_1426fbe40(rax_1)

if (rax_2 == 0)
    char rcx_1 = rdi
    
    if (rdi != 2)
        rcx_1 = 2
    
    rdi = rcx_1

TEB* gsbase

if (data_143f72460 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f72460)
    
    if (data_143f72460 == 0xffffffff)
        sub_1405947f0(&data_143f72430, 8)
        int32_t rax_6 = data_143f72438 + 8
        bool cond:1_1 = rax_6 s<= data_143f7243c
        data_143f72438 = rax_6
        
        if (not(cond:1_1))
            sub_140594770(&data_143f72430)
        
        UnDecorator::getReferenceType(data_143f72430, u"Enabled", 0x10)
        data_143f72440 = 0
        data_143f72448 = 0
        sub_1405947f0(&data_143f72440, 0xd)
        int32_t rax_7 = data_143f72448.d + 0xd
        bool cond:2_1 = rax_7 s<= data_143f72448:4.d
        data_143f72448.d = rax_7
        
        if (not(cond:2_1))
            sub_140594770(&data_143f72440)
        
        UnDecorator::getReferenceType(data_143f72440, u"ObstacleOnly", 0x1a)
        data_143f72450 = 0
        data_143f72458 = 0
        sub_1405947f0(&data_143f72450, 9)
        int32_t rax_8 = data_143f72458.d + 9
        bool cond:3_1 = rax_8 s<= data_143f72458:4.d
        data_143f72458.d = rax_8
        
        if (not(cond:3_1))
            sub_140594770(&data_143f72450)
        
        UnDecorator::getReferenceType(data_143f72450, u"Disabled", 0x12)
        atexit(sub_142d12960)
        _Init_thread_footer(&data_143f72460)

uint8_t rax = *(arg1 + 0x274)
*(arg1 + 0x278) = rdi
rsi.b = rdi != 2

if (rsi.b == (rax u>> 4 & 1))
    return 

int64_t* rax_5 = sub_140d21950(arg1, sub_142736f50())

if (rdi == 2)
    sub_142715ad0(rax_2, rax_5)
else
    sub_1427097f0(rax_2, rax_5)

*(arg1 + 0x274) &= 0xef
rsi.b <<= 4
*(arg1 + 0x274) |= rsi.b
