// 函数: sub_142547a30
// 地址: 0x142547a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143f699a0 s> *rbx_1)
    _Init_thread_header(&data_143f699a0)
    
    if (data_143f699a0 == 0xffffffff)
        sub_140b58260(&data_143f69998, u"MatineeData", 1)
        _Init_thread_footer(&data_143f699a0)

if (data_143f699b0 s> *rbx_1)
    _Init_thread_header(&data_143f699b0)
    
    if (data_143f699b0 == 0xffffffff)
        sub_140b58260(&data_143f699a8, u"PlayRate", 1)
        _Init_thread_footer(&data_143f699b0)

if (data_143f699c0 s> *rbx_1)
    _Init_thread_header(&data_143f699c0)
    
    if (data_143f699c0 == 0xffffffff)
        sub_140b58260(&data_143f699b8, u"bLooping", 1)
        _Init_thread_footer(&data_143f699c0)

if (data_143f699d0 s> *rbx_1)
    _Init_thread_header(&data_143f699d0)
    
    if (data_143f699d0 == 0xffffffff)
        sub_140b58260(&data_143f699c8, u"GroupActorInfos", 1)
        _Init_thread_footer(&data_143f699d0)

if (data_143f699e0 s> *rbx_1)
    _Init_thread_header(&data_143f699e0)
    
    if (data_143f699e0 == 0xffffffff)
        sub_140b58260(&data_143f699d8, u"bIsPlaying", 1)
        _Init_thread_footer(&data_143f699e0)

if (data_143f699f0 s> *rbx_1)
    _Init_thread_header(&data_143f699f0)
    
    if (data_143f699f0 == 0xffffffff)
        sub_140b58260(&data_143f699e8, u"bReversePlayback", 1)
        _Init_thread_footer(&data_143f699f0)

if (data_143f69a00 s> *rbx_1)
    _Init_thread_header(&data_143f69a00)
    
    if (data_143f69a00 == 0xffffffff)
        sub_140b58260(&data_143f699f8, u"bPaused", 1)
        _Init_thread_footer(&data_143f69a00)

if (data_143f69a10 s> *rbx_1)
    _Init_thread_header(&data_143f69a10)
    
    if (data_143f69a10 == 0xffffffff)
        sub_140b58260(&data_143f69a08, u"bPendingStop", 1)
        _Init_thread_footer(&data_143f69a10)

if (data_143f69a20 s> *rbx_1)
    _Init_thread_header(&data_143f69a20)
    
    if (data_143f69a20 == 0xffffffff)
        sub_140b58260(&data_143f69a18, u"InterpPosition", 1)
        _Init_thread_footer(&data_143f69a20)

if (data_143f69a30 s> *rbx_1)
    _Init_thread_header(&data_143f69a30)
    
    if (data_143f69a30 == 0xffffffff)
        sub_140b58260(&data_143f69a28, u"ReplicationForceIsPlaying", 1)
        _Init_thread_footer(&data_143f69a30)

void* rcx_1 = *arg2
void* rax_11 = *(rcx_1 + 0xa0)
int64_t arg_10
int64_t result

if (rax_11 == 0)
    arg_10 = 0
    result = 0
else
    result = *(rax_11 + 0x28)

if (data_143f69998 == result)
    void* rax_12 = *(rcx_1 + 0xb0)
    
    if (rax_12 == 0)
        arg_10 = 0
        result = 0
    else
        result = *(rax_12 + 0x28)
    
    if (data_143f699a8 == result)
        void* rax_13 = *(rcx_1 + 0xc0)
        
        if (rax_13 == 0)
            arg_10 = 0
            result = 0
        else
            result = *(rax_13 + 0x28)
        
        if (data_143f699b8 == result)
            void* rax_14 = *(rcx_1 + 0xd0)
            
            if (rax_14 == 0)
                arg_10 = 0
                result = 0
            else
                result = *(rax_14 + 0x28)
            
            if (data_143f699c8 == result)
                void* rax_15 = *(rcx_1 + 0xe0)
                
                if (rax_15 == 0)
                    arg_10 = 0
                    result = 0
                else
                    result = *(rax_15 + 0x28)
                
                if (data_143f699d8 == result)
                    void* rax_16 = *(rcx_1 + 0xf0)
                    
                    if (rax_16 != 0)
                        return *(rax_16 + 0x28)
                    
                    arg_10 = 0
                    return 0

return result
