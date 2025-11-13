// 函数: sub_142578040
// 地址: 0x142578040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143f6c1a0 s> *rbx_1)
    _Init_thread_header(&data_143f6c1a0)
    
    if (data_143f6c1a0 == 0xffffffff)
        sub_140b58260(&data_143f6c198, u"Score", 1)
        _Init_thread_footer(&data_143f6c1a0)

if (data_143f6c1b0 s> *rbx_1)
    _Init_thread_header(&data_143f6c1b0)
    
    if (data_143f6c1b0 == 0xffffffff)
        sub_140b58260(&data_143f6c1a8, u"PlayerId", 1)
        _Init_thread_footer(&data_143f6c1b0)

if (data_143f6c1c0 s> *rbx_1)
    _Init_thread_header(&data_143f6c1c0)
    
    if (data_143f6c1c0 == 0xffffffff)
        sub_140b58260(&data_143f6c1b8, u"Ping", 1)
        _Init_thread_footer(&data_143f6c1c0)

if (data_143f6c1d0 s> *rbx_1)
    _Init_thread_header(&data_143f6c1d0)
    
    if (data_143f6c1d0 == 0xffffffff)
        sub_140b58260(&data_143f6c1c8, u"bIsSpectator", 1)
        _Init_thread_footer(&data_143f6c1d0)

if (data_143f6c1e0 s> *rbx_1)
    _Init_thread_header(&data_143f6c1e0)
    
    if (data_143f6c1e0 == 0xffffffff)
        sub_140b58260(&data_143f6c1d8, u"bOnlySpectator", 1)
        _Init_thread_footer(&data_143f6c1e0)

if (data_143f6c1f0 s> *rbx_1)
    _Init_thread_header(&data_143f6c1f0)
    
    if (data_143f6c1f0 == 0xffffffff)
        sub_140b58260(&data_143f6c1e8, u"bIsABot", 1)
        _Init_thread_footer(&data_143f6c1f0)

if (data_143f6c200 s> *rbx_1)
    _Init_thread_header(&data_143f6c200)
    
    if (data_143f6c200 == 0xffffffff)
        sub_140b58260(&data_143f6c1f8, u"bIsInactive", 1)
        _Init_thread_footer(&data_143f6c200)

if (data_143f6c210 s> *rbx_1)
    _Init_thread_header(&data_143f6c210)
    
    if (data_143f6c210 == 0xffffffff)
        sub_140b58260(&data_143f6c208, u"bFromPreviousLevel", 1)
        _Init_thread_footer(&data_143f6c210)

if (data_143f6c220 s> *rbx_1)
    _Init_thread_header(&data_143f6c220)
    
    if (data_143f6c220 == 0xffffffff)
        sub_140b58260(&data_143f6c218, u"StartTime", 1)
        _Init_thread_footer(&data_143f6c220)

if (data_143f6c230 s> *rbx_1)
    _Init_thread_header(&data_143f6c230)
    
    if (data_143f6c230 == 0xffffffff)
        sub_140b58260(&data_143f6c228, u"UniqueId", 1)
        _Init_thread_footer(&data_143f6c230)

if (data_143f6c240 s> *rbx_1)
    _Init_thread_header(&data_143f6c240)
    
    if (data_143f6c240 == 0xffffffff)
        sub_140b58260(&data_143f6c238, u"PlayerNamePrivate", 1)
        _Init_thread_footer(&data_143f6c240)

void* rcx_1 = *arg2
void* rax_12 = *(rcx_1 + 0xa0)
int64_t arg_10
int64_t result

if (rax_12 == 0)
    arg_10 = 0
    result = 0
else
    result = *(rax_12 + 0x28)

if (data_143f6c198 == result)
    void* rax_13 = *(rcx_1 + 0xb0)
    
    if (rax_13 == 0)
        arg_10 = 0
        result = 0
    else
        result = *(rax_13 + 0x28)
    
    if (data_143f6c1a8 == result)
        void* rax_14 = *(rcx_1 + 0xc0)
        
        if (rax_14 == 0)
            arg_10 = 0
            result = 0
        else
            result = *(rax_14 + 0x28)
        
        if (data_143f6c1b8 == result)
            void* rax_15 = *(rcx_1 + 0xd0)
            
            if (rax_15 == 0)
                arg_10 = 0
                result = 0
            else
                result = *(rax_15 + 0x28)
            
            if (data_143f6c1c8 == result)
                void* rax_16 = *(rcx_1 + 0xe0)
                
                if (rax_16 == 0)
                    arg_10 = 0
                    result = 0
                else
                    result = *(rax_16 + 0x28)
                
                if (data_143f6c1d8 == result)
                    void* rax_17 = *(rcx_1 + 0xf0)
                    
                    if (rax_17 == 0)
                        arg_10 = 0
                        result = 0
                    else
                        result = *(rax_17 + 0x28)
                    
                    if (data_143f6c1e8 == result)
                        void* rax_18 = *(rcx_1 + 0x100)
                        
                        if (rax_18 != 0)
                            return *(rax_18 + 0x28)
                        
                        arg_10 = 0
                        return 0

return result
