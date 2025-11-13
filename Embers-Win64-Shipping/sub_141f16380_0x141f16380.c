// 函数: sub_141f16380
// 地址: 0x141f16380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = *(arg1 + 0x1b0)
int32_t rbx = 0
int32_t rbp = arg2

if (arg3 == 0)
    int64_t rdi_1 = data_143f3ae50
    int64_t r8
    
    if (data_143de5480 == 0)
        r8 = 0
    else
        r8.b = GetCurrentThreadId() != data_143de5470
    
    rdi = *(rdi_1 + (r8 << 2))
    
    if (rdi s<= 0)
        rdi = 0
    
    TEB* gsbase
    
    if (data_143f3b0a0
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f3b0a0)
        
        if (data_143f3b0a0 == 0xffffffff)
            int64_t* rcx_5 = data_143db18d0
            
            if (rcx_5 == 0)
                sub_140a53c40()
                rcx_5 = data_143db18d0
            
            int64_t r8_2
            r8_2.b = 1
            data_143f3b098 = (*(*rcx_5 + 0xb0))(rcx_5, u"r.Shadow.UnbuiltPreviewInGame", r8_2)
            _Init_thread_footer(&data_143f3b0a0)
    
    int64_t* rcx_2 = data_143f3b098
    
    if ((*(*rcx_2 + 0x90))(rcx_2) == 0)
        int64_t* rcx_3 = *(arg1 + 0x18)
        
        if ((*(*rcx_3 + 0x2b0))(rcx_3) == 0)
            rdi = 0

if (sub_141f12f60(arg1, arg3, rbp) f> 0f)
    rbx = rdi

if (rbx s<= rbp)
    rbp = rbx

return zx.q(rbp)
