// 函数: sub_141df0c00
// 地址: 0x141df0c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r9 = zx.q(*(arg1 + 0x60))
__builtin_memset(arg1 + 0x48, 0, 0x18)
void* result
TEB* gsbase

if (r9.d == 0)
    int32_t* rdi_2 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14
    
    if (data_143f394d8 s> *rdi_2)
        _Init_thread_header(&data_143f394d8)
        
        if (data_143f394d8 == 0xffffffff)
            data_143f394d0 = &data_143241f18
            _Init_thread_footer(&data_143f394d8)
    
    if (data_143f394e8 s> *rdi_2)
        _Init_thread_header(&data_143f394e8)
        
        if (data_143f394e8 == 0xffffffff)
            data_143f394e0 = &data_143241f88
            _Init_thread_footer(&data_143f394e8)
    
    if (data_143f394f8 s> *rdi_2)
        _Init_thread_header(&data_143f394f8)
        
        if (data_143f394f8 == 0xffffffff)
            data_143f394f0 = &data_143241ff8
            _Init_thread_footer(&data_143f394f8)
    
    if (data_143f39508 s> *rdi_2)
        _Init_thread_header(&data_143f39508)
        
        if (data_143f39508 == 0xffffffff)
            data_143f39500 = &data_143242068
            _Init_thread_footer(&data_143f39508)
    
    if (data_143f39518 s> *rdi_2)
        _Init_thread_header(&data_143f39518)
        
        if (data_143f39518 == 0xffffffff)
            data_143f39510 = &data_1432420d8
            _Init_thread_footer(&data_143f39518)
    
    if (data_143f39528 s> *rdi_2)
        _Init_thread_header(&data_143f39528)
        
        if (data_143f39528 == 0xffffffff)
            data_143f39520 = &data_143242148
            _Init_thread_footer(&data_143f39528)
    
    if (data_143f39538 s> *rdi_2)
        _Init_thread_header(&data_143f39538)
        
        if (data_143f39538 == 0xffffffff)
            data_143f39530 = &data_1432421b8
            _Init_thread_footer(&data_143f39538)
    
    uint64_t r9_1 = zx.q(*(arg1 + 0x64))
    int32_t rcx = r9_1.d
    
    if (r9_1.d == 0)
        *(arg1 + 0x48) = &data_143f394d0
    else if (rcx == 1)
        *(arg1 + 0x48) = &data_143f394e0
    else if (rcx == 3)
        *(arg1 + 0x48) = &data_143f39500
    else if (rcx == 6)
        *(arg1 + 0x48) = &data_143f39530
    else
        sub_140af98a0("Unknown", 0x273, u"%i: unknown or unsupported translation compression", r9_1)
        sub_140afbb40()
    
    int64_t r9_2 = sx.q(*(arg1 + 0x68))
    
    if (r9_2.d u> 6)
        sub_140af98a0("Unknown", 0x290, u"%i: unknown or unsupported rotation compression", r9_2)
        result = sub_140afbb40()
    else
        result = &__dos_header.e_magic[zx.q(jump_table_141df1350[r9_2])]
        
        switch (result)
            case 0x141df0d3f
                *(arg1 + 0x50) = &data_143f394d0
            case 0x141df0d45
                *(arg1 + 0x50) = &data_143f394e0
            case 0x141df0d4b
                result = &data_143f394f0
                *(arg1 + 0x50) = &data_143f394f0
            case 0x141df0d58
                *(arg1 + 0x50) = &data_143f39500
            case 0x141df0d5e
                result = &data_143f39510
                *(arg1 + 0x50) = &data_143f39510
            case 0x141df0d6b
                result = &data_143f39520
                *(arg1 + 0x50) = &data_143f39520
            case 0x141df0d78
                *(arg1 + 0x50) = &data_143f39530
    
    r9 = zx.q(*(arg1 + 0x6c))
    int32_t rdx_1 = r9.d
    
    if (r9.d == 0)
        *(arg1 + 0x58) = &data_143f394d0
    else if (rdx_1 == 1)
        *(arg1 + 0x58) = &data_143f394e0
    else if (rdx_1 == 3)
        *(arg1 + 0x58) = &data_143f39500
    else
        if (rdx_1 != 6)
            sub_140af98a0("Unknown", 0x2a4, u"%i: unknown or unsupported Scale compression", r9)
            return sub_140afbb40()
        
        *(arg1 + 0x58) = &data_143f39530
