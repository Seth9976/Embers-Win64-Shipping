// 函数: sub_14052f0b0
// 地址: 0x14052f0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143f54378 s> *rbx_1)
    _Init_thread_header(&data_143f54378)
    
    if (data_143f54378 == 0xffffffff)
        int64_t* rcx_2 = data_143db18d0
        
        if (rcx_2 == 0)
            sub_140a53c40()
            rcx_2 = data_143db18d0
        
        data_143f54370 = (*(*rcx_2 + 0x38))(rcx_2, net.MaxRepArrayMemory", &data_143a2fdac, Maximum "
        "allowable size for replicated dynamic arrays (in bytes). Value must be between 1 and 65535"
            , 0)
        data_143f54368 = &data_142d3ff10
        atexit(sub_142d0b2d0)
        _Init_thread_footer(&data_143f54378)

if (data_143f54390 s> *rbx_1)
    _Init_thread_header(&data_143f54390)
    
    if (data_143f54390 == 0xffffffff)
        data_143f54380 = 0
        data_143f54388 = 0
        void*** rax_6 = sub_140a84c80(0, 0x20, 0)
        data_143f54380 = rax_6
        data_143f54388 = 2
        
        if (rax_6 != 0)
            *rax_6 = &data_143318720
            rax_6[2] = sub_140a387b0()
            *rax_6 = &data_143318778
        
        atexit(sub_142d0b6b0)
        _Init_thread_footer(&data_143f54390)

int64_t* rcx_1 = data_143db18d0

if (rcx_1 == 0)
    sub_140a53c40()
    rcx_1 = data_143db18d0

jump(*(*rcx_1 + 0x58))
