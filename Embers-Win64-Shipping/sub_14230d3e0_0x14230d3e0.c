// 函数: sub_14230d3e0
// 地址: 0x14230d3e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = 0
TEB* gsbase

if (data_143de5438 != 0)
    if (data_143f57998
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f57998)
        
        if (data_143f57998 == 0xffffffff)
            int64_t* rcx_2 = data_143db18d0
            
            if (rcx_2 == 0)
                sub_140a53c40()
                rcx_2 = data_143db18d0
            
            int64_t r8
            r8.b = 1
            int64_t* rax_24 = (*(*rcx_2 + 0xb0))(rcx_2, u"r.HighResScreenshotDelay", r8)
            int64_t rax_25
            
            if (rax_24 == 0)
                rax_25 = 0
            else
                int64_t rdx_1 = *rax_24
                rax_25 = (*(rdx_1 + 0x58))(rax_24, rdx_1)
            
            data_143f57990 = rax_25
            _Init_thread_footer(&data_143f57998)
    
    if (*data_143f57990 s< 4)
        *arg3 &= 0xfffffff7

int32_t* r14_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143f579a8 s> *r14_1)
    _Init_thread_header(&data_143f579a8)
    
    if (data_143f579a8 == 0xffffffff)
        int64_t* rcx_4 = data_143db18d0
        
        if (rcx_4 == 0)
            sub_140a53c40()
            rcx_4 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        int64_t* rax_27 = (*(*rcx_4 + 0xb0))(rcx_4, u"r.LightFunctionQuality", r8_1)
        int64_t rax_28
        
        if (rax_27 == 0)
            rax_28 = 0
        else
            int64_t rdx_2 = *rax_27
            rax_28 = (*(rdx_2 + 0x58))(rax_27, rdx_2)
        
        data_143f579a0 = rax_28
        _Init_thread_footer(&data_143f579a8)

if (*data_143f579a0 s<= 0)
    *arg3 &= 0xefffffff

if (data_143f579b8 s> *r14_1)
    _Init_thread_header(&data_143f579b8)
    
    if (data_143f579b8 == 0xffffffff)
        int64_t* rcx_6 = data_143db18d0
        
        if (rcx_6 == 0)
            sub_140a53c40()
            rcx_6 = data_143db18d0
        
        int64_t r8_2
        r8_2.b = 1
        int64_t* rax_30 = (*(*rcx_6 + 0xb0))(rcx_6, u"r.EyeAdaptationQuality", r8_2)
        int64_t rax_31
        
        if (rax_30 == 0)
            rax_31 = 0
        else
            int64_t rdx_3 = *rax_30
            rax_31 = (*(rdx_3 + 0x58))(rax_30, rdx_3)
        
        data_143f579b0 = rax_31
        _Init_thread_footer(&data_143f579b8)

if (*data_143f579b0 s<= 0)
    *arg3 &= 0xffffffdf

if (data_143f579c8 s> *r14_1)
    _Init_thread_header(&data_143f579c8)
    
    if (data_143f579c8 == 0xffffffff)
        int64_t* rcx_8 = data_143db18d0
        
        if (rcx_8 == 0)
            sub_140a53c40()
            rcx_8 = data_143db18d0
        
        int64_t r8_3
        r8_3.b = 1
        int64_t* rax_33 = (*(*rcx_8 + 0xb0))(rcx_8, u"r.ShadowQuality", r8_3)
        int64_t rax_34
        
        if (rax_33 == 0)
            rax_34 = 0
        else
            int64_t rdx_4 = *rax_33
            rax_34 = (*(rdx_4 + 0x58))(rax_33, rdx_4)
        
        data_143f579c0 = rax_34
        _Init_thread_footer(&data_143f579c8)

if (*data_143f579c0 s<= 0)
    arg3[1] &= 0xfffffffe

if (data_143f579d8 s> *r14_1)
    _Init_thread_header(&data_143f579d8)
    
    if (data_143f579d8 == 0xffffffff)
        int64_t* rcx_10 = data_143db18d0
        
        if (rcx_10 == 0)
            sub_140a53c40()
            rcx_10 = data_143db18d0
        
        int64_t r8_4
        r8_4.b = 1
        int64_t* rax_36 = (*(*rcx_10 + 0xb0))(rcx_10, u"r.SkyLightingQuality", r8_4)
        
        if (rax_36 != 0)
            int64_t rdx_5 = *rax_36
            rsi = (*(rdx_5 + 0x58))(rax_36, rdx_5)
        
        data_143f579d0 = rsi
        _Init_thread_footer(&data_143f579d8)

if (*data_143f579d0 s<= 0)
    arg3[1] &= 0xfff7ffff

if (arg2 u<= 2 || arg2 - 9 u<= 1)
    *arg3 &= 0xefffffff

if (arg2 u<= 0x1a && test_bit(0x6780707, arg2))
    arg3[1] &= 0xfffffffe

if (arg2 != 2)
    if (arg2 u<= 0x1a && test_bit(0x6fc4303, arg2))
        arg3[1] &= 0xffffdddf
    
    if (arg2 u<= 0xa && test_bit(0x428, arg2))
        arg3[1] |= 0x20
    
    if (arg2 != 6)
        if (arg2 - 0x14 u<= 1 || arg2 - 0x19 u<= 1)
            *arg3 &= 0xfffffdff
            arg3[1] &= 0xfffffdfd
        
        if (arg2 == 0x12 || arg2 == 0x17)
            *arg3 &= 0xfffffdff
        
        if (arg2 == 0x1c)
            *arg3 &= 0xffffbfff
    else
        arg3[1] &= 0xffffddf7
else
    arg3[1] &= 0xffffdfdf

*arg3 = (not.b(data_143a3000c) & *arg3) | data_143a30014
*(arg3 + 1) = (not.b(data_143a3000d) & *(arg3 + 1)) | data_143a30015
*(arg3 + 2) = (not.b(data_143a3000e) & *(arg3 + 2)) | data_143a30016
*(arg3 + 3) = (not.b(data_143a3000f) & *(arg3 + 3)) | data_143a30017
arg3[1].b = (not.b(data_143a30010) & arg3[1].b) | data_143a30018
*(arg3 + 5) = (not.b(data_143a30011) & *(arg3 + 5)) | data_143a30019
*(arg3 + 6) = (not.b(data_143a30012) & *(arg3 + 6)) | data_143a3001a
char result = (not.b(data_143a30013) & *(arg3 + 7)) | data_143a3001b
*(arg3 + 7) = result
return result
