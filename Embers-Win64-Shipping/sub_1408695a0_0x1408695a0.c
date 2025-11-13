// 函数: sub_1408695a0
// 地址: 0x1408695a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
TEB* gsbase

if (data_143ce46f0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ce46f0)
    
    if (data_143ce46f0 == 0xffffffff)
        sub_140b58170(&data_143ce46e8, "NiagaraParameterStore", 1)
        _Init_thread_footer(&data_143ce46f0)

int32_t rcx_2
rcx_2.b = *(arg2 + 0xc) == 0
int64_t result

if ((rcx_2.b & sub_140b5b8a0(*(arg2 + 8), 0xa).b) == 0 || *(arg2 + 0x1c) != data_143ce46e8)
    result.b = 0
else
    void** var_e8
    sub_14081a4a0(&var_e8)
    sub_140ca6840(sub_14087c7b0(), arg3, &var_e8, 0)
    sub_140835420(&var_e8)
    sub_14081d9c0(arg1, &var_e8)
    sub_1408684b0(arg1)
    sub_14081ccd0(&var_e8)
    result.b = 1

__security_check_cookie(rax_1 ^ &var_108)
return result
