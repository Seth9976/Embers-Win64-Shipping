// 函数: sub_1419882c0
// 地址: 0x1419882c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)
int64_t rax_2
TEB* gsbase

if (rdi.d u> 0x30)
label_1419885e6:
    
    if ((rdi - 0x20).d u> 0xf)
        rax_2 = data_143f02138
    else
        sub_141971cf0()
        rax_2 = *(zx.q((rdi - 0x20).d) * 0x18 + 0x143f0f2b0)
else
    switch (rdi)
        case 0
            rax_2 = data_143f02138
        case 1, 3, 5, 7, 8, 9, 0xa, 0x13, 0x17, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 
                0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f
            goto label_1419885e6
        case 2
            rax_2 = data_143f021e8
        case 4
            rax_2 = data_143f021f0
        case 6
            rax_2 = data_143f021c8
        case 0xb
            rax_2 = data_143f02208
        case 0xc
            rax_2 = data_143f02210
        case 0xd
            rax_2 = data_143f021d8
        case 0xe
            rax_2 = data_143f021c0
        case 0xf
            rax_2 = data_143f021d0
        case 0x10
            rax_2 = data_143f02230
        case 0x11
            int64_t rdi_2 = 0
            
            if (data_143f0fb90 s>
                    *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                _Init_thread_header(&data_143f0fb90)
                
                if (data_143f0fb90 == 0xffffffff)
                    int64_t* rcx_4 = data_143db18d0
                    
                    if (rcx_4 == 0)
                        sub_140a53c40()
                        rcx_4 = data_143db18d0
                    
                    int64_t r8_4
                    r8_4.b = 1
                    int64_t* rax_29 = (*(*rcx_4 + 0xb0))(rcx_4, u"r.Vulkan.UseRealUBs", r8_4)
                    int64_t rax_30
                    
                    if (rax_29 == 0)
                        rax_30 = 0
                    else
                        int64_t rdx_6 = *rax_29
                        rax_30 = (*(rdx_6 + 0x58))(rax_29, rdx_6)
                    
                    data_143f0fb88 = rax_30
                    _Init_thread_footer(&data_143f0fb90)
            
            int64_t rsi_2 = data_143f0fb88
            
            if (rsi_2 != 0)
                if (data_143de5480 != 0)
                    rdi_2.b = GetCurrentThreadId() != data_143de5470
                
                rax_2 = data_143f02270
            
            if (rsi_2 == 0 || *(rsi_2 + (rdi_2 << 2)) != 0)
                rax_2 = data_143f02268
        case 0x12
            rax_2 = data_143f02238
        case 0x14
            int64_t rdi_3 = 0
            
            if (data_143f0fba0 s>
                    *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                _Init_thread_header(&data_143f0fba0)
                
                if (data_143f0fba0 == 0xffffffff)
                    int64_t* rcx_6 = data_143db18d0
                    
                    if (rcx_6 == 0)
                        sub_140a53c40()
                        rcx_6 = data_143db18d0
                    
                    int64_t r8_5
                    r8_5.b = 1
                    int64_t* rax_32 = (*(*rcx_6 + 0xb0))(rcx_6, u"r.Vulkan.UseRealUBs", r8_5)
                    int64_t rax_33
                    
                    if (rax_32 == 0)
                        rax_33 = 0
                    else
                        int64_t rdx_7 = *rax_32
                        rax_33 = (*(rdx_7 + 0x58))(rax_32, rdx_7)
                    
                    data_143f0fb98 = rax_33
                    _Init_thread_footer(&data_143f0fba0)
            
            int64_t rsi_3 = data_143f0fb98
            
            if (rsi_3 != 0)
                if (data_143de5480 != 0)
                    rdi_3.b = GetCurrentThreadId() != data_143de5470
                
                rax_2 = data_143f02278
            
            if (rsi_3 == 0 || *(rsi_3 + (rdi_3 << 2)) != 0)
                rax_2 = data_143f02280
        case 0x15
            rax_2 = data_143f02250
        case 0x16
            rax_2 = data_143f02240
        case 0x18
            rax_2 = data_143f021e0
        case 0x19
            rax_2 = data_143f021f8
        case 0x1a
            rax_2 = data_143f02200
        case 0x1b
            rax_2 = data_143f02228
        case 0x1c
            int64_t rdi_4 = 0
            
            if (data_143f0fbb0 s>
                    *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                _Init_thread_header(&data_143f0fbb0)
                
                if (data_143f0fbb0 == 0xffffffff)
                    int64_t* rcx_8 = data_143db18d0
                    
                    if (rcx_8 == 0)
                        sub_140a53c40()
                        rcx_8 = data_143db18d0
                    
                    int64_t r8_6
                    r8_6.b = 1
                    int64_t* rax_35 = (*(*rcx_8 + 0xb0))(rcx_8, u"r.Vulkan.UseRealUBs", r8_6)
                    int64_t rax_36
                    
                    if (rax_35 == 0)
                        rax_36 = 0
                    else
                        int64_t rdx_8 = *rax_35
                        rax_36 = (*(rdx_8 + 0x58))(rax_35, rdx_8)
                    
                    data_143f0fba8 = rax_36
                    _Init_thread_footer(&data_143f0fbb0)
            
            int64_t rsi_4 = data_143f0fba8
            
            if (rsi_4 != 0)
                if (data_143de5480 != 0)
                    rdi_4.b = GetCurrentThreadId() != data_143de5470
                
                rax_2 = data_143f02290
            
            if (rsi_4 == 0 || *(rsi_4 + (rdi_4 << 2)) != 0)
                rax_2 = data_143f02288
        case 0x1d
            int64_t rdi_1 = 0
            
            if (data_143f0fb80 s>
                    *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                _Init_thread_header(&data_143f0fb80)
                
                if (data_143f0fb80 == 0xffffffff)
                    int64_t* rcx_2 = data_143db18d0
                    
                    if (rcx_2 == 0)
                        sub_140a53c40()
                        rcx_2 = data_143db18d0
                    
                    int64_t r8_3
                    r8_3.b = 1
                    int64_t* rax_26 = (*(*rcx_2 + 0xb0))(rcx_2, u"r.Vulkan.UseRealUBs", r8_3)
                    int64_t rax_27
                    
                    if (rax_26 == 0)
                        rax_27 = 0
                    else
                        int64_t rdx_5 = *rax_26
                        rax_27 = (*(rdx_5 + 0x58))(rax_26, rdx_5)
                    
                    data_143f0fb78 = rax_27
                    _Init_thread_footer(&data_143f0fb80)
            
            int64_t rsi_1 = data_143f0fb78
            
            if (rsi_1 != 0)
                if (data_143de5480 != 0)
                    rdi_1.b = GetCurrentThreadId() != data_143de5470
                
                rax_2 = data_143f02260
            
            if (rsi_1 == 0 || *(rsi_1 + (rdi_1 << 2)) != 0)
                rax_2 = data_143f02258
        case 0x1e
            rax_2 = data_143f02218
        case 0x1f
            rax_2 = data_143f02220
        case 0x30
            int64_t rdi_5 = 0
            
            if (data_143f0fbc0 s>
                    *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                _Init_thread_header(&data_143f0fbc0)
                
                if (data_143f0fbc0 == 0xffffffff)
                    int64_t* rcx_10 = data_143db18d0
                    
                    if (rcx_10 == 0)
                        sub_140a53c40()
                        rcx_10 = data_143db18d0
                    
                    int64_t r8_7
                    r8_7.b = 1
                    int64_t* rax_38 = (*(*rcx_10 + 0xb0))(rcx_10, u"r.Vulkan.UseRealUBs", r8_7)
                    int64_t rax_39
                    
                    if (rax_38 == 0)
                        rax_39 = 0
                    else
                        int64_t rdx_9 = *rax_38
                        rax_39 = (*(rdx_9 + 0x58))(rax_38, rdx_9)
                    
                    data_143f0fbb8 = rax_39
                    _Init_thread_footer(&data_143f0fbc0)
            
            int64_t rsi_5 = data_143f0fbb8
            
            if (rsi_5 != 0)
                if (data_143de5480 != 0)
                    rdi_5.b = GetCurrentThreadId() != data_143de5470
                
                rax_2 = data_143f022a0
            
            if (rsi_5 == 0 || *(rsi_5 + (rdi_5 << 2)) != 0)
                rax_2 = data_143f02298
*arg1 = rax_2
return arg1
