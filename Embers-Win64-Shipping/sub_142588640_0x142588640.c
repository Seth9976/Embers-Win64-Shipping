// 函数: sub_142588640
// 地址: 0x142588640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143f6d408 s> *rbx_1)
    _Init_thread_header(&data_143f6d408)
    
    if (data_143f6d408 == 0xffffffff)
        sub_140b58260(&data_143f6d400, u"AttachParent", 1)
        _Init_thread_footer(&data_143f6d408)

if (data_143f6d418 s> *rbx_1)
    _Init_thread_header(&data_143f6d418)
    
    if (data_143f6d418 == 0xffffffff)
        sub_140b58260(&data_143f6d410, u"AttachSocketName", 1)
        _Init_thread_footer(&data_143f6d418)

if (data_143f6d428 s> *rbx_1)
    _Init_thread_header(&data_143f6d428)
    
    if (data_143f6d428 == 0xffffffff)
        sub_140b58260(&data_143f6d420, u"AttachChildren", 1)
        _Init_thread_footer(&data_143f6d428)

if (data_143f6d438 s> *rbx_1)
    _Init_thread_header(&data_143f6d438)
    
    if (data_143f6d438 == 0xffffffff)
        sub_140b58260(&data_143f6d430, u"RelativeLocation", 1)
        _Init_thread_footer(&data_143f6d438)

if (data_143f6d448 s> *rbx_1)
    _Init_thread_header(&data_143f6d448)
    
    if (data_143f6d448 == 0xffffffff)
        sub_140b58260(&data_143f6d440, u"RelativeRotation", 1)
        _Init_thread_footer(&data_143f6d448)

if (data_143f6d458 s> *rbx_1)
    _Init_thread_header(&data_143f6d458)
    
    if (data_143f6d458 == 0xffffffff)
        sub_140b58260(&data_143f6d450, u"RelativeScale3D", 1)
        _Init_thread_footer(&data_143f6d458)

if (data_143f6d468 s> *rbx_1)
    _Init_thread_header(&data_143f6d468)
    
    if (data_143f6d468 == 0xffffffff)
        sub_140b58260(&data_143f6d460, u"bAbsoluteLocation", 1)
        _Init_thread_footer(&data_143f6d468)

if (data_143f6d478 s> *rbx_1)
    _Init_thread_header(&data_143f6d478)
    
    if (data_143f6d478 == 0xffffffff)
        sub_140b58260(&data_143f6d470, u"bAbsoluteRotation", 1)
        _Init_thread_footer(&data_143f6d478)

if (data_143f6d488 s> *rbx_1)
    _Init_thread_header(&data_143f6d488)
    
    if (data_143f6d488 == 0xffffffff)
        sub_140b58260(&data_143f6d480, u"bAbsoluteScale", 1)
        _Init_thread_footer(&data_143f6d488)

if (data_143f6d498 s> *rbx_1)
    _Init_thread_header(&data_143f6d498)
    
    if (data_143f6d498 == 0xffffffff)
        sub_140b58260(&data_143f6d490, u"bVisible", 1)
        _Init_thread_footer(&data_143f6d498)

if (data_143f6d4a8 s> *rbx_1)
    _Init_thread_header(&data_143f6d4a8)
    
    if (data_143f6d4a8 == 0xffffffff)
        sub_140b58260(&data_143f6d4a0, u"bShouldBeAttached", 1)
        _Init_thread_footer(&data_143f6d4a8)

if (data_143f6d4b8 s> *rbx_1)
    _Init_thread_header(&data_143f6d4b8)
    
    if (data_143f6d4b8 == 0xffffffff)
        sub_140b58260(&data_143f6d4b0, u"bShouldSnapLocationWhenAttached", 1)
        _Init_thread_footer(&data_143f6d4b8)

if (data_143f6d4c8 s> *rbx_1)
    _Init_thread_header(&data_143f6d4c8)
    
    if (data_143f6d4c8 == 0xffffffff)
        sub_140b58260(&data_143f6d4c0, u"bShouldSnapRotationWhenAttached", 1)
        _Init_thread_footer(&data_143f6d4c8)

void* rcx_1 = *arg2
void* rax_14 = *(rcx_1 + 0x20)
int64_t arg_10
int64_t result

if (rax_14 == 0)
    arg_10 = 0
    result = 0
else
    result = *(rax_14 + 0x28)

if (data_143f6d400 == result)
    void* rax_15 = *(rcx_1 + 0x30)
    
    if (rax_15 == 0)
        arg_10 = 0
        result = 0
    else
        result = *(rax_15 + 0x28)
    
    if (data_143f6d410 == result)
        void* rax_16 = *(rcx_1 + 0x40)
        
        if (rax_16 == 0)
            arg_10 = 0
            result = 0
        else
            result = *(rax_16 + 0x28)
        
        if (data_143f6d420 == result)
            void* rax_17 = *(rcx_1 + 0x50)
            
            if (rax_17 == 0)
                arg_10 = 0
                result = 0
            else
                result = *(rax_17 + 0x28)
            
            if (data_143f6d430 == result)
                void* rax_18 = *(rcx_1 + 0x60)
                
                if (rax_18 == 0)
                    arg_10 = 0
                    result = 0
                else
                    result = *(rax_18 + 0x28)
                
                if (data_143f6d440 == result)
                    void* rax_19 = *(rcx_1 + 0x70)
                    
                    if (rax_19 == 0)
                        arg_10 = 0
                        result = 0
                    else
                        result = *(rax_19 + 0x28)
                    
                    if (data_143f6d450 == result)
                        void* rax_20 = *(rcx_1 + 0x80)
                        
                        if (rax_20 == 0)
                            arg_10 = 0
                            result = 0
                        else
                            result = *(rax_20 + 0x28)
                        
                        if (data_143f6d460 == result)
                            void* rax_21 = *(rcx_1 + 0x90)
                            
                            if (rax_21 == 0)
                                arg_10 = 0
                                result = 0
                            else
                                result = *(rax_21 + 0x28)
                            
                            if (data_143f6d470 == result)
                                void* rax_22 = *(rcx_1 + 0xa0)
                                
                                if (rax_22 != 0)
                                    return *(rax_22 + 0x28)
                                
                                arg_10 = 0
                                return 0

return result
