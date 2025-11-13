// 函数: sub_1424530a0
// 地址: 0x1424530a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143f5f2f8 s> *rbx_1)
    _Init_thread_header(&data_143f5f2f8)
    
    if (data_143f5f2f8 == 0xffffffff)
        sub_140b58260(&data_143f5f2f0, u"bReplicateMovement", 1)
        _Init_thread_footer(&data_143f5f2f8)

if (data_143f5f308 s> *rbx_1)
    _Init_thread_header(&data_143f5f308)
    
    if (data_143f5f308 == 0xffffffff)
        sub_140b58260(&data_143f5f300, u"bHidden", 1)
        _Init_thread_footer(&data_143f5f308)

if (data_143f5f318 s> *rbx_1)
    _Init_thread_header(&data_143f5f318)
    
    if (data_143f5f318 == 0xffffffff)
        sub_140b58260(&data_143f5f310, u"bTearOff", 1)
        _Init_thread_footer(&data_143f5f318)

if (data_143f5f328 s> *rbx_1)
    _Init_thread_header(&data_143f5f328)
    
    if (data_143f5f328 == 0xffffffff)
        sub_140b58260(&data_143f5f320, u"bCanBeDamaged", 1)
        _Init_thread_footer(&data_143f5f328)

if (data_143f5f338 s> *rbx_1)
    _Init_thread_header(&data_143f5f338)
    
    if (data_143f5f338 == 0xffffffff)
        sub_140b58260(&data_143f5f330, u"RemoteRole", 1)
        _Init_thread_footer(&data_143f5f338)

if (data_143f5f348 s> *rbx_1)
    _Init_thread_header(&data_143f5f348)
    
    if (data_143f5f348 == 0xffffffff)
        sub_140b58260(&data_143f5f340, u"ReplicatedMovement", 1)
        _Init_thread_footer(&data_143f5f348)

if (data_143f5f358 s> *rbx_1)
    _Init_thread_header(&data_143f5f358)
    
    if (data_143f5f358 == 0xffffffff)
        sub_140b58260(&data_143f5f350, u"AttachmentReplication", 1)
        _Init_thread_footer(&data_143f5f358)

if (data_143f5f368 s> *rbx_1)
    _Init_thread_header(&data_143f5f368)
    
    if (data_143f5f368 == 0xffffffff)
        sub_140b58260(&data_143f5f360, u"Owner", 1)
        _Init_thread_footer(&data_143f5f368)

if (data_143f5f378 s> *rbx_1)
    _Init_thread_header(&data_143f5f378)
    
    if (data_143f5f378 == 0xffffffff)
        sub_140b58260(&data_143f5f370, u"Role", 1)
        _Init_thread_footer(&data_143f5f378)

if (data_143f5f388 s> *rbx_1)
    _Init_thread_header(&data_143f5f388)
    
    if (data_143f5f388 == 0xffffffff)
        sub_140b58260(&data_143f5f380, u"Instigator", 1)
        _Init_thread_footer(&data_143f5f388)

int64_t* rcx_1 = *arg2
void* rax_11 = *rcx_1
int64_t arg_10
int64_t result

if (rax_11 == 0)
    arg_10 = 0
    result = 0
else
    result = *(rax_11 + 0x28)

if (data_143f5f2f0 == result)
    void* rax_12 = rcx_1[2]
    
    if (rax_12 == 0)
        arg_10 = 0
        result = 0
    else
        result = *(rax_12 + 0x28)
    
    if (data_143f5f300 == result)
        void* rax_13 = rcx_1[4]
        
        if (rax_13 == 0)
            arg_10 = 0
            result = 0
        else
            result = *(rax_13 + 0x28)
        
        if (data_143f5f310 == result)
            void* rax_14 = rcx_1[6]
            
            if (rax_14 == 0)
                arg_10 = 0
                result = 0
            else
                result = *(rax_14 + 0x28)
            
            if (data_143f5f320 == result)
                void* rax_15 = rcx_1[8]
                
                if (rax_15 == 0)
                    arg_10 = 0
                    result = 0
                else
                    result = *(rax_15 + 0x28)
                
                if (data_143f5f330 == result)
                    void* rax_16 = rcx_1[0xa]
                    
                    if (rax_16 != 0)
                        return *(rax_16 + 0x28)
                    
                    arg_10 = 0
                    return 0

return result
