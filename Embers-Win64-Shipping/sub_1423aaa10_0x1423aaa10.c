// 函数: sub_1423aaa10
// 地址: 0x1423aaa10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = -0x1000000

if (*data_143f5a408 != 0)
    int64_t* rcx_1 = data_143f5a400
    rdi = (*(*rcx_1 + 0x18))(rcx_1) & 0xff000000

sub_140af2b60()
char result = sub_140b21a10(&data_143dbb3f0, u"MAXQUALITYMODE")

if (result != 0)
    rdi = 0x7000000
else if (rdi == 0xff000000)
    return result

TEB* gsbase
void* rsi = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))

if (data_143f5a440 s> *(rsi + 0x14))
    _Init_thread_header(&data_143f5a440)
    
    if (data_143f5a440 == 0xffffffff)
        int64_t* rcx_19 = data_143db18d0
        
        if (rcx_19 == 0)
            sub_140a53c40()
            rcx_19 = data_143db18d0
        
        int64_t r8_9
        r8_9.b = 1
        data_143f5a438 = (*(*rcx_19 + 0xb0))(rcx_19, u"r.Shadow.MinResolution", r8_9)
        _Init_thread_footer(&data_143f5a440)

int64_t* rbx = data_143f5a438
int16_t* var_28
sub_140a2e390(&var_28, u"%d", 0x10)
int16_t* const rbp = &data_142d40450
int16_t* const rdx = &data_142d40450
int32_t var_20

if (var_20 != 0)
    rdx = var_28

(*(*rbx + 0x80))(rbx, rdx, zx.q(rdi))
int16_t* rcx_5 = var_28

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

if (data_143f5a450 s> *(rsi + 0x14))
    _Init_thread_header(&data_143f5a450)
    
    if (data_143f5a450 == 0xffffffff)
        int64_t* rcx_20 = data_143db18d0
        
        if (rcx_20 == 0)
            sub_140a53c40()
            rcx_20 = data_143db18d0
        
        int64_t r8_10
        r8_10.b = 1
        data_143f5a448 = (*(*rcx_20 + 0xb0))(rcx_20, u"r.Shadow.FadeResolution", r8_10)
        _Init_thread_footer(&data_143f5a450)

int64_t* rbx_1 = data_143f5a448
int16_t* var_18
sub_140a2e390(&var_18, u"%d", 1)
int16_t* const rdx_1 = &data_142d40450
int32_t var_10

if (var_10 != 0)
    rdx_1 = var_18

(*(*rbx_1 + 0x80))(rbx_1, rdx_1, zx.q(rdi))
int16_t* rcx_8 = var_18

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

if (data_143f5a460 s> *(rsi + 0x14))
    _Init_thread_header(&data_143f5a460)
    
    if (data_143f5a460 == 0xffffffff)
        int64_t* rcx_21 = data_143db18d0
        
        if (rcx_21 == 0)
            sub_140a53c40()
            rcx_21 = data_143db18d0
        
        int64_t r8_11
        r8_11.b = 1
        data_143f5a458 = (*(*rcx_21 + 0xb0))(rcx_21, u"r.Shadow.MinPreShadowResolution", r8_11)
        _Init_thread_footer(&data_143f5a460)

int64_t* rbx_2 = data_143f5a458
sub_140a2e390(&var_28, u"%d", 0x10)
int16_t* rdx_2 = &data_142d40450

if (var_20 != 0)
    rdx_2 = var_28

(*(*rbx_2 + 0x80))(rbx_2, rdx_2, zx.q(rdi))
int16_t* rcx_11 = var_28

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

if (data_143f5a470 s> *(rsi + 0x14))
    _Init_thread_header(&data_143f5a470)
    
    if (data_143f5a470 == 0xffffffff)
        int64_t* rcx_22 = data_143db18d0
        
        if (rcx_22 == 0)
            sub_140a53c40()
            rcx_22 = data_143db18d0
        
        int64_t r8_12
        r8_12.b = 1
        data_143f5a468 = (*(*rcx_22 + 0xb0))(rcx_22, u"r.Shadow.PreShadowFadeResolution", r8_12)
        _Init_thread_footer(&data_143f5a470)

int64_t* rbx_3 = data_143f5a468
sub_140a2e390(&var_18, u"%d", 1)

if (var_10 != 0)
    rbp = var_18

(*(*rbx_3 + 0x80))(rbx_3, rbp, zx.q(rdi))
int16_t* rcx_14 = var_18

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

if (data_143f5a480 s> *(rsi + 0x14))
    _Init_thread_header(&data_143f5a480)
    
    if (data_143f5a480 == 0xffffffff)
        int64_t* rcx_23 = data_143db18d0
        
        if (rcx_23 == 0)
            sub_140a53c40()
            rcx_23 = data_143db18d0
        
        int64_t r8_13
        r8_13.b = 1
        data_143f5a478 = (*(*rcx_23 + 0xb0))(rcx_23, u"r.Shadow.TexelsPerPixel", r8_13)
        _Init_thread_footer(&data_143f5a480)

sub_1422f2300(data_143f5a478, 4f, rdi)

if (data_143f5a490 s> *(rsi + 0x14))
    _Init_thread_header(&data_143f5a490)
    
    if (data_143f5a490 == 0xffffffff)
        int64_t* rcx_18 = data_143db18d0
        
        if (rcx_18 == 0)
            sub_140a53c40()
            rcx_18 = data_143db18d0
        
        int64_t r8_8
        r8_8.b = 1
        data_143f5a488 = (*(*rcx_18 + 0xb0))(rcx_18, u"r.Shadow.PreShadowResolutionFactor", r8_8)
        _Init_thread_footer(&data_143f5a490)

return sub_1422f2300(data_143f5a488, 1f, rdi) __tailcall
