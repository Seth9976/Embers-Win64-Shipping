// 函数: sub_140b18fc0
// 地址: 0x140b18fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143de6888 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de6888)
    
    if (data_143de6888 == 0xffffffff)
        atexit(sub_142cbf900)
        _Init_thread_footer(&data_143de6888)

if (data_143de6870 != 0)
    return &data_143de6878

data_143de6870 = 1
sub_140a464c0()
int64_t var_18
int64_t* rax_2 = sub_140b13890(&var_18)
int16_t* const rdi = &data_142d40450
int16_t* const r8

if (rax_2[1].d == 0)
    r8 = &data_142d40450
else
    r8 = *rax_2

(*(data_14399ea08 + 0x80))(&data_14399ea08, &data_143de6878, r8, DataDrivenPlatformInfo.ini", 1, 0, 
    1)
int64_t rcx_3 = var_18

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

sub_140a464c0()
int16_t** rax_4 = sub_140b13d10(&var_18)

if (rax_4[1].d != 0)
    rdi = *rax_4

(*(data_14399ea08 + 0x80))(&data_14399ea08, &data_143de6878, rdi, DataDrivenPlatformInfo.ini", 1, 
    0, 0)
int64_t rcx_5 = var_18

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

return &data_143de6878
