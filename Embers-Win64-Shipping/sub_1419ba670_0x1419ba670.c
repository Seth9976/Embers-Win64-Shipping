// 函数: sub_1419ba670
// 地址: 0x1419ba670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
TEB* gsbase
int32_t* r14_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14
uint32_t result

if (data_143f1b0b8 s> *r14_1)
    int64_t r8_1
    result, r8_1 = _Init_thread_header(&data_143f1b0b8)
    
    if (data_143f1b0b8 == 0xffffffff)
        int64_t* rcx_2 = data_143db18d0
        
        if (rcx_2 == 0)
            sub_140a53c40()
            rcx_2 = data_143db18d0
        
        r8_1.b = 1
        int64_t* rax_2 = (*(*rcx_2 + 0xb0))(rcx_2, u"r.VirtualTextures", r8_1)
        int64_t rax_3
        
        if (rax_2 == 0)
            rax_3 = 0
        else
            int64_t rdx_1 = *rax_2
            rax_3 = (*(rdx_1 + 0x58))(rax_2, rdx_1)
        
        data_143f1b0b0 = rax_3
        _Init_thread_footer(&data_143f1b0b8)

int64_t rsi = data_143f1b0b0
int64_t rcx_1

if (data_143de5480 == 0)
    rcx_1 = 0
else
    rcx_1.b = GetCurrentThreadId() != data_143de5470

int64_t rbx_1

if (*(rsi + (rcx_1 << 2)) != 0)
    if (data_143f1b0c8 s> *r14_1)
        int64_t r8_2
        result, r8_2 = _Init_thread_header(&data_143f1b0c8)
        
        if (data_143f1b0c8 == 0xffffffff)
            int64_t* rcx_4 = data_143db18d0
            
            if (rcx_4 == 0)
                sub_140a53c40()
                rcx_4 = data_143db18d0
            
            r8_2.b = 1
            int64_t* rax_5 = (*(*rcx_4 + 0xb0))(rcx_4, u"r.Mobile.VirtualTextures", r8_2)
            int64_t rax_6
            
            if (rax_5 == 0)
                rax_6 = 0
            else
                int64_t rdx_2 = *rax_5
                rax_6 = (*(rdx_2 + 0x58))(rax_5, rdx_2)
            
            data_143f1b0c0 = rax_6
            _Init_thread_footer(&data_143f1b0c8)
    
    if (arg1 == 1)
        rbx_1 = data_143f1b0c0
        
        if (data_143de5480 != 0)
            rdi.b = GetCurrentThreadId() != data_143de5470

if (*(rsi + (rcx_1 << 2)) == 0 || (arg1 == 1 && *(rbx_1 + (rdi << 2)) == 0))
    result.b = 0
else
    result.b = 1

return result
