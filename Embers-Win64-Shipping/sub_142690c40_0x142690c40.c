// 函数: sub_142690c40
// 地址: 0x142690c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int128_t zmm1

if (data_143f7194c s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f7194c)
    
    if (data_143f7194c == 0xffffffff)
        zmm1 = data_143dbb1fc
        data_143b51650.d = data_143dbb1f8.d
        data_143b51650:8.d = data_143dbb200.d
        data_143b51650:4.d = zmm1.d
        _Init_thread_footer(&data_143f7194c)

zmm1 = data_143b51630
*arg1 = data_143b51620
int128_t zmm0 = data_143b51640
arg1[1] = zmm1
zmm1 = data_143b51650
arg1[2] = zmm0
arg1[3] = zmm1
return arg1
