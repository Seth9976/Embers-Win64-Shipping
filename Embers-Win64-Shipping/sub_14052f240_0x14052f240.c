// 函数: sub_14052f240
// 地址: 0x14052f240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143f54348 s> *rbx_1)
    _Init_thread_header(&data_143f54348)
    
    if (data_143f54348 == 0xffffffff)
        int64_t* rcx_2 = data_143db18d0
        int32_t rdi_1 = data_143a2fda8
        
        if (rcx_2 == 0)
            sub_140a53c40()
            rcx_2 = data_143db18d0
        
        data_143f54340 = (*(*rcx_2 + 0x18))(rcx_2, net.MaxRepArraySize", zx.q(rdi_1), 
            Maximum allowable size for replicated dynamic arrays (in number of elem", 0)
        data_143f54338 = &data_142d3ff10
        atexit(sub_142d0b320)
        _Init_thread_footer(&data_143f54348)

if (data_143f54360 s> *rbx_1)
    _Init_thread_header(&data_143f54360)
    
    if (data_143f54360 == 0xffffffff)
        data_143f54350 = 0
        data_143f54358 = 0
        void*** rax_6 = sub_140a84c80(0, 0x20, 0)
        data_143f54350 = rax_6
        data_143f54358 = 2
        
        if (rax_6 != 0)
            *rax_6 = &data_143318670
            rax_6[2] = sub_140a387b0()
            *rax_6 = &data_1433186c8
        
        atexit(sub_142d0b720)
        _Init_thread_footer(&data_143f54360)

int64_t* rcx_1 = data_143db18d0

if (rcx_1 == 0)
    sub_140a53c40()
    rcx_1 = data_143db18d0

jump(*(*rcx_1 + 0x58))
