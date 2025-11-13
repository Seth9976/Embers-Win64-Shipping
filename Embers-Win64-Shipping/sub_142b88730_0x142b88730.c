// 函数: sub_142b88730
// 地址: 0x142b88730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
int16_t rax = *(arg3 + 8)
int32_t rax_2

if (rax s< 0)
    rax_2 = *(arg3 + 0xc)
else
    rax_2 = sx.d(rax) s>> 5

if (rax_2 s> 0 && sub_142a54720(sub_142a486d0(arg3, 0)) != 0 && *(arg1 + 0x388) != 0
        && (*(arg1 + 0x380) == 0x102 || *(sx.q(arg2) + arg1 + 0x494) != 0))
    TEB* gsbase
    
    if (data_144016f60
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_144016f60)
        
        if (data_144016f60 == 0xffffffff)
            memset(&data_144016f10, 0, 0x50)
            _Mtx_init_in_situ(&data_144016f10, 2)
            atexit(sub_142d161c0)
            _Init_thread_footer(&data_144016f60)
    
    void* arg_18 = &data_144016f10
    sub_142a860a0(&data_144016f10)
    sub_142b2d520(arg3, *(arg1 + 0x388), arg1 + 8, 0x300)
    sub_142a860d0(&data_144016f10)

return arg3
