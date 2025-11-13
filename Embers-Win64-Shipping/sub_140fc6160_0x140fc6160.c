// 函数: sub_140fc6160
// 地址: 0x140fc6160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e2b890 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e2b890)
    
    if (data_143e2b890 == 0xffffffff)
        void arg_10
        int64_t rbx_1 = *sub_140b58170(&arg_10, "Sockets", 1)
        j_sub_140b3db50()
        data_143e2b888 = j_sub_140b407e0(&data_143de7d78, rbx_1)
        atexit(sub_142ccc220)
        _Init_thread_footer(&data_143e2b890)

*arg1
jump(*(*data_143e2b888 + 0x48))
