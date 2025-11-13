// 函数: sub_142a9b860
// 地址: 0x142a9b860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
struct icu_64::UObject::icu_64::Locale::VTable** rax = sub_142a463c0()
TEB* gsbase

if (data_144015dc0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_144015dc0)
    
    if (data_144015dc0 == 0xffffffff)
        memset(&data_144015d70, 0, 0x50)
        _Mtx_init_in_situ(&data_144015d70, 2)
        atexit(sub_142d16080)
        _Init_thread_footer(&data_144015dc0)

void* arg_8 = &data_144015d70
sub_142a860a0(&data_144015d70)

if (sub_142a45d30(rax, arg1 + 0x78) == 0)
    sub_142a45c20(arg1 + 0x78, rax)
    sub_142aa73f0(rax, arg1 + 0x158)
    sub_142a99960(arg1)

sub_142a860d0(&data_144015d70)
return arg1 + 0x158