else if (r9.d != 1)
    if (r9.d != 2)
        sub_140af98a0("Unknown", 0x307, u"%i: unknown or unsupported animation format", r9)
        return sub_140afbb40()
    
    if (data_143f395b8
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f395b8)
        
        if (data_143f395b8 == 0xffffffff)
            data_143f395b0 = &data_143241e98
            _Init_thread_footer(&data_143f395b8)
    
    result = &data_143f395b0
    *(arg1 + 0x50) = &data_143f395b0
    *(arg1 + 0x48) = &data_143f395b0
    *(arg1 + 0x58) = &data_143f395b0
else
    int32_t* rdi_5 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14
    
    if (data_143f39548 s> *rdi_5)
        _Init_thread_header(&data_143f39548)
        
        if (data_143f39548 == 0xffffffff)
            data_143f39540 = &data_143242228
            _Init_thread_footer(&data_143f39548)
    
    if (data_143f39558 s> *rdi_5)
        _Init_thread_header(&data_143f39558)
        
        if (data_143f39558 == 0xffffffff)
            data_143f39550 = &data_143242298
            _Init_thread_footer(&data_143f39558)
    
    if (data_143f39568 s> *rdi_5)
        _Init_thread_header(&data_143f39568)
        
        if (data_143f39568 == 0xffffffff)
            data_143f39560 = &data_143242308
            _Init_thread_footer(&data_143f39568)
    
    if (data_143f39578 s> *rdi_5)
        _Init_thread_header(&data_143f39578)
        
        if (data_143f39578 == 0xffffffff)
            data_143f39570 = &data_143242378
            _Init_thread_footer(&data_143f39578)
    
    if (data_143f39588 s> *rdi_5)
        _Init_thread_header(&data_143f39588)
        
        if (data_143f39588 == 0xffffffff)
            data_143f39580 = &data_1432423e8
            _Init_thread_footer(&data_143f39588)
    
    if (data_143f39598 s> *rdi_5)
        _Init_thread_header(&data_143f39598)
        
        if (data_143f39598 == 0xffffffff)
            data_143f39590 = &data_143242458
            _Init_thread_footer(&data_143f39598)
    
    if (data_143f395a8 s> *rdi_5)
        _Init_thread_header(&data_143f395a8)
        
        if (data_143f395a8 == 0xffffffff)
            data_143f395a0 = &data_1432424c8
            _Init_thread_footer(&data_143f395a8)
    
    uint64_t r9_3 = zx.q(*(arg1 + 0x64))
    int32_t rcx_3 = r9_3.d
    
    if (r9_3.d == 0)
        *(arg1 + 0x48) = &data_143f39540
    else if (rcx_3 == 1)
        *(arg1 + 0x48) = &data_143f39550
    else if (rcx_3 == 3)
        *(arg1 + 0x48) = &data_143f39570
    else if (rcx_3 == 6)
        *(arg1 + 0x48) = &data_143f395a0
    else
        sub_140af98a0("Unknown", 0x2c2, u"%i: unknown or unsupported translation compression", r9_3)
        sub_140afbb40()
    
    int64_t r9_4 = sx.q(*(arg1 + 0x68))
    
    if (r9_4.d u> 6)
        sub_140af98a0("Unknown", 0x2df, u"%i: unknown or unsupported rotation compression", r9_4)
        result = sub_140afbb40()
    else
        result = &__dos_header.e_magic[zx.q(jump_table_141df136c[r9_4])]
        
        switch (result)
            case 0x141df0ef7
                *(arg1 + 0x50) = &data_143f39540
            case 0x141df0efd
                *(arg1 + 0x50) = &data_143f39550
            case 0x141df0f03
                result = &data_143f39560
                *(arg1 + 0x50) = &data_143f39560
            case 0x141df0f10
                *(arg1 + 0x50) = &data_143f39570
            case 0x141df0f16
                result = &data_143f39580
                *(arg1 + 0x50) = &data_143f39580
            case 0x141df0f23
                result = &data_143f39590
                *(arg1 + 0x50) = &data_143f39590
            case 0x141df0f30
                *(arg1 + 0x50) = &data_143f395a0
    
    r9 = zx.q(*(arg1 + 0x6c))
    int32_t rcx_6 = r9.d
    
    if (r9.d == 0)
        *(arg1 + 0x58) = &data_143f39540
    else if (rcx_6 == 1)
        *(arg1 + 0x58) = &data_143f39550
    else if (rcx_6 == 3)
        *(arg1 + 0x58) = &data_143f39570
    else
        if (rcx_6 != 6)
            sub_140af98a0("Unknown", 0x2f3, u"%i: unknown or unsupported Scale compression", r9)
            return sub_140afbb40()
        
        *(arg1 + 0x58) = &data_143f395a0
return result
