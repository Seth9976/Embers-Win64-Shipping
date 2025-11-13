// 函数: sub_141911c10
// 地址: 0x141911c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x128) += 1
int32_t rax = *(arg1 + 0x128)

if (rax == 0xffffffff)
    *(arg1 + 0x128) = rax + 1

int64_t rdi = 0
TEB* gsbase

if (data_143eff610 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143eff610)
    
    if (data_143eff610 == 0xffffffff)
        int64_t* rcx_2 = data_143db18d0
        
        if (rcx_2 == 0)
            sub_140a53c40()
            rcx_2 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        int64_t* rax_7 = (*(*rcx_2 + 0xb0))(rcx_2, u"rhi.ResourceTableCaching", r8_1)
        int64_t rax_8
        
        if (rax_7 == 0)
            rax_8 = 0
        else
            int64_t rdx_1 = *rax_7
            rax_8 = (*(rdx_1 + 0x58))(rax_7, rdx_1)
        
        data_143eff608 = rax_8
        _Init_thread_footer(&data_143eff610)

int64_t rsi = data_143eff608

if (rsi != 0 && data_143de5480 != 0)
    rdi.b = GetCurrentThreadId() != data_143de5470

if (rsi == 0 || *(rsi + (rdi << 2)) == 1)
    *(arg1 + 0x12c) = *(arg1 + 0x128)

int32_t result = sub_141957ff0(*(arg1 + 0x15ba0))
*(arg1 + 0x15b38) = result
return result
