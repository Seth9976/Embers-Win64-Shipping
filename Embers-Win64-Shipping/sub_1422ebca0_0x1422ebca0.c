// 函数: sub_1422ebca0
// 地址: 0x1422ebca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x98))()
int128_t zmm6 = arg2
arg2 = 0x41200000

if (not(zmm6.d f< 10f))
    arg2 = 0x42c80000

if (zmm6.d f< 10f || not(zmm6.d f< 100f))
    zmm6 = arg2

TEB* gsbase

if (data_143f56370 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f56370)
    
    if (data_143f56370 == 0xffffffff)
        int64_t* rcx_5 = data_143db18d0
        
        if (rcx_5 == 0)
            sub_140a53c40()
            rcx_5 = data_143db18d0
        
        int64_t r8_2
        r8_2.b = 1
        data_143f56368 = (*(*rcx_5 + 0xb0))(rcx_5, u"r.ScreenPercentage", r8_2)
        _Init_thread_footer(&data_143f56370)

int64_t* rbx = data_143f56368
int16_t* var_28
sub_140a2e390(&var_28, u"%g", fconvert.d(zmm6.d))
int16_t* const rdx = &data_142d40450
int32_t var_20

if (var_20 != 0)
    rdx = var_28

int64_t result = (*(*rbx + 0x80))(rbx, rdx, 0x1000000)
int16_t* rcx_4 = var_28

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4)
