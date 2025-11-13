// 函数: sub_14139fcc0
// 地址: 0x14139fcc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143ec6790 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ec6790)
    
    if (data_143ec6790 == 0xffffffff)
        int64_t* rcx_1 = data_143db18d0
        
        if (rcx_1 == 0)
            sub_140a53c40()
            rcx_1 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        int64_t* rax_3 = (*(*rcx_1 + 0xb0))(rcx_1, u"r.BufferVisualizationDumpFrames", r8_1)
        
        if (rax_3 != 0)
            int64_t rdx_2 = *rax_3
            rax_3 = (*(rdx_2 + 0x58))(rax_3, rdx_2)
        
        data_143ec6788 = rax_3
        _Init_thread_footer(&data_143ec6790)

if (data_143de5438 != 0)
    sub_142090dd0()

char rcx

if (data_143de5438 == 0 || data_143a2e35a == 0)
    rcx = 0
else
    rcx = 1

void* result

if (*(data_143ec6788 + 4) != 0 || rcx != 0)
    result.b = 1
else
    result.b = 0

if (*(arg1 + 0x14a8) != 0 && result.b != 0)
    result.b = 1
    return result

result.b = 0
return result
