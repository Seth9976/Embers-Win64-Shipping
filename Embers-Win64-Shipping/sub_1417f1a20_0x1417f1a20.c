// 函数: sub_1417f1a20
// 地址: 0x1417f1a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi
rsi.b = 0

if (arg2 != data_143ef9718)
    TEB* gsbase
    
    if (data_143ef98b8
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ef98b8)
        
        if (data_143ef98b8 == 0xffffffff)
            sub_140b58260(&data_143ef98b0, u"MotionController", 1)
            _Init_thread_footer(&data_143ef98b8)
    
    int64_t rbx_1 = data_143ef98b0
    sub_140a387e0()
    int64_t* i_1
    sub_140d6fcf0(&data_14399e720, &i_1, rbx_1)
    int32_t var_10
    
    for (int64_t* i = i_1; i != &i[sx.q(var_10)]; i = &i[1])
        int64_t* rcx_3 = *i
        
        if (rcx_3 != 0 && (*(*rcx_3 + 0x18))(rcx_3, zx.q(arg1), arg2) != 0)
            rsi.b = 1
            break
    
    if (i_1 != 0)
        sub_140a74f90(i_1)
else
    int64_t* rcx = *(data_143f5b298 + 0xb08)
    
    if (rcx != 0)
        jump(*(*rcx + 0x38))

return zx.q(rsi.b)
