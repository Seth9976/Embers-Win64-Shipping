// 函数: sub_1426e02c0
// 地址: 0x1426e02c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f72290 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f72290)
    
    if (data_143f72290 == 0xffffffff)
        sub_1405947f0(&data_143f72270, 0x16)
        int32_t rax_7 = data_143f72278 + 0x16
        bool cond:0_1 = rax_7 s<= data_143f7227c
        data_143f72278 = rax_7
        
        if (not(cond:0_1))
            sub_140594770(&data_143f72270)
        
        UnDecorator::getReferenceType(data_143f72270, u"finish with main task", 0x2c)
        data_143f72280 = 0
        data_143f72288 = 0
        sub_1405947f0(&data_143f72280, 0x11)
        int32_t rax_8 = data_143f72288.d + 0x11
        bool cond:1_1 = rax_8 s<= data_143f72288:4.d
        data_143f72288.d = rax_8
        
        if (not(cond:1_1))
            sub_140594770(&data_143f72280)
        
        UnDecorator::getReferenceType(data_143f72280, u"wait for subtree", 0x22)
        atexit(sub_142d12620)
        _Init_thread_footer(&data_143f72290)

char rax_2 = *(arg1 + 0x90)
int16_t* const rbx = &data_142d40450

if (rax_2 u< 2)
    uint64_t rax_4 = zx.q(rax_2) * 2
    
    if ((&data_143f72278)[rax_4 * 2] != 0)
        (&data_143f72270)[rax_4]

int64_t var_18
int64_t* rax_5 = sub_1426b3750(arg1, &var_18)

if (rax_5[1].d != 0)
    rbx = *rax_5

sub_140a2e390(arg2, u"%s: %s", rbx)
int64_t rcx_2 = var_18

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

return arg2
