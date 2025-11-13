// 函数: sub_140e13460
// 地址: 0x140e13460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e25170 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e25170)
    
    if (data_143e25170 == 0xffffffff)
        sub_140dd6180(&data_1439aeb78)
        sub_140ddd1b0(&data_1439aedf0)
        data_1439af058 = 0
        data_1439af060 = 0
        atexit(sub_142cca9d0)
        _Init_thread_footer(&data_143e25170)

return &data_1439aeb70
