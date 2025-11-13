// 函数: sub_141eb5100
// 地址: 0x141eb5100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
*arg1 = &data_14325a238
__builtin_memset(&arg1[3], 0, 0x40)
arg1[1] = sub_140d209c0(arg2)
char rax_3 = *(arg2 + 0x8c)
*(arg1 + 0x14) = 0xffffffff
arg1[2].b = rax_3
*(arg1 + 0x14) = *(arg2 + 0x84)

if (sub_141ee73b0(arg2) != 0)
    void** var_1c8
    sub_141eb5950(&var_1c8, arg2, arg1)
    TEB* gsbase
    
    if (data_143f3a908
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f3a908)
        
        if (data_143f3a908 == 0xffffffff)
            data_143f3a904 = sub_141eb80c0()
            _Init_thread_footer(&data_143f3a908)
    
    if (arg1[4].d == data_143f3a904)
        arg1[4].d = 0
        
        if (*(arg1 + 0x24) != 0)
            sub_1405c5510(&arg1[3], 0)
    
    sub_141eb6810(&var_1c8)

if (arg1[6].d s> 0)
    int32_t rdx_1 = arg1[6].d
    void* rcx_7 = arg1[5]
    char var_1d8
    char* var_1d0_1 = &var_1d8
    var_1d8 = 0
    sub_141eb2620(rcx_7, rdx_1)

__security_check_cookie(rax_1 ^ &var_1f8)
return arg1
