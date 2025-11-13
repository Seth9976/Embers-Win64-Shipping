// 函数: sub_140ccfa10
// 地址: 0x140ccfa10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143e1b2c4 s> *rbx_1)
    _Init_thread_header(&data_143e1b2c4)
    
    if (data_143e1b2c4 == 0xffffffff)
        int64_t* arg_8
        sub_140b58260(&arg_8, u"Field", 1)
        data_1439a9d90 = arg_8
        
        if (data_143e1b268 s> *rbx_1)
            _Init_thread_header(&data_143e1b268)
            
            if (data_143e1b268 == 0xffffffff)
                data_143e1b258 = 0
                data_143e1b260.q = 0
                atexit(sub_142cc1ef0)
                _Init_thread_footer(&data_143e1b268)
        
        int64_t rbx_2 = sx.q(data_143e1b260)
        int32_t rax_7 = (rbx_2 + 1).d
        bool cond:0 = rax_7 s<= data_143e1b264
        data_143e1b260 = rax_7
        
        if (not(cond:0))
            sub_1405a4d70(&data_143e1b258)
        
        int64_t rax_3 = data_143e1b258
        arg_8 = &data_1439a9d90
        *(rax_3 + (rbx_2 << 3)) = &data_1439a9d90
        sub_140cbcdf0()
        sub_1405a7750(&data_143e1b270, &data_1439a9d90, &arg_8)
        atexit(sub_142cc2350)
        _Init_thread_footer(&data_143e1b2c4)

return &data_1439a9d90
