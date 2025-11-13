// 函数: sub_142029700
// 地址: 0x142029700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = data_143e29f28
int64_t var_60 = 0
int512_t zmm0
zmm0.o = zx.o(0)
int64_t var_58 = 0
int128_t var_28
__builtin_memset(&var_28, 0, 0x20)
int32_t var_68

if (rcx == 0)
    TEB* gsbase
    
    if (data_143cd80cc
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143cd80cc)
        
        if (data_143cd80cc == 0xffffffff)
            sub_140af2b60()
            data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
            _Init_thread_footer(&data_143cd80cc)
    
    if (data_143de5426 == 0)
        if (data_143cd80c8 != 0)
            var_68.q = 0
        else
            sub_140d84bf0(&var_68)
    else if (data_143de5427 == 0 || data_143cd80c8 != 0)
        var_68.q = 0
    else
        sub_140d84bf0(&var_68)
else
    (*(*rcx + 0x1b0))(zmm0, &var_68)

*arg2 = var_68
int32_t var_64
arg2[1] = var_64
sub_140d72800(&var_60)
return arg2
