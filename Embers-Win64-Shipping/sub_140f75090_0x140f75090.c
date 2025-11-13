// 函数: sub_140f75090
// 地址: 0x140f75090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0x7c]

if (rcx != 0)
    char rax_2 = (*(*rcx + 0x1c8))(rcx)
    char rax_3
    
    if (rax_2 == 0)
        rax_3 = sub_140f4a730(arg1[0x7c])
    
    if (rax_2 != 0 || rax_3 != 0)
        return arg1[0x82] + 0x448

if ((*(*arg1 + 0x1c8))(arg1) != 0 || arg1[0x7e].d == 0)
    return arg1[0x82] + 0x3c0

TEB* gsbase

if (data_143e24588 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e24588)
    
    if (data_143e24588 == 0xffffffff)
        sub_140ddaa70(&data_143e24500, &data_143dbb1f0)
        atexit(sub_142ccae40)
        _Init_thread_footer(&data_143e24588)

return &data_143e24500
