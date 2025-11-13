// 函数: sub_14270a5d0
// 地址: 0x14270a5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_18
sub_142702060(&var_18, arg2)
TEB* gsbase

if (data_143f724c4 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f724c4)
    
    if (data_143f724c4 == 0xffffffff)
        data_143f724b8 = 0xff
        sub_140b58260(&data_143f724bc, u"Invalid", 1)
        _Init_thread_footer(&data_143f724c4)

char rdx_3 = var_18
int64_t rax_4
int64_t var_14

if (rdx_3 == data_143f724b8 || zx.d(rdx_3) s>= arg1[0x12].d
        || *(arg1[0x11] + (zx.q(rdx_3) << 3)) == 0)
    char* rax_5 = sub_142709fa0(arg1, &var_18, arg2)
    rdx_3 = *rax_5
    rax_4 = *(rax_5 + 4)
else
    rax_4 = var_14
var_18 = rdx_3
int64_t var_14_1 = rax_4
return sub_14270a4d0(arg1, &var_18, arg3)
