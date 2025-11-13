// 函数: sub_141c4bd70
// 地址: 0x141c4bd70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
void* r14 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))

if (data_143f34d68 s> *(r14 + 0x14))
    _Init_thread_header(&data_143f34d68)
    
    if (data_143f34d68 == 0xffffffff)
        sub_140b58260(&data_143f34d60, u"Unreal Ambisonics", 1)
        _Init_thread_footer(&data_143f34d68)

int64_t arg_18 = data_143f34d60
int64_t* rax_3 = sub_141c4a7d0(&arg_18)

if (rax_3 == 0)
    *arg1 = 0
else
    int32_t var_2c_1 = *(arg2 + 0x14)
    int32_t var_34_1 = *(arg2 + 0x958)
    void* var_28_1 = arg2
    int32_t rax_4 = sub_141e7e7a0(arg2)
    uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o(*(arg2 + 0xc)))
    int32_t var_38 = rax_4
    int32_t var_30_1 = (int.q(zmm0_1.d)).d
    
    if (data_143f34d6c s> *(r14 + 0x14))
        _Init_thread_header(&data_143f34d6c)
        
        if (data_143f34d6c == 0xffffffff)
            data_143a13038 = &data_143208378
            atexit(sub_142cf6a40)
            _Init_thread_footer(&data_143f34d6c)
    
    data_143a13040 = 1
    (*(*rax_3 + 0x18))(rax_3, arg1, &var_38, &data_143a13038)

return arg1
