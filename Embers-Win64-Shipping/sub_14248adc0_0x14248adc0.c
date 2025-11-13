// 函数: sub_14248adc0
// 地址: 0x14248adc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143f620e8 s> *rbx_1)
    _Init_thread_header(&data_143f620e8)
    
    if (data_143f620e8 == 0xffffffff)
        sub_140b58260(&data_143f620e0, u"ReplicatedBasedMovement", 1)
        _Init_thread_footer(&data_143f620e8)

if (data_143f620f8 s> *rbx_1)
    _Init_thread_header(&data_143f620f8)
    
    if (data_143f620f8 == 0xffffffff)
        sub_140b58260(&data_143f620f0, u"AnimRootMotionTranslationScale", 1)
        _Init_thread_footer(&data_143f620f8)

if (data_143f62108 s> *rbx_1)
    _Init_thread_header(&data_143f62108)
    
    if (data_143f62108 == 0xffffffff)
        sub_140b58260(&data_143f62100, u"ReplicatedServerLastTransformUpdateTimeStamp", 1)
        _Init_thread_footer(&data_143f62108)

if (data_143f62118 s> *rbx_1)
    _Init_thread_header(&data_143f62118)
    
    if (data_143f62118 == 0xffffffff)
        sub_140b58260(&data_143f62110, u"ReplayLastTransformUpdateTimeStamp", 1)
        _Init_thread_footer(&data_143f62118)

if (data_143f62128 s> *rbx_1)
    _Init_thread_header(&data_143f62128)
    
    if (data_143f62128 == 0xffffffff)
        sub_140b58260(&data_143f62120, u"ReplicatedMovementMode", 1)
        _Init_thread_footer(&data_143f62128)

if (data_143f62138 s> *rbx_1)
    _Init_thread_header(&data_143f62138)
    
    if (data_143f62138 == 0xffffffff)
        sub_140b58260(&data_143f62130, u"bIsCrouched", 1)
        _Init_thread_footer(&data_143f62138)

if (data_143f62148 s> *rbx_1)
    _Init_thread_header(&data_143f62148)
    
    if (data_143f62148 == 0xffffffff)
        sub_140b58260(&data_143f62140, u"bProxyIsJumpForceApplied", 1)
        _Init_thread_footer(&data_143f62148)

if (data_143f62158 s> *rbx_1)
    _Init_thread_header(&data_143f62158)
    
    if (data_143f62158 == 0xffffffff)
        sub_140b58260(&data_143f62150, u"JumpMaxHoldTime", 1)
        _Init_thread_footer(&data_143f62158)

if (data_143f62168 s> *rbx_1)
    _Init_thread_header(&data_143f62168)
    
    if (data_143f62168 == 0xffffffff)
        sub_140b58260(&data_143f62160, u"JumpMaxCount", 1)
        _Init_thread_footer(&data_143f62168)

if (data_143f62178 s> *rbx_1)
    _Init_thread_header(&data_143f62178)
    
    if (data_143f62178 == 0xffffffff)
        sub_140b58260(&data_143f62170, u"RepRootMotion", 1)
        _Init_thread_footer(&data_143f62178)

void* rcx_1 = *arg2
void* rax_11 = *(rcx_1 + 0xd0)
int64_t arg_10
int64_t result

if (rax_11 == 0)
    arg_10 = 0
    result = 0
else
    result = *(rax_11 + 0x28)

if (data_143f620e0 == result)
    void* rax_12 = *(rcx_1 + 0xe0)
    
    if (rax_12 == 0)
        arg_10 = 0
        result = 0
    else
        result = *(rax_12 + 0x28)
    
    if (data_143f620f0 == result)
        void* rax_13 = *(rcx_1 + 0xf0)
        
        if (rax_13 == 0)
            arg_10 = 0
            result = 0
        else
            result = *(rax_13 + 0x28)
        
        if (data_143f62100 == result)
            void* rax_14 = *(rcx_1 + 0x100)
            
            if (rax_14 == 0)
                arg_10 = 0
                result = 0
            else
                result = *(rax_14 + 0x28)
            
            if (data_143f62110 == result)
                void* rax_15 = *(rcx_1 + 0x110)
                
                if (rax_15 == 0)
                    arg_10 = 0
                    result = 0
                else
                    result = *(rax_15 + 0x28)
                
                if (data_143f62120 == result)
                    void* rax_16 = *(rcx_1 + 0x120)
                    
                    if (rax_16 != 0)
                        return *(rax_16 + 0x28)
                    
                    arg_10 = 0
                    return 0

return result
