// 函数: sub_141a67840
// 地址: 0x141a67840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f2a990 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f2a990)
    
    if (data_143f2a990 == 0xffffffff)
        sub_140b58170(&data_143f2a988, "FloatRange", 1)
        _Init_thread_footer(&data_143f2a990)

int32_t rcx
rcx.b = *(arg2 + 0xc) == 0
int64_t result

if ((rcx.b & sub_140b5b8a0(*(arg2 + 8), 0xa).b) == 0 || *(arg2 + 0x1c) != data_143f2a988)
    result.b = 0
else
    int64_t* rax_2 = sub_140bdcaa0()
    char var_38 = 2
    int32_t var_34_1 = 0
    char var_30_1 = 2
    int32_t var_2c_1 = 0
    sub_140ca6840(rax_2, arg3, &var_38, 0)
    int64_t arg_10
    sub_141a514d0(&arg_10)
    int64_t rbx_1 = arg_10
    char var_28_1 = 2
    int32_t var_24_1 = 0
    char var_20_1 = 2
    int32_t var_1c_1 = 0
    int32_t arg_24
    
    if (var_38 != 2)
        sub_141a6d2f0(&arg_10, 0, rbx_1, _mm_cvtps_pd(var_34_1.q))
        arg_24 = arg_10.d
        var_28_1.q = 1.q
    
    if (var_30_1 != 2)
        sub_141a6d2f0(&arg_10, 0, rbx_1, _mm_cvtps_pd(var_2c_1.q))
        arg_24 = arg_10.d
        var_20_1.q = 1.q
    
    result.b = 1
    *arg1 = var_28_1.o

return result
