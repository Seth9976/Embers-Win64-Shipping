// 函数: sub_141fe12a0
// 地址: 0x141fe12a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* rdi_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143f3e960 s> *rdi_1)
    _Init_thread_header(&data_143f3e960)
    
    if (data_143f3e960 == 0xffffffff)
        sub_140b58260(&data_143f3e958, u"Project", 1)
        _Init_thread_footer(&data_143f3e960)

if (data_143f3e970 s> *rdi_1)
    _Init_thread_header(&data_143f3e970)
    
    if (data_143f3e970 == 0xffffffff)
        sub_140b58260(&data_143f3e968, u"Editor", 1)
        _Init_thread_footer(&data_143f3e970)

if (data_143f3e980 s> *rdi_1)
    _Init_thread_header(&data_143f3e980)
    
    if (data_143f3e980 == 0xffffffff)
        sub_140b58260(&data_143f3e978, u"EditorSettings", 1)
        _Init_thread_footer(&data_143f3e980)

if (data_143f3e990 s> *rdi_1)
    _Init_thread_header(&data_143f3e990)
    
    if (data_143f3e990 == 0xffffffff)
        sub_140b58260(&data_143f3e988, u"EditorPerProjectUserSettings", 1)
        _Init_thread_footer(&data_143f3e990)

int64_t rax_6 = *(*(arg1 + 0x10) + 0xe8)
int64_t rax_7

if (rax_6 != data_143f3e978)
    rax_7 = data_143f3e958

if (rax_6 == data_143f3e978 || rax_6 == data_143f3e988)
    rax_7 = data_143f3e968

*arg2 = rax_7
return arg2
