// 函数: sub_140b72d00
// 地址: 0x140b72d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t var_18 = __security_cookie ^ &var_d8
TEB* gsbase

if (data_143e19e38 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e19e38)
    
    if (data_143e19e38 == 0xffffffff)
        data_143e19e30 = GetProcAddress(GetModuleHandleW(u"kernel32.dll"), "SetThreadDescription")
        _Init_thread_footer(&data_143e19e38)

if (data_143e19e30 != 0)
    data_143e19e30(GetCurrentThread(), arg1)

void var_b8
sub_1408f2b40(&var_b8, arg1)
sub_140b72df0()
noreturn
